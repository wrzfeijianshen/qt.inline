//  header block begin
// /usr/include/qt/QtCore/qstate.h
#include <qstate.h>
#include <QtCore>

// QState is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:119
// [-2] void onEntry(class QEvent *)
extern "C"
void* callback_ZN6QState7onEntryEP6QEvent = 0;
extern "C" void set_callback_ZN6QState7onEntryEP6QEvent(void*cbfn)
{ callback_ZN6QState7onEntryEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:120
// [-2] void onExit(class QEvent *)
extern "C"
void* callback_ZN6QState6onExitEP6QEvent = 0;
extern "C" void set_callback_ZN6QState6onExitEP6QEvent(void*cbfn)
{ callback_ZN6QState6onExitEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:122
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN6QState5eventEP6QEvent = 0;
extern "C" void set_callback_ZN6QState5eventEP6QEvent(void*cbfn)
{ callback_ZN6QState5eventEP6QEvent = cbfn; }

class MyQState : public QState {
public:
MyQState(QState * parent) : QState(parent) {}
MyQState(QState::ChildMode childMode, QState * parent) : QState(childMode, parent) {}
// void onEntry(class QEvent *)
// void onEntry(class QEvent *)
virtual void onEntry(QEvent * event) {
  if (callback_ZN6QState7onEntryEP6QEvent != 0) {
  // callback_ZN6QState7onEntryEP6QEvent(event);
}}
// void onExit(class QEvent *)
// void onExit(class QEvent *)
virtual void onExit(QEvent * event) {
  if (callback_ZN6QState6onExitEP6QEvent != 0) {
  // callback_ZN6QState6onExitEP6QEvent(event);
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN6QState5eventEP6QEvent != 0) {
  // callback_ZN6QState5eventEP6QEvent(e);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QState10metaObjectEv(void *this_) {
  return (void*)((QState*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:74
// [-2] void QState(class QState *)
extern "C"
void* C_ZN6QStateC1EPS_(QState * parent) {
  (MyQState*)(0);
  return  new MyQState(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:75
// [-2] void QState(enum QState::ChildMode, class QState *)
extern "C"
void* C_ZN6QStateC1ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent) {
  (MyQState*)(0);
  return  new MyQState(childMode, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:76
// [-2] void ~QState()
extern "C"
void C_ZN6QStateD1Ev(void *this_) {
  delete (QState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:78
// [8] QAbstractState * errorState()
extern "C"
void* C_ZNK6QState10errorStateEv(void *this_) {
  return (void*)((QState*)this_)->errorState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:79
// [-2] void setErrorState(class QAbstractState *)
extern "C"
void C_ZN6QState13setErrorStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setErrorState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:81
// [-2] void addTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState13addTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->addTransition(transition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:82
// [8] QSignalTransition * addTransition(const class QObject *, const char *, class QAbstractState *)
extern "C"
void* C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *this_, const QObject * sender, const char * signal, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(sender, signal, target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:96
// [8] QAbstractTransition * addTransition(class QAbstractState *)
extern "C"
void* C_ZN6QState13addTransitionEP14QAbstractState(void *this_, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:97
// [-2] void removeTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState16removeTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->removeTransition(transition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:100
// [8] QAbstractState * initialState()
extern "C"
void* C_ZNK6QState12initialStateEv(void *this_) {
  return (void*)((QState*)this_)->initialState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:101
// [-2] void setInitialState(class QAbstractState *)
extern "C"
void C_ZN6QState15setInitialStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setInitialState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:103
// [4] QState::ChildMode childMode()
extern "C"
QState::ChildMode C_ZNK6QState9childModeEv(void *this_) {
  return (QState::ChildMode)((QState*)this_)->childMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:104
// [-2] void setChildMode(enum QState::ChildMode)
extern "C"
void C_ZN6QState12setChildModeENS_9ChildModeE(void *this_, QState::ChildMode mode) {
  ((QState*)this_)->setChildMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:107
// [-2] void assignProperty(class QObject *, const char *, const class QVariant &)
extern "C"
void C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *this_, QObject * object, const char * name, const QVariant & value) {
  ((QState*)this_)->assignProperty(object, name, value);
}
//  main block end
