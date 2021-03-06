//  header block begin

// /usr/include/qt/QtCore/qpoint.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpoint.h>
#include <QtCore>
#include "callback_inherit.h"

// QPointF is pure virtual: false
// QPointF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPointF_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPointF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPointF_t qt_meta_stringdata_MyQPointF = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQPointF"
  },
  "MyQPointF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPointF[] = {
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
class Q_DECL_EXPORT MyQPointF : public QPointF {
public:
  virtual ~MyQPointF() {}
// void QPointF()
MyQPointF() : QPointF() {}
// void QPointF(const QPoint &)
MyQPointF(const QPoint & p) : QPointF(p) {}
// void QPointF(qreal, qreal)
MyQPointF(qreal xpos, qreal ypos) : QPointF(xpos, ypos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:222
// [-2] void QPointF()
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFC2Ev() {
  return  new QPointF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:223
// [-2] void QPointF(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFC2ERK6QPoint(QPoint* p) {
  return  new QPointF(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:224
// [-2] void QPointF(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFC2Edd(qreal xpos, qreal ypos) {
  return  new QPointF(xpos, ypos);
}

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qpoint.h:226
// [8] qreal manhattanLength()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QPointF15manhattanLengthEv(void *this_) {
  return (qreal)((QPointF*)this_)->manhattanLength();
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:228
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPointF6isNullEv(void *this_) {
  return (bool)((QPointF*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:230
// [8] qreal x()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QPointF1xEv(void *this_) {
  return (qreal)((QPointF*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:231
// [8] qreal y()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QPointF1yEv(void *this_) {
  return (qreal)((QPointF*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:232
// [-2] void setX(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QPointF4setXEd(void *this_, qreal x) {
  ((QPointF*)this_)->setX(x);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:233
// [-2] void setY(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QPointF4setYEd(void *this_, qreal y) {
  ((QPointF*)this_)->setY(y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:235
// [8] qreal & rx()
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointF2rxEv(void *this_) {
  auto& rv = ((QPointF*)this_)->rx();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:236
// [8] qreal & ry()
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointF2ryEv(void *this_) {
  auto& rv = ((QPointF*)this_)->ry();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:238
// [16] QPointF & operator+=(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFpLERKS_(void *this_, QPointF* p) {
  auto& rv = ((QPointF*)this_)->operator+=(*p);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:239
// [16] QPointF & operator-=(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFmIERKS_(void *this_, QPointF* p) {
  auto& rv = ((QPointF*)this_)->operator-=(*p);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:240
// [16] QPointF & operator*=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFmLEd(void *this_, qreal c) {
  auto& rv = ((QPointF*)this_)->operator*=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:241
// [16] QPointF & operator/=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPointFdVEd(void *this_, qreal c) {
  auto& rv = ((QPointF*)this_)->operator/=(c);
return &rv;
}

// Public static inline Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qpoint.h:243
// [8] qreal dotProduct(const QPointF &, const QPointF &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qreal C_ZN7QPointF10dotProductERKS_S1_(QPointF* p1, QPointF* p2) {
  return (qreal)QPointF::dotProduct(*p1, *p2);
}
#endif // QT_VERSION >= 0x050100

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:256
// [8] QPoint toPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPointF7toPointEv(void *this_) {
  auto rv = ((QPointF*)this_)->toPoint();
return new QPoint(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN7QPointFD2Ev(void *this_) {
  delete (QPointF*)(this_);
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
