//  header block begin

// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediarecordercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaRecorderControl is pure virtual: true
// QMediaRecorderControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaRecorderControl_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaRecorderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaRecorderControl_t qt_meta_stringdata_MyQMediaRecorderControl = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQMediaRecorderControl"
  },
  "MyQMediaRecorderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaRecorderControl[] = {
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
class Q_DECL_EXPORT MyQMediaRecorderControl : public QMediaRecorderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaRecorderControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaRecorderControl.data,
  qt_meta_data_MyQMediaRecorderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaRecorderControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaRecorderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaRecorderControl::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQMediaRecorderControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QUrl outputLocation()
  virtual QUrl outputLocation() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"outputLocation", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QUrl){};}
    auto prv = (QUrl*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QUrl
    } else {
    return (QUrl){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool setOutputLocation(const QUrl &)
  virtual bool setOutputLocation(const QUrl & location)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setOutputLocation", &handled, 1, (uint64_t)&location, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaRecorder::State state()
  virtual QMediaRecorder::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaRecorder::State)(int)(irv);
      // Elaborated Enum QMediaRecorder::State
    } else {
    return (QMediaRecorder::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaRecorder::Status status()
  virtual QMediaRecorder::Status status() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"status", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaRecorder::Status)(int)(irv);
      // Elaborated Enum QMediaRecorder::Status
    } else {
    return (QMediaRecorder::Status){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 duration()
  virtual qint64 duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isMuted()
  virtual bool isMuted() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isMuted", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal volume()
  virtual qreal volume() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"volume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void applySettings()
  virtual void applySettings()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"applySettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::applySettings();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setState(QMediaRecorder::State)
  virtual void setState(QMediaRecorder::State state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setState(state);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setMuted(bool)
  virtual void setMuted(bool muted)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMuted", &handled, 1, (uint64_t)muted, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setMuted(muted);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setVolume(qreal)
  virtual void setVolume(qreal volume)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVolume", &handled, 1, (uint64_t)&volume, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setVolume(volume);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaRecorderControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaRecorderControl* qo = (MyQMediaRecorderControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:63
// [8] QUrl outputLocation()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:64
// [1] bool setOutputLocation(const QUrl &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:66
// [4] QMediaRecorder::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:67
// [4] QMediaRecorder::Status status()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:69
// [8] qint64 duration()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:71
// [1] bool isMuted()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:72
// [8] qreal volume()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:74
// [-2] void applySettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:86
// [-2] void setState(QMediaRecorder::State)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:87
// [-2] void setMuted(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:88
// [-2] void setVolume(qreal)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMediaRecorderControl10metaObjectEv(void *this_) {
  return (void*)((QMediaRecorderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaRecorderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QMediaRecorderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaRecorderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:61
// [-2] void ~QMediaRecorderControl()
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControlD2Ev(void *this_) {
  delete (QMediaRecorderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:63
// [8] QUrl outputLocation()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMediaRecorderControl14outputLocationEv(void *this_) {
  auto rv = ((QMediaRecorderControl*)this_)->outputLocation();
return new QUrl(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:64
// [1] bool setOutputLocation(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QMediaRecorderControl17setOutputLocationERK4QUrl(void *this_, QUrl* location) {
  return (bool)((QMediaRecorderControl*)this_)->setOutputLocation(*location);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:66
// [4] QMediaRecorder::State state()
extern "C" Q_DECL_EXPORT
QMediaRecorder::State C_ZNK21QMediaRecorderControl5stateEv(void *this_) {
  return (QMediaRecorder::State)((QMediaRecorderControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:67
// [4] QMediaRecorder::Status status()
extern "C" Q_DECL_EXPORT
QMediaRecorder::Status C_ZNK21QMediaRecorderControl6statusEv(void *this_) {
  return (QMediaRecorder::Status)((QMediaRecorderControl*)this_)->status();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:69
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK21QMediaRecorderControl8durationEv(void *this_) {
  return (qint64)((QMediaRecorderControl*)this_)->duration();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:71
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QMediaRecorderControl7isMutedEv(void *this_) {
  return (bool)((QMediaRecorderControl*)this_)->isMuted();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:72
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QMediaRecorderControl6volumeEv(void *this_) {
  return (qreal)((QMediaRecorderControl*)this_)->volume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:74
// [-2] void applySettings()
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13applySettingsEv(void *this_) {
  ((QMediaRecorderControl*)this_)->applySettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:77
// [-2] void stateChanged(QMediaRecorder::State)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl12stateChangedEN14QMediaRecorder5StateE(void *this_, QMediaRecorder::State state) {
  ((QMediaRecorderControl*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:78
// [-2] void statusChanged(QMediaRecorder::Status)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13statusChangedEN14QMediaRecorder6StatusE(void *this_, QMediaRecorder::Status status) {
  ((QMediaRecorderControl*)this_)->statusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:79
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl15durationChangedEx(void *this_, qint64 position) {
  ((QMediaRecorderControl*)this_)->durationChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:80
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl12mutedChangedEb(void *this_, bool muted) {
  ((QMediaRecorderControl*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:81
// [-2] void volumeChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13volumeChangedEd(void *this_, qreal volume) {
  ((QMediaRecorderControl*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:82
// [-2] void actualLocationChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl21actualLocationChangedERK4QUrl(void *this_, QUrl* location) {
  ((QMediaRecorderControl*)this_)->actualLocationChanged(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:83
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QMediaRecorderControl*)this_)->error(error, *errorString);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:86
// [-2] void setState(QMediaRecorder::State)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl8setStateEN14QMediaRecorder5StateE(void *this_, QMediaRecorder::State state) {
  ((QMediaRecorderControl*)this_)->setState(state);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:87
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl8setMutedEb(void *this_, bool muted) {
  ((QMediaRecorderControl*)this_)->setMuted(muted);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:88
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl9setVolumeEd(void *this_, qreal volume) {
  ((QMediaRecorderControl*)this_)->setVolume(volume);
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
