//  header block begin
// /usr/include/qt/QtCore/qthreadstorage.h
#include <qthreadstorage.h>
#include <QtCore>

// QThreadStorageData is pure virtual: false
//  header block end

//  main block begin

class MyQThreadStorageData : public QThreadStorageData {
public:
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:54
// [-2] void ~QThreadStorageData()
extern "C"
void C_ZN18QThreadStorageDataD1Ev(void *this_) {
  delete (QThreadStorageData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:56
// [8] void ** get()
extern "C"
void* C_ZNK18QThreadStorageData3getEv(void *this_) {
  return (void*)((QThreadStorageData*)this_)->get();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:57
// [8] void ** set(void *)
extern "C"
void* C_ZN18QThreadStorageData3setEPv(void *this_, void * p) {
  return (void*)((QThreadStorageData*)this_)->set(p);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:59
// [-2] void finish(void **)
extern "C"
void C_ZN18QThreadStorageData6finishEPPv(void ** arg0) {
  QThreadStorageData::finish(arg0);
}
//  main block end
