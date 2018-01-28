//  header block begin
// /usr/include/qt/QtWidgets/qsystemtrayicon.h
#include <qsystemtrayicon.h>
#include <QtWidgets>

// QSystemTrayIcon is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:113
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QSystemTrayIcon5eventEP6QEvent = 0;
extern "C" void set_callback_ZN15QSystemTrayIcon5eventEP6QEvent(void*cbfn)
{ callback_ZN15QSystemTrayIcon5eventEP6QEvent = cbfn; }

class MyQSystemTrayIcon : public QSystemTrayIcon {
public:
MyQSystemTrayIcon(QObject * parent) : QSystemTrayIcon(parent) {}
MyQSystemTrayIcon(const QIcon & icon, QObject * parent) : QSystemTrayIcon(icon, parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * event) {
  if (callback_ZN15QSystemTrayIcon5eventEP6QEvent != 0) {
  // callback_ZN15QSystemTrayIcon5eventEP6QEvent(event);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QSystemTrayIcon10metaObjectEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:69
// [-2] void QSystemTrayIcon(class QObject *)
extern "C"
void* C_ZN15QSystemTrayIconC1EP7QObject(QObject * parent) {
  (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:70
// [-2] void QSystemTrayIcon(const class QIcon &, class QObject *)
extern "C"
void* C_ZN15QSystemTrayIconC1ERK5QIconP7QObject(const QIcon & icon, QObject * parent) {
  (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(icon, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:71
// [-2] void ~QSystemTrayIcon()
extern "C"
void C_ZN15QSystemTrayIconD1Ev(void *this_) {
  delete (QSystemTrayIcon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:82
// [-2] void setContextMenu(class QMenu *)
extern "C"
void C_ZN15QSystemTrayIcon14setContextMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QSystemTrayIcon*)this_)->setContextMenu(menu);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:83
// [8] QMenu * contextMenu()
extern "C"
void* C_ZNK15QSystemTrayIcon11contextMenuEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->contextMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:86
// [8] QIcon icon()
extern "C"
void* C_ZNK15QSystemTrayIcon4iconEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->icon();
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:87
// [-2] void setIcon(const class QIcon &)
extern "C"
void C_ZN15QSystemTrayIcon7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QSystemTrayIcon*)this_)->setIcon(icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:89
// [8] QString toolTip()
extern "C"
void* C_ZNK15QSystemTrayIcon7toolTipEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->toolTip();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:90
// [-2] void setToolTip(const class QString &)
extern "C"
void C_ZN15QSystemTrayIcon10setToolTipERK7QString(void *this_, const QString & tip) {
  ((QSystemTrayIcon*)this_)->setToolTip(tip);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:92
// [1] bool isSystemTrayAvailable()
extern "C"
bool C_ZN15QSystemTrayIcon21isSystemTrayAvailableEv() {
  return (bool)QSystemTrayIcon::isSystemTrayAvailable();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:93
// [1] bool supportsMessages()
extern "C"
bool C_ZN15QSystemTrayIcon16supportsMessagesEv() {
  return (bool)QSystemTrayIcon::supportsMessages();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:97
// [16] QRect geometry()
extern "C"
void* C_ZNK15QSystemTrayIcon8geometryEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->geometry();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:98
// [1] bool isVisible()
extern "C"
bool C_ZNK15QSystemTrayIcon9isVisibleEv(void *this_) {
  return (bool)((QSystemTrayIcon*)this_)->isVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:101
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN15QSystemTrayIcon10setVisibleEb(void *this_, bool visible) {
  ((QSystemTrayIcon*)this_)->setVisible(visible);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:102
// [-2] void show()
extern "C"
void C_ZN15QSystemTrayIcon4showEv(void *this_) {
  ((QSystemTrayIcon*)this_)->show();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:103
// [-2] void hide()
extern "C"
void C_ZN15QSystemTrayIcon4hideEv(void *this_) {
  ((QSystemTrayIcon*)this_)->hide();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:104
// [-2] void showMessage(const class QString &, const class QString &, const class QIcon &, int)
extern "C"
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_RK5QIconi(void *this_, const QString & title, const QString & msg, const QIcon & icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(title, msg, icon, msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:105
// [-2] void showMessage(const class QString &, const class QString &, class QSystemTrayIcon::MessageIcon, int)
extern "C"
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi(void *this_, const QString & title, const QString & msg, QSystemTrayIcon::MessageIcon icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(title, msg, icon, msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:109
// [-2] void activated(class QSystemTrayIcon::ActivationReason)
extern "C"
void C_ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(void *this_, QSystemTrayIcon::ActivationReason reason) {
  ((QSystemTrayIcon*)this_)->activated(reason);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:110
// [-2] void messageClicked()
extern "C"
void C_ZN15QSystemTrayIcon14messageClickedEv(void *this_) {
  ((QSystemTrayIcon*)this_)->messageClicked();
}
//  main block end
