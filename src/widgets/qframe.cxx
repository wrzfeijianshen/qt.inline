//  header block begin

// /usr/include/qt/QtWidgets/qframe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qframe.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFrame is pure virtual: false
// QFrame has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFrame_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFrame_t qt_meta_stringdata_MyQFrame = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQFrame"
  },
  "MyQFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFrame[] = {
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
class Q_DECL_EXPORT MyQFrame : public QFrame {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFrame::staticMetaObject,
  qt_meta_stringdata_MyQFrame.data,
  qt_meta_data_MyQFrame,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFrame.stringdata0))
      return static_cast<void*>(this);
  return QFrame::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFrame::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFrame() {}
// void QFrame(QWidget *, Qt::WindowFlags)
MyQFrame(QWidget * parent, QFlags<Qt::WindowType> f) : QFrame(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFrame::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFrame::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFrame::changeEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QFrame_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFrame* qo = (MyQFrame*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:111
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QFrame5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFrame*)this_)->QFrame::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:112
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QFrame*)this_)->QFrame::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:113
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QFrame*)this_)->QFrame::changeEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QFrame10metaObjectEv(void *this_) {
  return (void*)((QFrame*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QFrame11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFrame*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QFrame11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFrame*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QFrame2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFrame::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QFrame6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFrame::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:64
// [-2] void QFrame(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN6QFrameC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQFrame*)(0);
  return  new MyQFrame(parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:65
// [-2] void ~QFrame()
extern "C" Q_DECL_EXPORT
void C_ZN6QFrameD2Ev(void *this_) {
  delete (QFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:67
// [4] int frameStyle()
extern "C" Q_DECL_EXPORT
int C_ZNK6QFrame10frameStyleEv(void *this_) {
  return (int)((QFrame*)this_)->frameStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:68
// [-2] void setFrameStyle(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame13setFrameStyleEi(void *this_, int arg0) {
  ((QFrame*)this_)->setFrameStyle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:70
// [4] int frameWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK6QFrame10frameWidthEv(void *this_) {
  return (int)((QFrame*)this_)->frameWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:72
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QFrame8sizeHintEv(void *this_) {
  auto rv = ((QFrame*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:96
// [4] QFrame::Shape frameShape()
extern "C" Q_DECL_EXPORT
QFrame::Shape C_ZNK6QFrame10frameShapeEv(void *this_) {
  return (QFrame::Shape)((QFrame*)this_)->frameShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:97
// [-2] void setFrameShape(QFrame::Shape)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame13setFrameShapeENS_5ShapeE(void *this_, QFrame::Shape arg0) {
  ((QFrame*)this_)->setFrameShape(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:98
// [4] QFrame::Shadow frameShadow()
extern "C" Q_DECL_EXPORT
QFrame::Shadow C_ZNK6QFrame11frameShadowEv(void *this_) {
  return (QFrame::Shadow)((QFrame*)this_)->frameShadow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:99
// [-2] void setFrameShadow(QFrame::Shadow)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame14setFrameShadowENS_6ShadowE(void *this_, QFrame::Shadow arg0) {
  ((QFrame*)this_)->setFrameShadow(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:101
// [4] int lineWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK6QFrame9lineWidthEv(void *this_) {
  return (int)((QFrame*)this_)->lineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:102
// [-2] void setLineWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame12setLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setLineWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:104
// [4] int midLineWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK6QFrame12midLineWidthEv(void *this_) {
  return (int)((QFrame*)this_)->midLineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:105
// [-2] void setMidLineWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame15setMidLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setMidLineWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:107
// [16] QRect frameRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QFrame9frameRectEv(void *this_) {
  auto rv = ((QFrame*)this_)->frameRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:108
// [-2] void setFrameRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN6QFrame12setFrameRectERK5QRect(void *this_, QRect* arg0) {
  ((QFrame*)this_)->setFrameRect(*arg0);
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
