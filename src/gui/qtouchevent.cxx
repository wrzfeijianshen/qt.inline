//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QTouchEvent is pure virtual: false
//  header block end

//  main block begin

class MyQTouchEvent : public QTouchEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:947
// [-2] void ~QTouchEvent()
extern "C"
void C_ZN11QTouchEventD1Ev(void *this_) {
  delete (QTouchEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:949
// [8] QWindow * window()
extern "C"
void* C_ZNK11QTouchEvent6windowEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->window();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:950
// [8] QObject * target()
extern "C"
void* C_ZNK11QTouchEvent6targetEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->target();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:954
// [4] Qt::TouchPointStates touchPointStates()
extern "C"
Qt::TouchPointStates C_ZNK11QTouchEvent16touchPointStatesEv(void *this_) {
  return (Qt::TouchPointStates)((QTouchEvent*)this_)->touchPointStates();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:955
// [8] const QList<QTouchEvent::TouchPoint> & touchPoints()
extern "C"
void* C_ZNK11QTouchEvent11touchPointsEv(void *this_) {
  auto& rv = ((QTouchEvent*)this_)->touchPoints();
return new QList<QTouchEvent::TouchPoint>(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:956
// [8] QTouchDevice * device()
extern "C"
void* C_ZNK11QTouchEvent6deviceEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->device();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:959
// [-2] void setWindow(class QWindow *)
extern "C"
void C_ZN11QTouchEvent9setWindowEP7QWindow(void *this_, QWindow * awindow) {
  ((QTouchEvent*)this_)->setWindow(awindow);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:960
// [-2] void setTarget(class QObject *)
extern "C"
void C_ZN11QTouchEvent9setTargetEP7QObject(void *this_, QObject * atarget) {
  ((QTouchEvent*)this_)->setTarget(atarget);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:963
// [-2] void setDevice(class QTouchDevice *)
extern "C"
void C_ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *this_, QTouchDevice * adevice) {
  ((QTouchEvent*)this_)->setDevice(adevice);
}
//  main block end
