//  header block begin
// /usr/include/qt/QtWidgets/qmdiarea.h
#include <qmdiarea.h>
#include <QtWidgets>

// QMdiArea is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:146
// [-2] void setupViewport(class QWidget *)
extern "C"
void* callback_ZN8QMdiArea13setupViewportEP7QWidget = 0;
extern "C" void set_callback_ZN8QMdiArea13setupViewportEP7QWidget(void*cbfn)
{ callback_ZN8QMdiArea13setupViewportEP7QWidget = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:149
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN8QMdiArea5eventEP6QEvent = 0;
extern "C" void set_callback_ZN8QMdiArea5eventEP6QEvent(void*cbfn)
{ callback_ZN8QMdiArea5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:150
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:151
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN8QMdiArea10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN8QMdiArea10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN8QMdiArea10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:152
// [-2] void childEvent(class QChildEvent *)
extern "C"
void* callback_ZN8QMdiArea10childEventEP11QChildEvent = 0;
extern "C" void set_callback_ZN8QMdiArea10childEventEP11QChildEvent(void*cbfn)
{ callback_ZN8QMdiArea10childEventEP11QChildEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:153
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN8QMdiArea11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN8QMdiArea11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN8QMdiArea11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:154
// [-2] void timerEvent(class QTimerEvent *)
extern "C"
void* callback_ZN8QMdiArea10timerEventEP11QTimerEvent = 0;
extern "C" void set_callback_ZN8QMdiArea10timerEventEP11QTimerEvent(void*cbfn)
{ callback_ZN8QMdiArea10timerEventEP11QTimerEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:155
// [-2] void showEvent(class QShowEvent *)
extern "C"
void* callback_ZN8QMdiArea9showEventEP10QShowEvent = 0;
extern "C" void set_callback_ZN8QMdiArea9showEventEP10QShowEvent(void*cbfn)
{ callback_ZN8QMdiArea9showEventEP10QShowEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:156
// [1] bool viewportEvent(class QEvent *)
extern "C"
void* callback_ZN8QMdiArea13viewportEventEP6QEvent = 0;
extern "C" void set_callback_ZN8QMdiArea13viewportEventEP6QEvent(void*cbfn)
{ callback_ZN8QMdiArea13viewportEventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:157
// [-2] void scrollContentsBy(int, int)
extern "C"
void* callback_ZN8QMdiArea16scrollContentsByEii = 0;
extern "C" void set_callback_ZN8QMdiArea16scrollContentsByEii(void*cbfn)
{ callback_ZN8QMdiArea16scrollContentsByEii = cbfn; }

class MyQMdiArea : public QMdiArea {
public:
MyQMdiArea(QWidget * parent) : QMdiArea(parent) {}
// void setupViewport(class QWidget *)
// void setupViewport(class QWidget *)
virtual void setupViewport(QWidget * viewport) {
  if (callback_ZN8QMdiArea13setupViewportEP7QWidget != 0) {
  // callback_ZN8QMdiArea13setupViewportEP7QWidget(viewport);
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * event) {
  if (callback_ZN8QMdiArea5eventEP6QEvent != 0) {
  // callback_ZN8QMdiArea5eventEP6QEvent(event);
}}
// bool eventFilter(class QObject *, class QEvent *)
// bool eventFilter(class QObject *, class QEvent *)
virtual bool eventFilter(QObject * object, QEvent * event) {
  if (callback_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent != 0) {
  // callback_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent(object, event);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * paintEvent) {
  if (callback_ZN8QMdiArea10paintEventEP11QPaintEvent != 0) {
  // callback_ZN8QMdiArea10paintEventEP11QPaintEvent(paintEvent);
}}
// void childEvent(class QChildEvent *)
// void childEvent(class QChildEvent *)
virtual void childEvent(QChildEvent * childEvent) {
  if (callback_ZN8QMdiArea10childEventEP11QChildEvent != 0) {
  // callback_ZN8QMdiArea10childEventEP11QChildEvent(childEvent);
}}
// void resizeEvent(class QResizeEvent *)
// void resizeEvent(class QResizeEvent *)
virtual void resizeEvent(QResizeEvent * resizeEvent) {
  if (callback_ZN8QMdiArea11resizeEventEP12QResizeEvent != 0) {
  // callback_ZN8QMdiArea11resizeEventEP12QResizeEvent(resizeEvent);
}}
// void timerEvent(class QTimerEvent *)
// void timerEvent(class QTimerEvent *)
virtual void timerEvent(QTimerEvent * timerEvent) {
  if (callback_ZN8QMdiArea10timerEventEP11QTimerEvent != 0) {
  // callback_ZN8QMdiArea10timerEventEP11QTimerEvent(timerEvent);
}}
// void showEvent(class QShowEvent *)
// void showEvent(class QShowEvent *)
virtual void showEvent(QShowEvent * showEvent) {
  if (callback_ZN8QMdiArea9showEventEP10QShowEvent != 0) {
  // callback_ZN8QMdiArea9showEventEP10QShowEvent(showEvent);
}}
// bool viewportEvent(class QEvent *)
// bool viewportEvent(class QEvent *)
virtual bool viewportEvent(QEvent * event) {
  if (callback_ZN8QMdiArea13viewportEventEP6QEvent != 0) {
  // callback_ZN8QMdiArea13viewportEventEP6QEvent(event);
}}
// void scrollContentsBy(int, int)
// void scrollContentsBy(int, int)
virtual void scrollContentsBy(int dx, int dy) {
  if (callback_ZN8QMdiArea16scrollContentsByEii != 0) {
  // callback_ZN8QMdiArea16scrollContentsByEii(dx, dy);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QMdiArea10metaObjectEv(void *this_) {
  return (void*)((QMdiArea*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:90
// [-2] void QMdiArea(class QWidget *)
extern "C"
void* C_ZN8QMdiAreaC1EP7QWidget(QWidget * parent) {
  (MyQMdiArea*)(0);
  return  new MyQMdiArea(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:91
// [-2] void ~QMdiArea()
extern "C"
void C_ZN8QMdiAreaD1Ev(void *this_) {
  delete (QMdiArea*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:93
// [8] QSize sizeHint()
extern "C"
void* C_ZNK8QMdiArea8sizeHintEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:94
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK8QMdiArea15minimumSizeHintEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:96
// [8] QMdiSubWindow * currentSubWindow()
extern "C"
void* C_ZNK8QMdiArea16currentSubWindowEv(void *this_) {
  return (void*)((QMdiArea*)this_)->currentSubWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:97
// [8] QMdiSubWindow * activeSubWindow()
extern "C"
void* C_ZNK8QMdiArea15activeSubWindowEv(void *this_) {
  return (void*)((QMdiArea*)this_)->activeSubWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:100
// [8] QMdiSubWindow * addSubWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN8QMdiArea12addSubWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * widget, QFlags<Qt::WindowType> flags) {
  return (void*)((QMdiArea*)this_)->addSubWindow(widget, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:101
// [-2] void removeSubWindow(class QWidget *)
extern "C"
void C_ZN8QMdiArea15removeSubWindowEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiArea*)this_)->removeSubWindow(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:103
// [8] QBrush background()
extern "C"
void* C_ZNK8QMdiArea10backgroundEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->background();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:104
// [-2] void setBackground(const class QBrush &)
extern "C"
void C_ZN8QMdiArea13setBackgroundERK6QBrush(void *this_, const QBrush & background) {
  ((QMdiArea*)this_)->setBackground(background);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:106
// [4] QMdiArea::WindowOrder activationOrder()
extern "C"
QMdiArea::WindowOrder C_ZNK8QMdiArea15activationOrderEv(void *this_) {
  return (QMdiArea::WindowOrder)((QMdiArea*)this_)->activationOrder();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:107
// [-2] void setActivationOrder(enum QMdiArea::WindowOrder)
extern "C"
void C_ZN8QMdiArea18setActivationOrderENS_11WindowOrderE(void *this_, QMdiArea::WindowOrder order) {
  ((QMdiArea*)this_)->setActivationOrder(order);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:109
// [-2] void setOption(enum QMdiArea::AreaOption, _Bool)
extern "C"
void C_ZN8QMdiArea9setOptionENS_10AreaOptionEb(void *this_, QMdiArea::AreaOption option, bool on) {
  ((QMdiArea*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:110
// [1] bool testOption(enum QMdiArea::AreaOption)
extern "C"
bool C_ZNK8QMdiArea10testOptionENS_10AreaOptionE(void *this_, QMdiArea::AreaOption opton) {
  return (bool)((QMdiArea*)this_)->testOption(opton);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:112
// [-2] void setViewMode(enum QMdiArea::ViewMode)
extern "C"
void C_ZN8QMdiArea11setViewModeENS_8ViewModeE(void *this_, QMdiArea::ViewMode mode) {
  ((QMdiArea*)this_)->setViewMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:113
// [4] QMdiArea::ViewMode viewMode()
extern "C"
QMdiArea::ViewMode C_ZNK8QMdiArea8viewModeEv(void *this_) {
  return (QMdiArea::ViewMode)((QMdiArea*)this_)->viewMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:116
// [1] bool documentMode()
extern "C"
bool C_ZNK8QMdiArea12documentModeEv(void *this_) {
  return (bool)((QMdiArea*)this_)->documentMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:117
// [-2] void setDocumentMode(_Bool)
extern "C"
void C_ZN8QMdiArea15setDocumentModeEb(void *this_, bool enabled) {
  ((QMdiArea*)this_)->setDocumentMode(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:119
// [-2] void setTabsClosable(_Bool)
extern "C"
void C_ZN8QMdiArea15setTabsClosableEb(void *this_, bool closable) {
  ((QMdiArea*)this_)->setTabsClosable(closable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:120
// [1] bool tabsClosable()
extern "C"
bool C_ZNK8QMdiArea12tabsClosableEv(void *this_) {
  return (bool)((QMdiArea*)this_)->tabsClosable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:122
// [-2] void setTabsMovable(_Bool)
extern "C"
void C_ZN8QMdiArea14setTabsMovableEb(void *this_, bool movable) {
  ((QMdiArea*)this_)->setTabsMovable(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:123
// [1] bool tabsMovable()
extern "C"
bool C_ZNK8QMdiArea11tabsMovableEv(void *this_) {
  return (bool)((QMdiArea*)this_)->tabsMovable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:126
// [-2] void setTabShape(class QTabWidget::TabShape)
extern "C"
void C_ZN8QMdiArea11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape shape) {
  ((QMdiArea*)this_)->setTabShape(shape);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:127
// [4] QTabWidget::TabShape tabShape()
extern "C"
QTabWidget::TabShape C_ZNK8QMdiArea8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QMdiArea*)this_)->tabShape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:129
// [-2] void setTabPosition(class QTabWidget::TabPosition)
extern "C"
void C_ZN8QMdiArea14setTabPositionEN10QTabWidget11TabPositionE(void *this_, QTabWidget::TabPosition position) {
  ((QMdiArea*)this_)->setTabPosition(position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:130
// [4] QTabWidget::TabPosition tabPosition()
extern "C"
QTabWidget::TabPosition C_ZNK8QMdiArea11tabPositionEv(void *this_) {
  return (QTabWidget::TabPosition)((QMdiArea*)this_)->tabPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:134
// [-2] void subWindowActivated(class QMdiSubWindow *)
extern "C"
void C_ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(void *this_, QMdiSubWindow * arg0) {
  ((QMdiArea*)this_)->subWindowActivated(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:137
// [-2] void setActiveSubWindow(class QMdiSubWindow *)
extern "C"
void C_ZN8QMdiArea18setActiveSubWindowEP13QMdiSubWindow(void *this_, QMdiSubWindow * window) {
  ((QMdiArea*)this_)->setActiveSubWindow(window);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:138
// [-2] void tileSubWindows()
extern "C"
void C_ZN8QMdiArea14tileSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->tileSubWindows();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:139
// [-2] void cascadeSubWindows()
extern "C"
void C_ZN8QMdiArea17cascadeSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->cascadeSubWindows();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:140
// [-2] void closeActiveSubWindow()
extern "C"
void C_ZN8QMdiArea20closeActiveSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->closeActiveSubWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:141
// [-2] void closeAllSubWindows()
extern "C"
void C_ZN8QMdiArea18closeAllSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->closeAllSubWindows();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:142
// [-2] void activateNextSubWindow()
extern "C"
void C_ZN8QMdiArea21activateNextSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activateNextSubWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:143
// [-2] void activatePreviousSubWindow()
extern "C"
void C_ZN8QMdiArea25activatePreviousSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activatePreviousSubWindow();
}
//  main block end
