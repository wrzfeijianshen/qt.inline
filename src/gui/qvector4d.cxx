//  header block begin
// /usr/include/qt/QtGui/qvector4d.h
#include <qvector4d.h>
#include <QtGui>

// QVector4D is pure virtual: false
//  header block end

//  main block begin

class MyQVector4D : public QVector4D {
public:
MyQVector4D() : QVector4D() {}
MyQVector4D(Qt::Initialization arg0) : QVector4D(arg0) {}
MyQVector4D(float xpos, float ypos, float zpos, float wpos) : QVector4D(xpos, ypos, zpos, wpos) {}
MyQVector4D(const QPoint & point) : QVector4D(point) {}
MyQVector4D(const QPointF & point) : QVector4D(point) {}
MyQVector4D(const QVector2D & vector) : QVector4D(vector) {}
MyQVector4D(const QVector2D & vector, float zpos, float wpos) : QVector4D(vector, zpos, wpos) {}
MyQVector4D(const QVector3D & vector) : QVector4D(vector) {}
MyQVector4D(const QVector3D & vector, float wpos) : QVector4D(vector, wpos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:59
// [-2] void QVector4D()
extern "C"
void* C_ZN9QVector4DC1Ev() {
  (MyQVector4D*)(0);
  return  new MyQVector4D();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:60
// [-2] void QVector4D(Qt::Initialization)
extern "C"
void* C_ZN9QVector4DC1EN2Qt14InitializationE(Qt::Initialization arg0) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:61
// [-2] void QVector4D(float, float, float, float)
extern "C"
void* C_ZN9QVector4DC1Effff(float xpos, float ypos, float zpos, float wpos) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(xpos, ypos, zpos, wpos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:62
// [-2] void QVector4D(const class QPoint &)
extern "C"
void* C_ZN9QVector4DC1ERK6QPoint(const QPoint & point) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(point);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:63
// [-2] void QVector4D(const class QPointF &)
extern "C"
void* C_ZN9QVector4DC1ERK7QPointF(const QPointF & point) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(point);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:65
// [-2] void QVector4D(const class QVector2D &)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector2D(const QVector2D & vector) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(vector);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:66
// [-2] void QVector4D(const class QVector2D &, float, float)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector2Dff(const QVector2D & vector, float zpos, float wpos) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(vector, zpos, wpos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:69
// [-2] void QVector4D(const class QVector3D &)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector3D(const QVector3D & vector) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(vector);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:70
// [-2] void QVector4D(const class QVector3D &, float)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector3Df(const QVector3D & vector, float wpos) {
  (MyQVector4D*)(0);
  return  new MyQVector4D(vector, wpos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:73
// [1] bool isNull()
extern "C"
bool C_ZNK9QVector4D6isNullEv(void *this_) {
  return (bool)((QVector4D*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:75
// [4] float x()
extern "C"
float C_ZNK9QVector4D1xEv(void *this_) {
  return (float)((QVector4D*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:76
// [4] float y()
extern "C"
float C_ZNK9QVector4D1yEv(void *this_) {
  return (float)((QVector4D*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:77
// [4] float z()
extern "C"
float C_ZNK9QVector4D1zEv(void *this_) {
  return (float)((QVector4D*)this_)->z();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:78
// [4] float w()
extern "C"
float C_ZNK9QVector4D1wEv(void *this_) {
  return (float)((QVector4D*)this_)->w();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:80
// [-2] void setX(float)
extern "C"
void C_ZN9QVector4D4setXEf(void *this_, float x) {
  ((QVector4D*)this_)->setX(x);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:81
// [-2] void setY(float)
extern "C"
void C_ZN9QVector4D4setYEf(void *this_, float y) {
  ((QVector4D*)this_)->setY(y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:82
// [-2] void setZ(float)
extern "C"
void C_ZN9QVector4D4setZEf(void *this_, float z) {
  ((QVector4D*)this_)->setZ(z);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:83
// [-2] void setW(float)
extern "C"
void C_ZN9QVector4D4setWEf(void *this_, float w) {
  ((QVector4D*)this_)->setW(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:88
// [4] float length()
extern "C"
float C_ZNK9QVector4D6lengthEv(void *this_) {
  return (float)((QVector4D*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:89
// [4] float lengthSquared()
extern "C"
float C_ZNK9QVector4D13lengthSquaredEv(void *this_) {
  return (float)((QVector4D*)this_)->lengthSquared();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:91
// [16] QVector4D normalized()
extern "C"
void* C_ZNK9QVector4D10normalizedEv(void *this_) {
  auto rv = ((QVector4D*)this_)->normalized();
return new QVector4D(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:92
// [-2] void normalize()
extern "C"
void C_ZN9QVector4D9normalizeEv(void *this_) {
  ((QVector4D*)this_)->normalize();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:101
// [4] float dotProduct(const class QVector4D &, const class QVector4D &)
extern "C"
float C_ZN9QVector4D10dotProductERKS_S1_(const QVector4D & v1, const QVector4D & v2) {
  return (float)QVector4D::dotProduct(v1, v2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:117
// [8] QVector2D toVector2D()
extern "C"
void* C_ZNK9QVector4D10toVector2DEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector2D();
return new QVector2D(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:118
// [8] QVector2D toVector2DAffine()
extern "C"
void* C_ZNK9QVector4D16toVector2DAffineEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector2DAffine();
return new QVector2D(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:121
// [12] QVector3D toVector3D()
extern "C"
void* C_ZNK9QVector4D10toVector3DEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector3D();
return new QVector3D(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:122
// [12] QVector3D toVector3DAffine()
extern "C"
void* C_ZNK9QVector4D16toVector3DAffineEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector3DAffine();
return new QVector3D(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:125
// [8] QPoint toPoint()
extern "C"
void* C_ZNK9QVector4D7toPointEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toPoint();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:126
// [16] QPointF toPointF()
extern "C"
void* C_ZNK9QVector4D8toPointFEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toPointF();
return new QPointF(rv);
}
//  main block end
