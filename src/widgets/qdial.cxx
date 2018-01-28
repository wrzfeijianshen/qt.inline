//  header block begin
// /usr/include/qt/QtWidgets/qdial.h
#include <qdial.h>
#include <QtWidgets>

// QDial is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:84
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN5QDial5eventEP6QEvent = 0;
extern "C" void set_callback_ZN5QDial5eventEP6QEvent(void*cbfn)
{ callback_ZN5QDial5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:85
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN5QDial11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN5QDial11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN5QDial11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:86
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN5QDial10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN5QDial10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN5QDial10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:88
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN5QDial15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN5QDial15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN5QDial15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:89
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:90
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN5QDial14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN5QDial14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN5QDial14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:92
// [-2] void sliderChange(enum QAbstractSlider::SliderChange)
extern "C"
void* callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE = 0;
extern "C" void set_callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(void*cbfn)
{ callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:93
// [-2] void initStyleOption(class QStyleOptionSlider *)
extern "C"
void* callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider = 0;
extern "C" void set_callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider(void*cbfn)
{ callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider = cbfn; }

class MyQDial : public QDial {
public:
MyQDial(QWidget * parent) : QDial(parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN5QDial5eventEP6QEvent != 0) {
  // callback_ZN5QDial5eventEP6QEvent(e);
}}
// void resizeEvent(class QResizeEvent *)
// void resizeEvent(class QResizeEvent *)
virtual void resizeEvent(QResizeEvent * re) {
  if (callback_ZN5QDial11resizeEventEP12QResizeEvent != 0) {
  // callback_ZN5QDial11resizeEventEP12QResizeEvent(re);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * pe) {
  if (callback_ZN5QDial10paintEventEP11QPaintEvent != 0) {
  // callback_ZN5QDial10paintEventEP11QPaintEvent(pe);
}}
// void mousePressEvent(class QMouseEvent *)
// void mousePressEvent(class QMouseEvent *)
virtual void mousePressEvent(QMouseEvent * me) {
  if (callback_ZN5QDial15mousePressEventEP11QMouseEvent != 0) {
  // callback_ZN5QDial15mousePressEventEP11QMouseEvent(me);
}}
// void mouseReleaseEvent(class QMouseEvent *)
// void mouseReleaseEvent(class QMouseEvent *)
virtual void mouseReleaseEvent(QMouseEvent * me) {
  if (callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent != 0) {
  // callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent(me);
}}
// void mouseMoveEvent(class QMouseEvent *)
// void mouseMoveEvent(class QMouseEvent *)
virtual void mouseMoveEvent(QMouseEvent * me) {
  if (callback_ZN5QDial14mouseMoveEventEP11QMouseEvent != 0) {
  // callback_ZN5QDial14mouseMoveEventEP11QMouseEvent(me);
}}
// void sliderChange(enum QAbstractSlider::SliderChange)
// void sliderChange(enum QAbstractSlider::SliderChange)
virtual void sliderChange(QAbstractSlider::SliderChange change) {
  if (callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE != 0) {
  // callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(change);
}}
// void initStyleOption(class QStyleOptionSlider *)
// void initStyleOption(class QStyleOptionSlider *)
virtual void initStyleOption(QStyleOptionSlider * option) {
  if (callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider != 0) {
  // callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK5QDial10metaObjectEv(void *this_) {
  return (void*)((QDial*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:64
// [-2] void QDial(class QWidget *)
extern "C"
void* C_ZN5QDialC1EP7QWidget(QWidget * parent) {
  (MyQDial*)(0);
  return  new MyQDial(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:66
// [-2] void ~QDial()
extern "C"
void C_ZN5QDialD1Ev(void *this_) {
  delete (QDial*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:68
// [1] bool wrapping()
extern "C"
bool C_ZNK5QDial8wrappingEv(void *this_) {
  return (bool)((QDial*)this_)->wrapping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:70
// [4] int notchSize()
extern "C"
int C_ZNK5QDial9notchSizeEv(void *this_) {
  return (int)((QDial*)this_)->notchSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:72
// [-2] void setNotchTarget(double)
extern "C"
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:73
// [8] qreal notchTarget()
extern "C"
qreal C_ZNK5QDial11notchTargetEv(void *this_) {
  return (qreal)((QDial*)this_)->notchTarget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:74
// [1] bool notchesVisible()
extern "C"
bool C_ZNK5QDial14notchesVisibleEv(void *this_) {
  return (bool)((QDial*)this_)->notchesVisible();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:76
// [8] QSize sizeHint()
extern "C"
void* C_ZNK5QDial8sizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:77
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:80
// [-2] void setNotchesVisible(_Bool)
extern "C"
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:81
// [-2] void setWrapping(_Bool)
extern "C"
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}
//  main block end
