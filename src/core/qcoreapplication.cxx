// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qcoreapplication.h
// dst-file: /src/core/qcoreapplication.cxx
//

// header block begin =>
#include <qcoreapplication.h>

extern "C" {

int QCoreApplication_Class_Size()
{
  return sizeof(QCoreApplication);
}

// ~QCoreApplication()
void dedtor_ZN16QCoreApplicationD0Ev(QCoreApplication* that)
{
  QCoreApplication* rthis = (QCoreApplication*)that;
  delete rthis;
}

// QCoreApplication(int &, char **, int)
QCoreApplication* dector_ZN16QCoreApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QCoreApplication) == 32, "tyszerr");
  QCoreApplication* rthis = new QCoreApplication(argc, argv, arg3);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QCoreApplication_SlotProxy here
class QCoreApplication_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QCoreApplication_SlotProxy():QObject(){}

public slots:
  // organizationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication23organizationNameChangedEv)() = NULL;
public slots:
  // organizationDomainChanged()
  void slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25organizationDomainChangedEv)() = NULL;
public slots:
  // applicationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication22applicationNameChangedEv)() = NULL;
public slots:
  // applicationVersionChanged()
  void slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25applicationVersionChangedEv)() = NULL;
};
#include "src/core/qcoreapplication.moc"

extern "C" {
  QCoreApplication_SlotProxy* QCoreApplication_SlotProxy_new()
  {
    return new QCoreApplication_SlotProxy();
  }
};

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication23organizationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication23organizationNameChangedEv();
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication23organizationNameChangedEv(QObject* sender, void* fptr){
  auto that = new QCoreApplication_SlotProxy();
  that->slot_func__ZN16QCoreApplication23organizationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication23organizationNameChangedEv))fptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication23organizationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv();
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25organizationDomainChangedEv(QObject* sender, void* fptr){
  auto that = new QCoreApplication_SlotProxy();
  that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv))fptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationDomainChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25organizationDomainChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication22applicationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication22applicationNameChangedEv();
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication22applicationNameChangedEv(QObject* sender, void* fptr){
  auto that = new QCoreApplication_SlotProxy();
  that->slot_func__ZN16QCoreApplication22applicationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication22applicationNameChangedEv))fptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication22applicationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv();
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25applicationVersionChangedEv(QObject* sender, void* fptr){
  auto that = new QCoreApplication_SlotProxy();
  that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv))fptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationVersionChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25applicationVersionChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

