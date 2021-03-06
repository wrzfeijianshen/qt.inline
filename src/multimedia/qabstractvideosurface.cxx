//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideosurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideosurface.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoSurface is pure virtual: true
// QAbstractVideoSurface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractVideoSurface_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractVideoSurface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractVideoSurface_t qt_meta_stringdata_MyQAbstractVideoSurface = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQAbstractVideoSurface"
  },
  "MyQAbstractVideoSurface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractVideoSurface[] = {
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
class Q_DECL_EXPORT MyQAbstractVideoSurface : public QAbstractVideoSurface {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractVideoSurface::staticMetaObject,
  qt_meta_stringdata_MyQAbstractVideoSurface.data,
  qt_meta_data_MyQAbstractVideoSurface,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractVideoSurface.stringdata0))
      return static_cast<void*>(this);
  return QAbstractVideoSurface::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractVideoSurface::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractVideoSurface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
  virtual QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType type_) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedPixelFormats", &handled, 1, (uint64_t)type_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QVideoFrame::PixelFormat>){};}
    auto prv = (QList<QVideoFrame::PixelFormat>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QVideoFrame::PixelFormat>
    } else {
    return (QList<QVideoFrame::PixelFormat>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool present(const QVideoFrame &)
  virtual bool present(const QVideoFrame & frame)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"present", &handled, 1, (uint64_t)&frame, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QAbstractVideoSurface(QObject *)
MyQAbstractVideoSurface(QObject * parent) : QAbstractVideoSurface(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAbstractVideoSurface_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractVideoSurface* qo = (MyQAbstractVideoSurface*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:70
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:84
// [1] bool present(const QVideoFrame &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface10metaObjectEv(void *this_) {
  return (void*)((QAbstractVideoSurface*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractVideoSurface*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QAbstractVideoSurface11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractVideoSurface*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoSurface::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurface6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractVideoSurface::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:67
// [-2] void QAbstractVideoSurface(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractVideoSurfaceC2EP7QObject(QObject * parent) {
  return  new MyQAbstractVideoSurface(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:68
// [-2] void ~QAbstractVideoSurface()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurfaceD2Ev(void *this_) {
  delete (QAbstractVideoSurface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:70
// [-2] QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
QList<QVideoFrame::PixelFormat>* C_ZNK21QAbstractVideoSurface21supportedPixelFormatsEN20QAbstractVideoBuffer10HandleTypeE(void *this_, QAbstractVideoBuffer::HandleType type_) {
  auto rv = ((QAbstractVideoSurface*)this_)->supportedPixelFormats(type_);
return new QList<QVideoFrame::PixelFormat>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:72
// [1] bool isFormatSupported(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAbstractVideoSurface17isFormatSupportedERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QAbstractVideoSurface*)this_)->isFormatSupported(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:73
// [8] QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface13nearestFormatERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  auto rv = ((QAbstractVideoSurface*)this_)->nearestFormat(*format);
return new QVideoSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:75
// [8] QVideoSurfaceFormat surfaceFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface13surfaceFormatEv(void *this_) {
  auto rv = ((QAbstractVideoSurface*)this_)->surfaceFormat();
return new QVideoSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:77
// [8] QSize nativeResolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractVideoSurface16nativeResolutionEv(void *this_) {
  auto rv = ((QAbstractVideoSurface*)this_)->nativeResolution();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:79
// [1] bool start(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractVideoSurface5startERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QAbstractVideoSurface*)this_)->start(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:80
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface4stopEv(void *this_) {
  ((QAbstractVideoSurface*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:82
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAbstractVideoSurface8isActiveEv(void *this_) {
  return (bool)((QAbstractVideoSurface*)this_)->isActive();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:84
// [1] bool present(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractVideoSurface7presentERK11QVideoFrame(void *this_, QVideoFrame* frame) {
  return (bool)((QAbstractVideoSurface*)this_)->present(*frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:86
// [4] QAbstractVideoSurface::Error error()
extern "C" Q_DECL_EXPORT
QAbstractVideoSurface::Error C_ZNK21QAbstractVideoSurface5errorEv(void *this_) {
  return (QAbstractVideoSurface::Error)((QAbstractVideoSurface*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:89
// [-2] void activeChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface13activeChangedEb(void *this_, bool active) {
  ((QAbstractVideoSurface*)this_)->activeChanged(active);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:90
// [-2] void surfaceFormatChanged(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface20surfaceFormatChangedERK19QVideoSurfaceFormat(void *this_, QVideoSurfaceFormat* format) {
  ((QAbstractVideoSurface*)this_)->surfaceFormatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:91
// [-2] void supportedFormatsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface23supportedFormatsChangedEv(void *this_) {
  ((QAbstractVideoSurface*)this_)->supportedFormatsChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:92
// [-2] void nativeResolutionChanged(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractVideoSurface23nativeResolutionChangedERK5QSize(void *this_, QSize* resolution) {
  ((QAbstractVideoSurface*)this_)->nativeResolutionChanged(*resolution);
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
