// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qscroller.h
// dst-file: /src/widgets/qscroller.cxx
//

// header block begin =>
#include <qscroller.h>

extern "C" {

int QScroller_Class_Size()
{
  return sizeof(QScroller);
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
// QScroller_SlotProxy here
class QScroller_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QScroller_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QScroller::State)
  void slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0);
public:
  void (*slot_func__ZN9QScroller12stateChangedENS_5StateE)(QScroller::State arg0) = NULL;
public slots:
  // scrollerPropertiesChanged(const class QScrollerProperties &)
  void slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0);
public:
  void (*slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties)(const QScrollerProperties & arg0) = NULL;
};
#include "src/widgets/qscroller.moc"

extern "C" {
  QScroller_SlotProxy* QScroller_SlotProxy_new()
  {
    return new QScroller_SlotProxy();
  }
};

void QScroller_SlotProxy::slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0) {
  if (this->slot_func__ZN9QScroller12stateChangedENS_5StateE != NULL) {
    // do smth...
    this->slot_func__ZN9QScroller12stateChangedENS_5StateE(arg0);
  }
}
extern "C"
void* QScroller_SlotProxy_connect__ZN9QScroller12stateChangedENS_5StateE(QObject* sender, void* fptr){
  auto that = new QScroller_SlotProxy();
  that->slot_func__ZN9QScroller12stateChangedENS_5StateE = (decltype(that->slot_func__ZN9QScroller12stateChangedENS_5StateE))fptr;
  QObject::connect((QScroller*)sender, SIGNAL(stateChanged(class QScroller::State)), that, SLOT(slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0)));
  return that;
}
extern "C"
void QScroller_SlotProxy_disconnect__ZN9QScroller12stateChangedENS_5StateE(QScroller_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScroller_SlotProxy::slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0) {
  if (this->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties != NULL) {
    // do smth...
    this->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(arg0);
  }
}
extern "C"
void* QScroller_SlotProxy_connect__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(QObject* sender, void* fptr){
  auto that = new QScroller_SlotProxy();
  that->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties = (decltype(that->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties))fptr;
  QObject::connect((QScroller*)sender, SIGNAL(scrollerPropertiesChanged(const class QScrollerProperties &)), that, SLOT(slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0)));
  return that;
}
extern "C"
void QScroller_SlotProxy_disconnect__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(QScroller_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

