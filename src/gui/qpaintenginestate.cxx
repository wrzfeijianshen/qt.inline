//  header block begin

// since 0x040100
// /usr/include/qt/QtGui/qpaintengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEngineState is pure virtual: false
// QPaintEngineState has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPaintEngineState_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPaintEngineState_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPaintEngineState_t qt_meta_stringdata_MyQPaintEngineState = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQPaintEngineState"
  },
  "MyQPaintEngineState"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPaintEngineState[] = {
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
class Q_DECL_EXPORT MyQPaintEngineState : public QPaintEngineState {
public:
  virtual ~MyQPaintEngineState() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:268
// [4] QPaintEngine::DirtyFlags state()
extern "C" Q_DECL_EXPORT
QPaintEngine::DirtyFlags C_ZNK17QPaintEngineState5stateEv(void *this_) {
  return (QPaintEngine::DirtyFlags)((QPaintEngineState*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:270
// [8] QPen pen()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState3penEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->pen();
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:271
// [8] QBrush brush()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState5brushEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->brush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:272
// [16] QPointF brushOrigin()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState11brushOriginEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->brushOrigin();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:273
// [8] QBrush backgroundBrush()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState15backgroundBrushEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->backgroundBrush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:274
// [4] Qt::BGMode backgroundMode()
extern "C" Q_DECL_EXPORT
Qt::BGMode C_ZNK17QPaintEngineState14backgroundModeEv(void *this_) {
  return (Qt::BGMode)((QPaintEngineState*)this_)->backgroundMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:275
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState4fontEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:276
// [48] QMatrix matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState6matrixEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->matrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpaintengine.h:277
// [88] QTransform transform()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState9transformEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->transform();
return new QTransform(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:279
// [4] Qt::ClipOperation clipOperation()
extern "C" Q_DECL_EXPORT
Qt::ClipOperation C_ZNK17QPaintEngineState13clipOperationEv(void *this_) {
  return (Qt::ClipOperation)((QPaintEngineState*)this_)->clipOperation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:280
// [8] QRegion clipRegion()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState10clipRegionEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->clipRegion();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:281
// [8] QPainterPath clipPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState8clipPathEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->clipPath();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:282
// [1] bool isClipEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QPaintEngineState13isClipEnabledEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->isClipEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:284
// [4] QPainter::RenderHints renderHints()
extern "C" Q_DECL_EXPORT
QPainter::RenderHints C_ZNK17QPaintEngineState11renderHintsEv(void *this_) {
  return (QPainter::RenderHints)((QPaintEngineState*)this_)->renderHints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:285
// [4] QPainter::CompositionMode compositionMode()
extern "C" Q_DECL_EXPORT
QPainter::CompositionMode C_ZNK17QPaintEngineState15compositionModeEv(void *this_) {
  return (QPainter::CompositionMode)((QPaintEngineState*)this_)->compositionMode();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpaintengine.h:286
// [8] qreal opacity()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QPaintEngineState7opacityEv(void *this_) {
  return (qreal)((QPaintEngineState*)this_)->opacity();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:288
// [8] QPainter * painter()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPaintEngineState7painterEv(void *this_) {
  return (void*)((QPaintEngineState*)this_)->painter();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpaintengine.h:290
// [1] bool brushNeedsResolving()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK17QPaintEngineState19brushNeedsResolvingEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->brushNeedsResolving();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpaintengine.h:291
// [1] bool penNeedsResolving()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK17QPaintEngineState17penNeedsResolvingEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->penNeedsResolving();
}
#endif // QT_VERSION >= 0x040300


extern "C" Q_DECL_EXPORT
void C_ZN17QPaintEngineStateD2Ev(void *this_) {
  delete (QPaintEngineState*)(this_);
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
