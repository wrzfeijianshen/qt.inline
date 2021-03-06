#usage:
# defines: -DANDROID=on, -DMINGW_NOIPBIZ=on, -DWITH_QT_STATIC=on, -DWINARCH=x32
#          -DUSE_WEBENGINES=on
cmake_minimum_required(VERSION 3.0)
set(PROJSOVER "5.12")
set(PROJVER_PATCH "106")
set(PROJVERSTR "${PROJSOVER}.${PROJVER_PATCH}")
project(qt5inline)

set(CMAKE_VERBOSE_MAKEFILE on)

# don't use -std=c++11,
# use -std=gnu++11 to fix pch error: trigraphs was enabled in PCH file but is currently disabled
set(CMAKE_CXX_FLAGS "-g -O0 -std=gnu++11")
set(CMAKE_C_FLAGS "-g -O0 -std=c11")
#set(CMAKE_C_COMPILER clang)
#set(CMAKE_CXX_COMPILER clang++)
IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  if(${CMAKE_C_COMPILER} MATCHES "clang")
    set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-z,defs --no-undefined") ### linux clang only flags
  endif(${CMAKE_C_COMPILER} MATCHES "clang")
ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")


# max effort for keep inline functions/methods.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_USE_CXX11_ABI=1 -fno-inline")

# set toolchains by cmake definition(s)
# for android arm build begin, usage: cmake -DANDROID=on .
if(ANDROID)
  set(ANDNDK_DIR "/opt/andndk16")  # standalone ndk arm/x86

  # if ndk <= 17 then gcc, ndk >= 18 then clang
  set(ANDCC "clang")
  set(ANDCXX "clang++")
  if(EXISTS ${ANDNDK_DIR}/bin/clang50
      OR EXISTS ${ANDNDK_DIR}/bin/clang60)
    set(ANDCC "gcc")
    set(ANDCXX "g++")
    # ndk16=y|n, ndk17=y, ndk18=n
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -isystem ${ANDNDK_DIR}/include/c++/4.9.x")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -isystem ${ANDNDK_DIR}/sysroot/usr/include")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -isystem ${ANDNDK_DIR}/include/c++/4.9.x")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -isystem ${ANDNDK_DIR}/sysroot/usr/include")
  endif()

  # switch to gcc for fix now day's ndk17 problem: #3
  if(EXISTS ${ANDNDK_DIR}/bin/arm-linux-androideabi-gcc)
    message("Android arm ${ANDCC} build enabled.")
    set(CMAKE_C_COMPILER ${ANDNDK_DIR}/bin/arm-linux-androideabi-${ANDCC})
    set(CMAKE_CXX_COMPILER ${ANDNDK_DIR}/bin/arm-linux-androideabi-${ANDCXX})
  else()
    message("Android x86 ${ANDCC} build enabled.")
    set(CMAKE_C_COMPILER ${ANDNDK_DIR}/bin/i686-linux-android-${ANDCC})
    set(CMAKE_CXX_COMPILER ${ANDNDK_DIR}/bin/i686-linux-android-${ANDCXX})
  endif()

  set(CMAKE_SYSROOT "${ANDNDK_DIR}/sysroot")
  # 这个参数可以设置多个值
  set(CMAKE_FIND_ROOT_PATH  ${QT_INSTALL_DIR} "${QT_INSTALL_DIR}")
  set(CMAKE_SHARED_LINKER_FLAGS "--sysroot=${ANDNDK_DIR}/sysroot")
  set(CMAKE_EXE_LINKER_FLAGS "--sysroot=${ANDNDK_DIR}/sysroot")
elseif(MINGW_NOIPBIZ)
  include(tc-mingw-noipbiz.cmake)
endif(ANDROID)
# for android arm build end

# usage: cmake -DWITH_MINGW_QT_STATIC
set(_QT_STATIC_PREF "")
if(WITH_QT_STATIC)
  if(MINGW_NOIPBIZ)
    set(_QT_STATIC_PFX "Static")
  endif(MINGW_NOIPBIZ)
endif(WITH_QT_STATIC)

set(CMAKE_AUTOMOC off)  ### it's sure, the wrapper not need moc

find_package(PkgConfig REQUIRED)
pkg_check_modules(FreeType2 freetype2)
pkg_check_modules(OpenSSL openssl)
#find_package(OpenSSL)
pkg_check_modules(LibFFI libffi)

