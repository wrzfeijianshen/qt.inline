//  header block begin
// /usr/include/qt/QtGui/qtransform.h
#include <qtransform.h>
#include <QtGui>

// QTransform is pure virtual: false
//  header block end

//  main block begin

class MyQTransform : public QTransform {
public:
MyQTransform(Qt::Initialization arg0) : QTransform(arg0) {}
MyQTransform() : QTransform() {}
MyQTransform(qreal h11, qreal h12, qreal h13, qreal h21, qreal h22, qreal h23, qreal h31, qreal h32, qreal h33) : QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33) {}
MyQTransform(qreal h11, qreal h12, qreal h21, qreal h22, qreal dx, qreal dy) : QTransform(h11, h12, h21, h22, dx, dy) {}
MyQTransform(const QMatrix & mtx) : QTransform(mtx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:69
// [-2] void QTransform(Qt::Initialization)
extern "C"
void* C_ZN10QTransformC1EN2Qt14InitializationE(Qt::Initialization arg0) {
  (MyQTransform*)(0);
  return  new MyQTransform(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:70
// [-2] void QTransform()
extern "C"
void* C_ZN10QTransformC1Ev() {
  (MyQTransform*)(0);
  return  new MyQTransform();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:71
// [-2] void QTransform(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN10QTransformC1Eddddddddd(qreal h11, qreal h12, qreal h13, qreal h21, qreal h22, qreal h23, qreal h31, qreal h32, qreal h33) {
  (MyQTransform*)(0);
  return  new MyQTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:74
// [-2] void QTransform(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN10QTransformC1Edddddd(qreal h11, qreal h12, qreal h21, qreal h22, qreal dx, qreal dy) {
  (MyQTransform*)(0);
  return  new MyQTransform(h11, h12, h21, h22, dx, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:76
// [-2] void QTransform(const class QMatrix &)
extern "C"
void* C_ZN10QTransformC1ERK7QMatrix(const QMatrix & mtx) {
  (MyQTransform*)(0);
  return  new MyQTransform(mtx);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:91
// [1] bool isAffine()
extern "C"
bool C_ZNK10QTransform8isAffineEv(void *this_) {
  return (bool)((QTransform*)this_)->isAffine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:92
// [1] bool isIdentity()
extern "C"
bool C_ZNK10QTransform10isIdentityEv(void *this_) {
  return (bool)((QTransform*)this_)->isIdentity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:93
// [1] bool isInvertible()
extern "C"
bool C_ZNK10QTransform12isInvertibleEv(void *this_) {
  return (bool)((QTransform*)this_)->isInvertible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:94
// [1] bool isScaling()
extern "C"
bool C_ZNK10QTransform9isScalingEv(void *this_) {
  return (bool)((QTransform*)this_)->isScaling();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:95
// [1] bool isRotating()
extern "C"
bool C_ZNK10QTransform10isRotatingEv(void *this_) {
  return (bool)((QTransform*)this_)->isRotating();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:96
// [1] bool isTranslating()
extern "C"
bool C_ZNK10QTransform13isTranslatingEv(void *this_) {
  return (bool)((QTransform*)this_)->isTranslating();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:98
// [4] QTransform::TransformationType type()
extern "C"
QTransform::TransformationType C_ZNK10QTransform4typeEv(void *this_) {
  return (QTransform::TransformationType)((QTransform*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:100
// [8] qreal determinant()
extern "C"
qreal C_ZNK10QTransform11determinantEv(void *this_) {
  return (qreal)((QTransform*)this_)->determinant();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:101
// [8] qreal det()
extern "C"
qreal C_ZNK10QTransform3detEv(void *this_) {
  return (qreal)((QTransform*)this_)->det();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:103
// [8] qreal m11()
extern "C"
qreal C_ZNK10QTransform3m11Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m11();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:104
// [8] qreal m12()
extern "C"
qreal C_ZNK10QTransform3m12Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m12();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:105
// [8] qreal m13()
extern "C"
qreal C_ZNK10QTransform3m13Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m13();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:106
// [8] qreal m21()
extern "C"
qreal C_ZNK10QTransform3m21Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m21();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:107
// [8] qreal m22()
extern "C"
qreal C_ZNK10QTransform3m22Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m22();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:108
// [8] qreal m23()
extern "C"
qreal C_ZNK10QTransform3m23Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m23();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:109
// [8] qreal m31()
extern "C"
qreal C_ZNK10QTransform3m31Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m31();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:110
// [8] qreal m32()
extern "C"
qreal C_ZNK10QTransform3m32Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m32();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:111
// [8] qreal m33()
extern "C"
qreal C_ZNK10QTransform3m33Ev(void *this_) {
  return (qreal)((QTransform*)this_)->m33();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:112
// [8] qreal dx()
extern "C"
qreal C_ZNK10QTransform2dxEv(void *this_) {
  return (qreal)((QTransform*)this_)->dx();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:113
// [8] qreal dy()
extern "C"
qreal C_ZNK10QTransform2dyEv(void *this_) {
  return (qreal)((QTransform*)this_)->dy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:115
// [-2] void setMatrix(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN10QTransform9setMatrixEddddddddd(void *this_, qreal m11, qreal m12, qreal m13, qreal m21, qreal m22, qreal m23, qreal m31, qreal m32, qreal m33) {
  ((QTransform*)this_)->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:119
// [88] QTransform inverted(_Bool *)
extern "C"
void* C_ZNK10QTransform8invertedEPb(void *this_, bool * invertible) {
  auto rv = ((QTransform*)this_)->inverted(invertible);
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:120
// [88] QTransform adjoint()
extern "C"
void* C_ZNK10QTransform7adjointEv(void *this_) {
  auto rv = ((QTransform*)this_)->adjoint();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:121
// [88] QTransform transposed()
extern "C"
void* C_ZNK10QTransform10transposedEv(void *this_) {
  auto rv = ((QTransform*)this_)->transposed();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:123
// [88] QTransform & translate(qreal, qreal)
extern "C"
void* C_ZN10QTransform9translateEdd(void *this_, qreal dx, qreal dy) {
  auto& rv = ((QTransform*)this_)->translate(dx, dy);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:124
// [88] QTransform & scale(qreal, qreal)
extern "C"
void* C_ZN10QTransform5scaleEdd(void *this_, qreal sx, qreal sy) {
  auto& rv = ((QTransform*)this_)->scale(sx, sy);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:125
// [88] QTransform & shear(qreal, qreal)
extern "C"
void* C_ZN10QTransform5shearEdd(void *this_, qreal sh, qreal sv) {
  auto& rv = ((QTransform*)this_)->shear(sh, sv);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:126
// [88] QTransform & rotate(qreal, Qt::Axis)
extern "C"
void* C_ZN10QTransform6rotateEdN2Qt4AxisE(void *this_, qreal a, Qt::Axis axis) {
  auto& rv = ((QTransform*)this_)->rotate(a, axis);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:127
// [88] QTransform & rotateRadians(qreal, Qt::Axis)
extern "C"
void* C_ZN10QTransform13rotateRadiansEdN2Qt4AxisE(void *this_, qreal a, Qt::Axis axis) {
  auto& rv = ((QTransform*)this_)->rotateRadians(a, axis);
return &rv;
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:129
// [1] bool squareToQuad(const class QPolygonF &, class QTransform &)
extern "C"
bool C_ZN10QTransform12squareToQuadERK9QPolygonFRS_(const QPolygonF & square, QTransform & result) {
  return (bool)QTransform::squareToQuad(square, result);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:130
// [1] bool quadToSquare(const class QPolygonF &, class QTransform &)
extern "C"
bool C_ZN10QTransform12quadToSquareERK9QPolygonFRS_(const QPolygonF & quad, QTransform & result) {
  return (bool)QTransform::quadToSquare(quad, result);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:131
// [1] bool quadToQuad(const class QPolygonF &, const class QPolygonF &, class QTransform &)
extern "C"
bool C_ZN10QTransform10quadToQuadERK9QPolygonFS2_RS_(const QPolygonF & one, const QPolygonF & two, QTransform & result) {
  return (bool)QTransform::quadToQuad(one, two, result);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:143
// [-2] void reset()
extern "C"
void C_ZN10QTransform5resetEv(void *this_) {
  ((QTransform*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:144
// [8] QPoint map(const class QPoint &)
extern "C"
void* C_ZNK10QTransform3mapERK6QPoint(void *this_, const QPoint & p) {
  auto rv = ((QTransform*)this_)->map(p);
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:145
// [16] QPointF map(const class QPointF &)
extern "C"
void* C_ZNK10QTransform3mapERK7QPointF(void *this_, const QPointF & p) {
  auto rv = ((QTransform*)this_)->map(p);
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:146
// [16] QLine map(const class QLine &)
extern "C"
void* C_ZNK10QTransform3mapERK5QLine(void *this_, const QLine & l) {
  auto rv = ((QTransform*)this_)->map(l);
return new QLine(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:147
// [32] QLineF map(const class QLineF &)
extern "C"
void* C_ZNK10QTransform3mapERK6QLineF(void *this_, const QLineF & l) {
  auto rv = ((QTransform*)this_)->map(l);
return new QLineF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:148
// [8] QPolygonF map(const class QPolygonF &)
extern "C"
void* C_ZNK10QTransform3mapERK9QPolygonF(void *this_, const QPolygonF & a) {
  auto rv = ((QTransform*)this_)->map(a);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:149
// [8] QPolygon map(const class QPolygon &)
extern "C"
void* C_ZNK10QTransform3mapERK8QPolygon(void *this_, const QPolygon & a) {
  auto rv = ((QTransform*)this_)->map(a);
return new QPolygon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:150
// [8] QRegion map(const class QRegion &)
extern "C"
void* C_ZNK10QTransform3mapERK7QRegion(void *this_, const QRegion & r) {
  auto rv = ((QTransform*)this_)->map(r);
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:151
// [8] QPainterPath map(const class QPainterPath &)
extern "C"
void* C_ZNK10QTransform3mapERK12QPainterPath(void *this_, const QPainterPath & p) {
  auto rv = ((QTransform*)this_)->map(p);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:152
// [8] QPolygon mapToPolygon(const class QRect &)
extern "C"
void* C_ZNK10QTransform12mapToPolygonERK5QRect(void *this_, const QRect & r) {
  auto rv = ((QTransform*)this_)->mapToPolygon(r);
return new QPolygon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:153
// [16] QRect mapRect(const class QRect &)
extern "C"
void* C_ZNK10QTransform7mapRectERK5QRect(void *this_, const QRect & arg0) {
  auto rv = ((QTransform*)this_)->mapRect(arg0);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:154
// [32] QRectF mapRect(const class QRectF &)
extern "C"
void* C_ZNK10QTransform7mapRectERK6QRectF(void *this_, const QRectF & arg0) {
  auto rv = ((QTransform*)this_)->mapRect(arg0);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:155
// [-2] void map(int, int, int *, int *)
extern "C"
void C_ZNK10QTransform3mapEiiPiS0_(void *this_, int x, int y, int * tx, int * ty) {
  ((QTransform*)this_)->map(x, y, tx, ty);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:156
// [-2] void map(qreal, qreal, qreal *, qreal *)
extern "C"
void C_ZNK10QTransform3mapEddPdS0_(void *this_, qreal x, qreal y, qreal * tx, qreal * ty) {
  ((QTransform*)this_)->map(x, y, tx, ty);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:158
// [48] const QMatrix & toAffine()
extern "C"
void* C_ZNK10QTransform8toAffineEv(void *this_) {
  auto& rv = ((QTransform*)this_)->toAffine();
return new QMatrix(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:165
// [88] QTransform fromTranslate(qreal, qreal)
extern "C"
void* C_ZN10QTransform13fromTranslateEdd(qreal dx, qreal dy) {
  auto rv = QTransform::fromTranslate(dx, dy);
return new QTransform(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:166
// [88] QTransform fromScale(qreal, qreal)
extern "C"
void* C_ZN10QTransform9fromScaleEdd(qreal dx, qreal dy) {
  auto rv = QTransform::fromScale(dx, dy);
return new QTransform(rv);
}
//  main block end
