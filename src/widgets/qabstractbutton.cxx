// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qabstractbutton.h
// dst-file: /src/widgets/qabstractbutton.cxx
//

// header block begin =>
#include <qabstractbutton.h>

extern "C" {

int QAbstractButton_Class_Size()
{
  return sizeof(QAbstractButton);
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
// QAbstractButton_SlotProxy here
class QAbstractButton_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QAbstractButton_SlotProxy():QObject(){}

public slots:
  // pressed()
  void slot_proxy_func__ZN15QAbstractButton7pressedEv();
public:
  void (*slot_func__ZN15QAbstractButton7pressedEv)() = NULL;
public slots:
  // released()
  void slot_proxy_func__ZN15QAbstractButton8releasedEv();
public:
  void (*slot_func__ZN15QAbstractButton8releasedEv)() = NULL;
public slots:
  // clicked(_Bool)
  void slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0);
public:
  void (*slot_func__ZN15QAbstractButton7clickedEb)(bool arg0) = NULL;
public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0);
public:
  void (*slot_func__ZN15QAbstractButton7toggledEb)(bool arg0) = NULL;
};
#include "src/widgets/qabstractbutton.moc"

extern "C" {
  QAbstractButton_SlotProxy* QAbstractButton_SlotProxy_new()
  {
    return new QAbstractButton_SlotProxy();
  }
};

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7pressedEv() {
  if (this->slot_func__ZN15QAbstractButton7pressedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7pressedEv();
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7pressedEv(QObject* sender, void* fptr){
  auto that = new QAbstractButton_SlotProxy();
  that->slot_func__ZN15QAbstractButton7pressedEv = (decltype(that->slot_func__ZN15QAbstractButton7pressedEv))fptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(pressed()), that, SLOT(slot_proxy_func__ZN15QAbstractButton7pressedEv()));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7pressedEv(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton8releasedEv() {
  if (this->slot_func__ZN15QAbstractButton8releasedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton8releasedEv();
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton8releasedEv(QObject* sender, void* fptr){
  auto that = new QAbstractButton_SlotProxy();
  that->slot_func__ZN15QAbstractButton8releasedEv = (decltype(that->slot_func__ZN15QAbstractButton8releasedEv))fptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(released()), that, SLOT(slot_proxy_func__ZN15QAbstractButton8releasedEv()));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton8releasedEv(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0) {
  if (this->slot_func__ZN15QAbstractButton7clickedEb != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7clickedEb(arg0);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7clickedEb(QObject* sender, void* fptr){
  auto that = new QAbstractButton_SlotProxy();
  that->slot_func__ZN15QAbstractButton7clickedEb = (decltype(that->slot_func__ZN15QAbstractButton7clickedEb))fptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(clicked(_Bool)), that, SLOT(slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7clickedEb(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0) {
  if (this->slot_func__ZN15QAbstractButton7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7toggledEb(arg0);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7toggledEb(QObject* sender, void* fptr){
  auto that = new QAbstractButton_SlotProxy();
  that->slot_func__ZN15QAbstractButton7toggledEb = (decltype(that->slot_func__ZN15QAbstractButton7toggledEb))fptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7toggledEb(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