find_package(${_QT_STATIC_PFX}Qt5Core)
find_package(${_QT_STATIC_PFX}Qt5Gui)
find_package(${_QT_STATIC_PFX}Qt5Widgets)

find_package(${_QT_STATIC_PFX}Qt5Network)
find_package(${_QT_STATIC_PFX}Qt5Qml)
find_package(${_QT_STATIC_PFX}Qt5Quick)

# find_package(Qt5QuickTemplates2)
find_package(${_QT_STATIC_PFX}Qt5QuickControls2)
find_package(${_QT_STATIC_PFX}Qt5QuickWidgets)

# webengines
if(USE_WEBENGINES)
find_package(${_QT_STATIC_PFX}Qt5Positioning)
find_package(${_QT_STATIC_PFX}Qt5WebChannel)
find_package(${_QT_STATIC_PFX}Qt5WebEngineCore)
find_package(${_QT_STATIC_PFX}Qt5WebEngine)
find_package(${_QT_STATIC_PFX}Qt5WebEngineWidgets)
endif(USE_WEBENGINES)

if(ANDROID)
  find_package(${_QT_STATIC_PFX}Qt5AndroidExtras)
endif(ANDROID)

find_package(${_QT_STATIC_PFX}Qt5Svg)
find_package(${_QT_STATIC_PFX}Qt5Multimedia)

configure_file(preheaders/qthdrsrc.h.in preheaders/qthdrsrc.h)

# set(qt5_inline_core_srcs "src/core/qobject.cxx")
# set(qt5_inline_gui_srcs "src/gui/qevent.cxx")
# set(qt5_inline_widgets_srcs "src/widgets/qwidget.cxx")

# 用不用初始化这个值呢
# set(qt5_inline_core_srcs "")
# set(qt5_inline_gui_srcs "")
# set(qt5_inline_widgets_srcs "")

set(CMAKE_INCLUDE_CURRENT_DIR on)
include_directories("./src" ${LibFFI_INCLUDE_DIRS})

