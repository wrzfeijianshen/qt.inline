//  header block begin
// /usr/include/qt/QtGui/qpolygon.h
#include <qpolygon.h>
#include <QtGui>

// QPolygonF is pure virtual: false
//  header block end

//  main block begin

class MyQPolygonF : public QPolygonF {
public:
MyQPolygonF() : QPolygonF() {}
MyQPolygonF(int size) : QPolygonF(size) {}
MyQPolygonF(const QRectF & r) : QPolygonF(r) {}
MyQPolygonF(const QPolygon & a) : QPolygonF(a) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:144
// [-2] void QPolygonF()
extern "C"
void* C_ZN9QPolygonFC1Ev() {
  (MyQPolygonF*)(0);
  return  new MyQPolygonF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:145
// [-2] void ~QPolygonF()
extern "C"
void C_ZN9QPolygonFD1Ev(void *this_) {
  delete (QPolygonF*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:146
// [-2] void QPolygonF(int)
extern "C"
void* C_ZN9QPolygonFC1Ei(int size) {
  (MyQPolygonF*)(0);
  return  new MyQPolygonF(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:151
// [-2] void QPolygonF(const class QRectF &)
extern "C"
void* C_ZN9QPolygonFC1ERK6QRectF(const QRectF & r) {
  (MyQPolygonF*)(0);
  return  new MyQPolygonF(r);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:152
// [-2] void QPolygonF(const class QPolygon &)
extern "C"
void* C_ZN9QPolygonFC1ERK8QPolygon(const QPolygon & a) {
  (MyQPolygonF*)(0);
  return  new MyQPolygonF(a);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:159
// [-2] void swap(class QPolygonF &)
extern "C"
void C_ZN9QPolygonF4swapERS_(void *this_, QPolygonF & other) {
  ((QPolygonF*)this_)->swap(other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:163
// [-2] void translate(qreal, qreal)
extern "C"
void C_ZN9QPolygonF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPolygonF*)this_)->translate(dx, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:164
// [-2] void translate(const class QPointF &)
extern "C"
void C_ZN9QPolygonF9translateERK7QPointF(void *this_, const QPointF & offset) {
  ((QPolygonF*)this_)->translate(offset);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:166
// [8] QPolygonF translated(qreal, qreal)
extern "C"
void* C_ZNK9QPolygonF10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QPolygonF*)this_)->translated(dx, dy);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:167
// [8] QPolygonF translated(const class QPointF &)
extern "C"
void* C_ZNK9QPolygonF10translatedERK7QPointF(void *this_, const QPointF & offset) {
  auto rv = ((QPolygonF*)this_)->translated(offset);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:169
// [8] QPolygon toPolygon()
extern "C"
void* C_ZNK9QPolygonF9toPolygonEv(void *this_) {
  auto rv = ((QPolygonF*)this_)->toPolygon();
return new QPolygon(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:171
// [1] bool isClosed()
extern "C"
bool C_ZNK9QPolygonF8isClosedEv(void *this_) {
  return (bool)((QPolygonF*)this_)->isClosed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:173
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK9QPolygonF12boundingRectEv(void *this_) {
  auto rv = ((QPolygonF*)this_)->boundingRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:175
// [1] bool containsPoint(const class QPointF &, Qt::FillRule)
extern "C"
bool C_ZNK9QPolygonF13containsPointERK7QPointFN2Qt8FillRuleE(void *this_, const QPointF & pt, Qt::FillRule fillRule) {
  return (bool)((QPolygonF*)this_)->containsPoint(pt, fillRule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:177
// [8] QPolygonF united(const class QPolygonF &)
extern "C"
void* C_ZNK9QPolygonF6unitedERKS_(void *this_, const QPolygonF & r) {
  auto rv = ((QPolygonF*)this_)->united(r);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:178
// [8] QPolygonF intersected(const class QPolygonF &)
extern "C"
void* C_ZNK9QPolygonF11intersectedERKS_(void *this_, const QPolygonF & r) {
  auto rv = ((QPolygonF*)this_)->intersected(r);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:179
// [8] QPolygonF subtracted(const class QPolygonF &)
extern "C"
void* C_ZNK9QPolygonF10subtractedERKS_(void *this_, const QPolygonF & r) {
  auto rv = ((QPolygonF*)this_)->subtracted(r);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:181
// [1] bool intersects(const class QPolygonF &)
extern "C"
bool C_ZNK9QPolygonF10intersectsERKS_(void *this_, const QPolygonF & r) {
  return (bool)((QPolygonF*)this_)->intersects(r);
}
//  main block end
