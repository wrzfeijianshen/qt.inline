//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsHostAddressRecord is pure virtual: false
// QDnsHostAddressRecord has virtual projected: false
//  header block end

//  main block begin

class MyQDnsHostAddressRecord : public QDnsHostAddressRecord {
public:
  virtual ~MyQDnsHostAddressRecord() {}
// void QDnsHostAddressRecord()
MyQDnsHostAddressRecord() : QDnsHostAddressRecord() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:87
// [-2] void QDnsHostAddressRecord()
extern "C"
void* C_ZN21QDnsHostAddressRecordC2Ev() {
  return  new QDnsHostAddressRecord();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:90
// [8] QDnsHostAddressRecord & operator=(class QDnsHostAddressRecord &&)
extern "C"
void* C_ZN21QDnsHostAddressRecordaSEOS_(void *this_, QDnsHostAddressRecord && other) {
  auto& rv = ((QDnsHostAddressRecord*)this_)->operator=(other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:92
// [8] QDnsHostAddressRecord & operator=(const class QDnsHostAddressRecord &)
extern "C"
void* C_ZN21QDnsHostAddressRecordaSERKS_(void *this_, QDnsHostAddressRecord* other) {
  auto& rv = ((QDnsHostAddressRecord*)this_)->operator=(*other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:93
// [-2] void ~QDnsHostAddressRecord()
extern "C"
void C_ZN21QDnsHostAddressRecordD2Ev(void *this_) {
  delete (QDnsHostAddressRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:95
// [-2] void swap(class QDnsHostAddressRecord &)
extern "C"
void C_ZN21QDnsHostAddressRecord4swapERS_(void *this_, QDnsHostAddressRecord* other) {
  ((QDnsHostAddressRecord*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:97
// [8] QString name()
extern "C"
void* C_ZNK21QDnsHostAddressRecord4nameEv(void *this_) {
  auto rv = ((QDnsHostAddressRecord*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:98
// [4] quint32 timeToLive()
extern "C"
quint32 C_ZNK21QDnsHostAddressRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsHostAddressRecord*)this_)->timeToLive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:99
// [8] QHostAddress value()
extern "C"
void* C_ZNK21QDnsHostAddressRecord5valueEv(void *this_) {
  auto rv = ((QDnsHostAddressRecord*)this_)->value();
return new QHostAddress(rv);
}
//  main block end