set(all_qt5_inline_srcs "")
file(GLOB qt5_inline_srcs
  # src/core/qstring.cxx # for compile test
  src/core/modfix.cpp
  src/core/qstringlistx.cpp
  src/qml/qgolistmodel.cpp
  #src/qml/moc_qgolistmodel.cpp

  src/core/*.cxx
  src/gui/*.cxx
  src/widgets/*.cxx

  # qmls
  src/network/*.cxx
  src/qml/*.cxx
  src/quick/*.cxx
  src/quicktemplates2/*.cxx
  src/quickcontrols2/*.cxx
  src/quickwidgets/*.cxx
  src/svg/*.cxx
  src/multimedia/*.cxx
  )
qt5_wrap_cpp(moc_cpp_files src/qml/qgolistmodel.cpp)
add_custom_target(vtmoc_cpp_files ALL DEPENDS ${moc_cpp_files}) # make sure generator run first

set(qt5_inline_srcs_webengines "")
if(USE_WEBENGINES)
  file(GLOB qt5_inline_srcs_webengines
    # webengines
    src/positioning/*.cxx
    src/webchannel/*.cxx
    src/webenginecore/*.cxx
    src/webengine/*.cxx
    src/webenginewidgets/*.cxx
  )
endif(USE_WEBENGINES)
set(qt5_inline_srcs_android "")
set(qt5_inline_srcs_androidextras "")
if(ANDROID)
  file(GLOB qt5_inline_srcs_android
    src/qtandroid/*.cpp
    )
  file(GLOB qt5_inline_srcs_androidextras
    src/androidextras/*.cxx
    src/androidextras/*.cpp
    )
endif(ANDROID)
# message(${qt5_inline_srcs})
message("can you see that?")
foreach(var ${qt5_inline_srcs})
  # message(${var})
  set(all_qt5_inline_srcs ${all_qt5_inline_srcs} ${var})
endforeach(var)

set(qt5_inline_extra_srcs src/check_assert.cpp src/ffi_invoke.cpp
  src/qihotfix.cpp src/qdynslotobject.cpp src/callback_inherit.cpp
  preheaders/qthdrsrc.cpp preheaders/qthdrsrc.h)

set(all_qt5_inline_srcs ${qt5_inline_extra_srcs} ${qt5_inline_srcs_webengines} ${all_qt5_inline_srcs} )
if(ANDROID)
  set(all_qt5_inline_srcs ${all_qt5_inline_srcs} ${qt5_inline_srcs_androidextras} ${qt5_inline_srcs_android})
endif(ANDROID)

# resolve static ldflags
# note: the order
set(LDFLAGS_FOR_CUSTOM_LINUX_STATIC_BUILD  Qt5::QXcbIntegrationPlugin Qt5XcbQpa xcb-static Qt5ThemeSupport Qt5EdidSupport Qt5FontDatabaseSupport Qt5ServiceSupport Qt5EventDispatcherSupport Qt5DBus qtfreetype     pthread GL qtlibpng qtharfbuzz qtpcre2 SM ICE X11 xcb X11-xcb dl)
set(LDFLAGS_FOR_CUSTOM_WIN_STATIC_BUILD ${_QT_STATIC_PFX}Qt5::QWindowsIntegrationPlugin mpr)
set(LDFLAGS_FOR_CUSTOM_MAC_STATIC_BUILD Qt5::QCocoaIntegrationPlugin)
set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD "")
if(WITH_QT_STATIC)
  if(MINGW_NOIPBIZ)
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_WIN_STATIC_BUILD})
  elseif(MINGW_MXE)
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_WIN_STATIC_BUILD}
      ${Qt5Core_DIR}/../../libQt5AccessibilitySupport.a
      ${Qt5Core_DIR}/../../libQt5EventDispatcherSupport.a
      ${Qt5Core_DIR}/../../libQt5FontDatabaseSupport.a
      ${Qt5Core_DIR}/../../libQt5ThemeSupport.a
      ${FreeType2_LIBRARIES} ${OpenSSL_LIBRARIES} -ldnsapi -liphlpapi
      ${Qt5Core_DIR}/../../libQt5WindowsUIAutomationSupport.a -lwtsapi32 # qt5.12
      )
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_MAC_STATIC_BUILD})
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD log)
  else(MINGW_NOIPBIZ)
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_LINUX_STATIC_BUILD})
    link_directories(/opt/qt510st/lib/ /opt/qt510st/plugins/platforms/)
  endif(MINGW_NOIPBIZ)
endif(WITH_QT_STATIC)

add_library(Qt5Inline SHARED ${all_qt5_inline_srcs})
target_link_libraries(Qt5Inline
  ${_QT_STATIC_PFX}Qt5::Core ${_QT_STATIC_PFX}Qt5::Gui ${_QT_STATIC_PFX}Qt5::Widgets ${_QT_STATIC_PFX}Qt5::Network
  ${_QT_STATIC_PFX}Qt5::Qml ${_QT_STATIC_PFX}Qt5::Quick ${_QT_STATIC_PFX}Qt5::QuickControls2 ${_QT_STATIC_PFX}Qt5::QuickWidgets
  )
target_link_libraries(Qt5Inline ${_QT_STATIC_PFX}Qt5::Svg ${_QT_STATIC_PFX}Qt5::Multimedia)
if(USE_WEBENGINES)
  target_link_libraries(Qt5Inline ${_QT_STATIC_PFX}Qt5::Positioning ${_QT_STATIC_PFX}Qt5::WebChannel ${_QT_STATIC_PFX}Qt5::WebEngineCore ${_QT_STATIC_PFX}Qt5::WebEngine ${_QT_STATIC_PFX}Qt5::WebEngineWidgets)
endif(USE_WEBENGINES)
target_link_libraries(Qt5Inline ${LDFLAGS_FOR_CUSTOM_STATIC_BUILD})
if(ANDROID)
  target_link_libraries(Qt5Inline ${_QT_STATIC_PFX}Qt5::AndroidExtras)
  target_link_libraries(Qt5Inline log)
endif(ANDROID)
target_link_libraries(Qt5Inline ${LibFFI_LDFLAGS})

# version and install
set_target_properties(Qt5Inline PROPERTIES VERSION ${PROJVERSTR} SOVERSION ${PROJSOVER})
configure_file(Qt5Inline.pc.in Qt5Inline.pc @ONLY)
install(TARGETS Qt5Inline
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
install(FILES ${CMAKE_BINARY_DIR}/Qt5Inline.pc
  DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig)

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")
include(PrecompiledHeader)
add_precompiled_header(Qt5Inline preheaders/qthdrsrc.h FORCEINCLUDE)

# link tests
add_executable(lnktst tests/lnktst.c)
target_link_libraries(lnktst Qt5Inline)
if(ANDROID)
  target_link_libraries(lnktst log)
endif(ANDROID)

