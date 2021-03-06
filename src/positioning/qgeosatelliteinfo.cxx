//  header block begin

// since 0x050200
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeosatelliteinfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoSatelliteInfo is pure virtual: false
// QGeoSatelliteInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoSatelliteInfo_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoSatelliteInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoSatelliteInfo_t qt_meta_stringdata_MyQGeoSatelliteInfo = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGeoSatelliteInfo"
  },
  "MyQGeoSatelliteInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoSatelliteInfo[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGeoSatelliteInfo : public QGeoSatelliteInfo {
public:
  virtual ~MyQGeoSatelliteInfo() {}
// void QGeoSatelliteInfo()
MyQGeoSatelliteInfo() : QGeoSatelliteInfo() {}
// void QGeoSatelliteInfo(const QGeoSatelliteInfo &)
MyQGeoSatelliteInfo(const QGeoSatelliteInfo & other) : QGeoSatelliteInfo(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:64
// [-2] void QGeoSatelliteInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN17QGeoSatelliteInfoC2Ev() {
  return  new QGeoSatelliteInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:65
// [-2] void QGeoSatelliteInfo(const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGeoSatelliteInfoC2ERKS_(QGeoSatelliteInfo* other) {
  return  new QGeoSatelliteInfo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:66
// [-2] void ~QGeoSatelliteInfo()
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfoD2Ev(void *this_) {
  delete (QGeoSatelliteInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:68
// [8] QGeoSatelliteInfo & operator=(const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGeoSatelliteInfoaSERKS_(void *this_, QGeoSatelliteInfo* other) {
  auto& rv = ((QGeoSatelliteInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:70
// [1] bool operator==(const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGeoSatelliteInfoeqERKS_(void *this_, QGeoSatelliteInfo* other) {
  return (bool)((QGeoSatelliteInfo*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:71
// [1] bool operator!=(const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGeoSatelliteInfoneERKS_(void *this_, QGeoSatelliteInfo* other) {
  return (bool)((QGeoSatelliteInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:75
// [-2] void setSatelliteSystem(QGeoSatelliteInfo::SatelliteSystem)
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfo18setSatelliteSystemENS_15SatelliteSystemE(void *this_, QGeoSatelliteInfo::SatelliteSystem system) {
  ((QGeoSatelliteInfo*)this_)->setSatelliteSystem(system);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:76
// [4] QGeoSatelliteInfo::SatelliteSystem satelliteSystem()
extern "C" Q_DECL_EXPORT
QGeoSatelliteInfo::SatelliteSystem C_ZNK17QGeoSatelliteInfo15satelliteSystemEv(void *this_) {
  return (QGeoSatelliteInfo::SatelliteSystem)((QGeoSatelliteInfo*)this_)->satelliteSystem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:78
// [-2] void setSatelliteIdentifier(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfo22setSatelliteIdentifierEi(void *this_, int satId) {
  ((QGeoSatelliteInfo*)this_)->setSatelliteIdentifier(satId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:79
// [4] int satelliteIdentifier()
extern "C" Q_DECL_EXPORT
int C_ZNK17QGeoSatelliteInfo19satelliteIdentifierEv(void *this_) {
  return (int)((QGeoSatelliteInfo*)this_)->satelliteIdentifier();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:81
// [-2] void setSignalStrength(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfo17setSignalStrengthEi(void *this_, int signalStrength) {
  ((QGeoSatelliteInfo*)this_)->setSignalStrength(signalStrength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:82
// [4] int signalStrength()
extern "C" Q_DECL_EXPORT
int C_ZNK17QGeoSatelliteInfo14signalStrengthEv(void *this_) {
  return (int)((QGeoSatelliteInfo*)this_)->signalStrength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:84
// [-2] void setAttribute(QGeoSatelliteInfo::Attribute, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfo12setAttributeENS_9AttributeEd(void *this_, QGeoSatelliteInfo::Attribute attribute, qreal value) {
  ((QGeoSatelliteInfo*)this_)->setAttribute(attribute, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:85
// [8] qreal attribute(QGeoSatelliteInfo::Attribute)
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QGeoSatelliteInfo9attributeENS_9AttributeE(void *this_, QGeoSatelliteInfo::Attribute attribute) {
  return (qreal)((QGeoSatelliteInfo*)this_)->attribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:86
// [-2] void removeAttribute(QGeoSatelliteInfo::Attribute)
extern "C" Q_DECL_EXPORT
void C_ZN17QGeoSatelliteInfo15removeAttributeENS_9AttributeE(void *this_, QGeoSatelliteInfo::Attribute attribute) {
  ((QGeoSatelliteInfo*)this_)->removeAttribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:88
// [1] bool hasAttribute(QGeoSatelliteInfo::Attribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGeoSatelliteInfo12hasAttributeENS_9AttributeE(void *this_, QGeoSatelliteInfo::Attribute attribute) {
  return (bool)((QGeoSatelliteInfo*)this_)->hasAttribute(attribute);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
