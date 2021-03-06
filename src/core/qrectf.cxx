//  header block begin

// /usr/include/qt/QtCore/qrect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrect.h>
#include <QtCore>
#include "callback_inherit.h"

// QRectF is pure virtual: false
// QRectF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRectF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRectF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRectF_t qt_meta_stringdata_MyQRectF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQRectF"
  },
  "MyQRectF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRectF[] = {
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
class Q_DECL_EXPORT MyQRectF : public QRectF {
public:
  virtual ~MyQRectF() {}
// void QRectF()
MyQRectF() : QRectF() {}
// void QRectF(const QPointF &, const QSizeF &)
MyQRectF(const QPointF & topleft, const QSizeF & size) : QRectF(topleft, size) {}
// void QRectF(const QPointF &, const QPointF &)
MyQRectF(const QPointF & topleft, const QPointF & bottomRight) : QRectF(topleft, bottomRight) {}
// void QRectF(qreal, qreal, qreal, qreal)
MyQRectF(qreal left, qreal top, qreal width, qreal height) : QRectF(left, top, width, height) {}
// void QRectF(const QRect &)
MyQRectF(const QRect & rect) : QRectF(rect) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:514
// [-2] void QRectF()
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFC2Ev() {
  return  new QRectF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:515
// [-2] void QRectF(const QPointF &, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFC2ERK7QPointFRK6QSizeF(QPointF* topleft, QSizeF* size) {
  return  new QRectF(*topleft, *size);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qrect.h:516
// [-2] void QRectF(const QPointF &, const QPointF &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFC2ERK7QPointFS2_(QPointF* topleft, QPointF* bottomRight) {
  return  new QRectF(*topleft, *bottomRight);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:517
// [-2] void QRectF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFC2Edddd(qreal left, qreal top, qreal width, qreal height) {
  return  new QRectF(left, top, width, height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:518
// [-2] void QRectF(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFC2ERK5QRect(QRect* rect) {
  return  new QRectF(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:520
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF6isNullEv(void *this_) {
  return (bool)((QRectF*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:521
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF7isEmptyEv(void *this_) {
  return (bool)((QRectF*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:522
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF7isValidEv(void *this_) {
  return (bool)((QRectF*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:523
// [32] QRectF normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF10normalizedEv(void *this_) {
  auto rv = ((QRectF*)this_)->normalized();
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:525
// [8] qreal left()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF4leftEv(void *this_) {
  return (qreal)((QRectF*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:526
// [8] qreal top()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF3topEv(void *this_) {
  return (qreal)((QRectF*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:527
// [8] qreal right()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF5rightEv(void *this_) {
  return (qreal)((QRectF*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:528
// [8] qreal bottom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF6bottomEv(void *this_) {
  return (qreal)((QRectF*)this_)->bottom();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:530
// [8] qreal x()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF1xEv(void *this_) {
  return (qreal)((QRectF*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:531
// [8] qreal y()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF1yEv(void *this_) {
  return (qreal)((QRectF*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:532
// [-2] void setLeft(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF7setLeftEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setLeft(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:533
// [-2] void setTop(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF6setTopEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setTop(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:534
// [-2] void setRight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF8setRightEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setRight(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:535
// [-2] void setBottom(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9setBottomEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setBottom(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:536
// [-2] void setX(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF4setXEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setX(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:537
// [-2] void setY(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF4setYEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setY(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:539
// [16] QPointF topLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF7topLeftEv(void *this_) {
  auto rv = ((QRectF*)this_)->topLeft();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:540
// [16] QPointF bottomRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF11bottomRightEv(void *this_) {
  auto rv = ((QRectF*)this_)->bottomRight();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:541
// [16] QPointF topRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF8topRightEv(void *this_) {
  auto rv = ((QRectF*)this_)->topRight();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:542
// [16] QPointF bottomLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF10bottomLeftEv(void *this_) {
  auto rv = ((QRectF*)this_)->bottomLeft();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:543
// [16] QPointF center()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF6centerEv(void *this_) {
  auto rv = ((QRectF*)this_)->center();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:545
// [-2] void setTopLeft(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF10setTopLeftERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->setTopLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:546
// [-2] void setBottomRight(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF14setBottomRightERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->setBottomRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:547
// [-2] void setTopRight(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF11setTopRightERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->setTopRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:548
// [-2] void setBottomLeft(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF13setBottomLeftERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->setBottomLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:550
// [-2] void moveLeft(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF8moveLeftEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveLeft(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:551
// [-2] void moveTop(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF7moveTopEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveTop(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:552
// [-2] void moveRight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9moveRightEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveRight(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:553
// [-2] void moveBottom(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF10moveBottomEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveBottom(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:554
// [-2] void moveTopLeft(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF11moveTopLeftERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveTopLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:555
// [-2] void moveBottomRight(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF15moveBottomRightERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveBottomRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:556
// [-2] void moveTopRight(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF12moveTopRightERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveTopRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:557
// [-2] void moveBottomLeft(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF14moveBottomLeftERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveBottomLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:558
// [-2] void moveCenter(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF10moveCenterERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveCenter(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:560
// [-2] void translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QRectF*)this_)->translate(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:561
// [-2] void translate(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9translateERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->translate(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:563
// [32] QRectF translated(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QRectF*)this_)->translated(dx, dy);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:564
// [32] QRectF translated(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF10translatedERK7QPointF(void *this_, QPointF* p) {
  auto rv = ((QRectF*)this_)->translated(*p);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qrect.h:566
// [32] QRectF transposed()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF10transposedEv(void *this_) {
  auto rv = ((QRectF*)this_)->transposed();
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:568
// [-2] void moveTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF6moveToEdd(void *this_, qreal x, qreal y) {
  ((QRectF*)this_)->moveTo(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:569
// [-2] void moveTo(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF6moveToERK7QPointF(void *this_, QPointF* p) {
  ((QRectF*)this_)->moveTo(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:571
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QRectF*)this_)->setRect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:572
// [-2] void getRect(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QRectF7getRectEPdS0_S0_S0_(void *this_, qreal * x, qreal * y, qreal * w, qreal * h) {
  ((QRectF*)this_)->getRect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:574
// [-2] void setCoords(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9setCoordsEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QRectF*)this_)->setCoords(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:575
// [-2] void getCoords(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK6QRectF9getCoordsEPdS0_S0_S0_(void *this_, qreal * x1, qreal * y1, qreal * x2, qreal * y2) {
  ((QRectF*)this_)->getCoords(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:577
// [-2] void adjust(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF6adjustEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QRectF*)this_)->adjust(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:578
// [32] QRectF adjusted(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF8adjustedEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  auto rv = ((QRectF*)this_)->adjusted(x1, y1, x2, y2);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:580
// [16] QSizeF size()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF4sizeEv(void *this_) {
  auto rv = ((QRectF*)this_)->size();
return new QSizeF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:581
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF5widthEv(void *this_) {
  return (qreal)((QRectF*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:582
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QRectF6heightEv(void *this_) {
  return (qreal)((QRectF*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:583
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF8setWidthEd(void *this_, qreal w) {
  ((QRectF*)this_)->setWidth(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:584
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF9setHeightEd(void *this_, qreal h) {
  ((QRectF*)this_)->setHeight(h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:585
// [-2] void setSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QRectF7setSizeERK6QSizeF(void *this_, QSizeF* s) {
  ((QRectF*)this_)->setSize(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:587
// [32] QRectF operator|(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectForERKS_(void *this_, QRectF* r) {
  auto rv = ((QRectF*)this_)->operator|(*r);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:588
// [32] QRectF operator&(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectFanERKS_(void *this_, QRectF* r) {
  auto rv = ((QRectF*)this_)->operator&(*r);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:589
// [32] QRectF & operator|=(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFoRERKS_(void *this_, QRectF* r) {
  auto& rv = ((QRectF*)this_)->operator|=(*r);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:590
// [32] QRectF & operator&=(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFaNERKS_(void *this_, QRectF* r) {
  auto& rv = ((QRectF*)this_)->operator&=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:592
// [1] bool contains(const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF8containsERKS_(void *this_, QRectF* r) {
  return (bool)((QRectF*)this_)->contains(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:593
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF8containsERK7QPointF(void *this_, QPointF* p) {
  return (bool)((QRectF*)this_)->contains(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:594
// [1] bool contains(qreal, qreal)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF8containsEdd(void *this_, qreal x, qreal y) {
  return (bool)((QRectF*)this_)->contains(x, y);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qrect.h:595
// [32] QRectF united(const QRectF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF6unitedERKS_(void *this_, QRectF* other) {
  auto rv = ((QRectF*)this_)->united(*other);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qrect.h:596
// [32] QRectF intersected(const QRectF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF11intersectedERKS_(void *this_, QRectF* other) {
  auto rv = ((QRectF*)this_)->intersected(*other);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:597
// [1] bool intersects(const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QRectF10intersectsERKS_(void *this_, QRectF* r) {
  return (bool)((QRectF*)this_)->intersects(*r);
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qrect.h:599
// [32] QRectF marginsAdded(const QMarginsF &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF12marginsAddedERK9QMarginsF(void *this_, QMarginsF* margins) {
  auto rv = ((QRectF*)this_)->marginsAdded(*margins);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qrect.h:600
// [32] QRectF marginsRemoved(const QMarginsF &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF14marginsRemovedERK9QMarginsF(void *this_, QMarginsF* margins) {
  auto rv = ((QRectF*)this_)->marginsRemoved(*margins);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:601
// [32] QRectF & operator+=(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFpLERK9QMarginsF(void *this_, QMarginsF* margins) {
  auto& rv = ((QRectF*)this_)->operator+=(*margins);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:602
// [32] QRectF & operator-=(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QRectFmIERK9QMarginsF(void *this_, QMarginsF* margins) {
  auto& rv = ((QRectF*)this_)->operator-=(*margins);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:612
// [16] QRect toRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF6toRectEv(void *this_) {
  auto rv = ((QRectF*)this_)->toRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qrect.h:613
// [16] QRect toAlignedRect()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QRectF13toAlignedRectEv(void *this_) {
  auto rv = ((QRectF*)this_)->toAlignedRect();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040300


extern "C" Q_DECL_EXPORT
void C_ZN6QRectFD2Ev(void *this_) {
  delete (QRectF*)(this_);
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
