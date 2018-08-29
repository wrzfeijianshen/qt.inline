//  header block begin
// since 0x050300
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerainfocontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraInfoControl is pure virtual: true
// QCameraInfoControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCameraInfoControl_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraInfoControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraInfoControl_t qt_meta_stringdata_MyQCameraInfoControl = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCameraInfoControl"
  },
  "MyQCameraInfoControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraInfoControl[] = {
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
class Q_DECL_EXPORT MyQCameraInfoControl : public QCameraInfoControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraInfoControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraInfoControl.data,
  qt_meta_data_MyQCameraInfoControl,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraInfoControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraInfoControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraInfoControl::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQCameraInfoControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::Position cameraPosition(const QString &)
  virtual QCamera::Position cameraPosition(const QString & deviceName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cameraPosition", &handled, 1, (uint64_t)&deviceName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::Position)(int)(irv);
      // Elaborated Enum QCamera::Position
    } else {
    return (QCamera::Position){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int cameraOrientation(const QString &)
  virtual int cameraOrientation(const QString & deviceName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cameraOrientation", &handled, 1, (uint64_t)&deviceName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:57
// [4] QCamera::Position cameraPosition(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:58
// [4] int cameraOrientation(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCameraInfoControl10metaObjectEv(void *this_) {
  return (void*)((QCameraInfoControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraInfoControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QCameraInfoControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraInfoControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraInfoControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraInfoControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:55
// [-2] void ~QCameraInfoControl()
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraInfoControlD2Ev(void *this_) {
  delete (QCameraInfoControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:57
// [4] QCamera::Position cameraPosition(const QString &)
extern "C" Q_DECL_EXPORT
QCamera::Position C_ZNK18QCameraInfoControl14cameraPositionERK7QString(void *this_, QString* deviceName) {
  return (QCamera::Position)((QCameraInfoControl*)this_)->cameraPosition(*deviceName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:58
// [4] int cameraOrientation(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QCameraInfoControl17cameraOrientationERK7QString(void *this_, QString* deviceName) {
  return (int)((QCameraInfoControl*)this_)->cameraOrientation(*deviceName);
}

//  main block end
