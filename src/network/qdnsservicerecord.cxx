//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsServiceRecord is pure virtual: false
// QDnsServiceRecord has virtual projected: false
//  header block end

//  main block begin

class MyQDnsServiceRecord : public QDnsServiceRecord {
public:
  virtual ~MyQDnsServiceRecord() {}
// void QDnsServiceRecord()
MyQDnsServiceRecord() : QDnsServiceRecord() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:136
// [-2] void QDnsServiceRecord()
extern "C"
void* C_ZN17QDnsServiceRecordC2Ev() {
  return  new QDnsServiceRecord();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:139
// [8] QDnsServiceRecord & operator=(class QDnsServiceRecord &&)
extern "C"
void* C_ZN17QDnsServiceRecordaSEOS_(void *this_, QDnsServiceRecord && other) {
  auto& rv = ((QDnsServiceRecord*)this_)->operator=(other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:141
// [8] QDnsServiceRecord & operator=(const class QDnsServiceRecord &)
extern "C"
void* C_ZN17QDnsServiceRecordaSERKS_(void *this_, QDnsServiceRecord* other) {
  auto& rv = ((QDnsServiceRecord*)this_)->operator=(*other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:142
// [-2] void ~QDnsServiceRecord()
extern "C"
void C_ZN17QDnsServiceRecordD2Ev(void *this_) {
  delete (QDnsServiceRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:144
// [-2] void swap(class QDnsServiceRecord &)
extern "C"
void C_ZN17QDnsServiceRecord4swapERS_(void *this_, QDnsServiceRecord* other) {
  ((QDnsServiceRecord*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:146
// [8] QString name()
extern "C"
void* C_ZNK17QDnsServiceRecord4nameEv(void *this_) {
  auto rv = ((QDnsServiceRecord*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:147
// [2] quint16 port()
extern "C"
quint16 C_ZNK17QDnsServiceRecord4portEv(void *this_) {
  return (quint16)((QDnsServiceRecord*)this_)->port();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:148
// [2] quint16 priority()
extern "C"
quint16 C_ZNK17QDnsServiceRecord8priorityEv(void *this_) {
  return (quint16)((QDnsServiceRecord*)this_)->priority();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:149
// [8] QString target()
extern "C"
void* C_ZNK17QDnsServiceRecord6targetEv(void *this_) {
  auto rv = ((QDnsServiceRecord*)this_)->target();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:150
// [4] quint32 timeToLive()
extern "C"
quint32 C_ZNK17QDnsServiceRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsServiceRecord*)this_)->timeToLive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:151
// [2] quint16 weight()
extern "C"
quint16 C_ZNK17QDnsServiceRecord6weightEv(void *this_) {
  return (quint16)((QDnsServiceRecord*)this_)->weight();
}
//  main block end