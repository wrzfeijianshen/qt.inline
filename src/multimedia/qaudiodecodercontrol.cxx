//  header block begin

// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodecodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoderControl is pure virtual: true
// QAudioDecoderControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioDecoderControl_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioDecoderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioDecoderControl_t qt_meta_stringdata_MyQAudioDecoderControl = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAudioDecoderControl"
  },
  "MyQAudioDecoderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioDecoderControl[] = {
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
class Q_DECL_EXPORT MyQAudioDecoderControl : public QAudioDecoderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioDecoderControl::staticMetaObject,
  qt_meta_stringdata_MyQAudioDecoderControl.data,
  qt_meta_data_MyQAudioDecoderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioDecoderControl.stringdata0))
      return static_cast<void*>(this);
  return QAudioDecoderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioDecoderControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioDecoderControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAudioDecoder::State state()
  virtual QAudioDecoder::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudioDecoder::State)(int)(irv);
      // Elaborated Enum QAudioDecoder::State
    } else {
    return (QAudioDecoder::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString sourceFilename()
  virtual QString sourceFilename() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceFilename", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSourceFilename(const QString &)
  virtual void setSourceFilename(const QString & fileName)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSourceFilename", &handled, 1, (uint64_t)&fileName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setSourceFilename(fileName);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QIODevice * sourceDevice()
  virtual QIODevice * sourceDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSourceDevice(QIODevice *)
  virtual void setSourceDevice(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSourceDevice", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setSourceDevice(device);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void start()
  virtual void start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::start();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void stop()
  virtual void stop()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::stop();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAudioFormat audioFormat()
  virtual QAudioFormat audioFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"audioFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioFormat){};}
    auto prv = (QAudioFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioFormat
    } else {
    return (QAudioFormat){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setAudioFormat(const QAudioFormat &)
  virtual void setAudioFormat(const QAudioFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAudioFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setAudioFormat(format);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAudioBuffer read()
  virtual QAudioBuffer read()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"read", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioBuffer){};}
    auto prv = (QAudioBuffer*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioBuffer
    } else {
    return (QAudioBuffer){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool bufferAvailable()
  virtual bool bufferAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 position()
  virtual qint64 position() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"position", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
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

};

extern "C" Q_DECL_EXPORT
void* C_QAudioDecoderControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioDecoderControl* qo = (MyQAudioDecoderControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:60
// [4] QAudioDecoder::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:62
// [8] QString sourceFilename()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:63
// [-2] void setSourceFilename(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:65
// [8] QIODevice * sourceDevice()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:66
// [-2] void setSourceDevice(QIODevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:68
// [-2] void start()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:69
// [-2] void stop()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:71
// [8] QAudioFormat audioFormat()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:72
// [-2] void setAudioFormat(const QAudioFormat &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:74
// [8] QAudioBuffer read()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:75
// [1] bool bufferAvailable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:77
// [8] qint64 position()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:78
// [8] qint64 duration()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl10metaObjectEv(void *this_) {
  return (void*)((QAudioDecoderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAudioDecoderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioDecoderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QAudioDecoderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioDecoderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAudioDecoderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioDecoderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAudioDecoderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioDecoderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:58
// [-2] void ~QAudioDecoderControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControlD2Ev(void *this_) {
  delete (QAudioDecoderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:60
// [4] QAudioDecoder::State state()
extern "C" Q_DECL_EXPORT
QAudioDecoder::State C_ZNK20QAudioDecoderControl5stateEv(void *this_) {
  return (QAudioDecoder::State)((QAudioDecoderControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:62
// [8] QString sourceFilename()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl14sourceFilenameEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->sourceFilename();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:63
// [-2] void setSourceFilename(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl17setSourceFilenameERK7QString(void *this_, QString* fileName) {
  ((QAudioDecoderControl*)this_)->setSourceFilename(*fileName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:65
// [8] QIODevice * sourceDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl12sourceDeviceEv(void *this_) {
  return (void*)((QAudioDecoderControl*)this_)->sourceDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:66
// [-2] void setSourceDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15setSourceDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioDecoderControl*)this_)->setSourceDevice(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:68
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl5startEv(void *this_) {
  ((QAudioDecoderControl*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:69
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl4stopEv(void *this_) {
  ((QAudioDecoderControl*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:71
// [8] QAudioFormat audioFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl11audioFormatEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->audioFormat();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:72
// [-2] void setAudioFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl14setAudioFormatERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoderControl*)this_)->setAudioFormat(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:74
// [8] QAudioBuffer read()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAudioDecoderControl4readEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->read();
return new QAudioBuffer(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:75
// [1] bool bufferAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QAudioDecoderControl15bufferAvailableEv(void *this_) {
  return (bool)((QAudioDecoderControl*)this_)->bufferAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:77
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAudioDecoderControl8positionEv(void *this_) {
  return (qint64)((QAudioDecoderControl*)this_)->position();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:78
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAudioDecoderControl8durationEv(void *this_) {
  return (qint64)((QAudioDecoderControl*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:81
// [-2] void stateChanged(QAudioDecoder::State)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl12stateChangedEN13QAudioDecoder5StateE(void *this_, QAudioDecoder::State newState) {
  ((QAudioDecoderControl*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:82
// [-2] void formatChanged(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl13formatChangedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoderControl*)this_)->formatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:83
// [-2] void sourceChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl13sourceChangedEv(void *this_) {
  ((QAudioDecoderControl*)this_)->sourceChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:85
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QAudioDecoderControl*)this_)->error(error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:87
// [-2] void bufferReady()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl11bufferReadyEv(void *this_) {
  ((QAudioDecoderControl*)this_)->bufferReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:88
// [-2] void bufferAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl22bufferAvailableChangedEb(void *this_, bool available) {
  ((QAudioDecoderControl*)this_)->bufferAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:89
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl8finishedEv(void *this_) {
  ((QAudioDecoderControl*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:91
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15positionChangedEx(void *this_, qint64 position) {
  ((QAudioDecoderControl*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:92
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15durationChangedEx(void *this_, qint64 duration) {
  ((QAudioDecoderControl*)this_)->durationChanged(duration);
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
