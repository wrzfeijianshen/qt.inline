//  header block begin
// /usr/include/qt/QtGui/qiconengineplugin.h
#include <qiconengineplugin.h>
#include <QtGui>

// QIconEnginePlugin is pure virtual: true
//  header block end

//  main block begin

class MyQIconEnginePlugin : public QIconEnginePlugin {
public:
MyQIconEnginePlugin(QObject * parent) : QIconEnginePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QIconEnginePlugin10metaObjectEv(void *this_) {
  return (void*)((QIconEnginePlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:58
// [-2] void QIconEnginePlugin(class QObject *)
extern "C"
void* C_ZN17QIconEnginePluginC1EP7QObject(QObject * parent) {
  (MyQIconEnginePlugin*)(0);
  return 0; // new MyQIconEnginePlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:59
// [-2] void ~QIconEnginePlugin()
extern "C"
void C_ZN17QIconEnginePluginD1Ev(void *this_) {
  delete (QIconEnginePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:61
// [8] QIconEngine * create(const class QString &)
extern "C"
void* C_ZN17QIconEnginePlugin6createERK7QString(void *this_, const QString & filename) {
  return (void*)((QIconEnginePlugin*)this_)->create(filename);
}
//  main block end
