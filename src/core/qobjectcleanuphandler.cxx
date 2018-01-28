//  header block begin
// /usr/include/qt/QtCore/qobjectcleanuphandler.h
#include <qobjectcleanuphandler.h>
#include <QtCore>

// QObjectCleanupHandler is pure virtual: false
//  header block end

//  main block begin

class MyQObjectCleanupHandler : public QObjectCleanupHandler {
public:
MyQObjectCleanupHandler() : QObjectCleanupHandler() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK21QObjectCleanupHandler10metaObjectEv(void *this_) {
  return (void*)((QObjectCleanupHandler*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:53
// [-2] void QObjectCleanupHandler()
extern "C"
void* C_ZN21QObjectCleanupHandlerC1Ev() {
  (MyQObjectCleanupHandler*)(0);
  return  new MyQObjectCleanupHandler();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:54
// [-2] void ~QObjectCleanupHandler()
extern "C"
void C_ZN21QObjectCleanupHandlerD1Ev(void *this_) {
  delete (QObjectCleanupHandler*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:56
// [8] QObject * add(class QObject *)
extern "C"
void* C_ZN21QObjectCleanupHandler3addEP7QObject(void *this_, QObject * object) {
  return (void*)((QObjectCleanupHandler*)this_)->add(object);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:57
// [-2] void remove(class QObject *)
extern "C"
void C_ZN21QObjectCleanupHandler6removeEP7QObject(void *this_, QObject * object) {
  ((QObjectCleanupHandler*)this_)->remove(object);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:58
// [1] bool isEmpty()
extern "C"
bool C_ZNK21QObjectCleanupHandler7isEmptyEv(void *this_) {
  return (bool)((QObjectCleanupHandler*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:59
// [-2] void clear()
extern "C"
void C_ZN21QObjectCleanupHandler5clearEv(void *this_) {
  ((QObjectCleanupHandler*)this_)->clear();
}
//  main block end
