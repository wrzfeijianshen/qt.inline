// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qvariantanimation.h
// dst-file: /src/core/qvariantanimation.cxx
//

// header block begin =>
#include <qvariantanimation.h>

extern "C" {

int QVariantAnimation_Class_Size()
{
  return sizeof(QVariantAnimation);
}

// ~QVariantAnimation()
void dedtor_ZN17QVariantAnimationD0Ev(QVariantAnimation* that)
{
  QVariantAnimation* rthis = (QVariantAnimation*)that;
  delete rthis;
}

// QVariantAnimation(class QObject *)
QVariantAnimation* dector_ZN17QVariantAnimationC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QVariantAnimation) == 32, "tyszerr");
  QVariantAnimation* rthis = new QVariantAnimation(parent);
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
// QVariantAnimation_SlotProxy here
class QVariantAnimation_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QVariantAnimation_SlotProxy():QObject(){}

public slots:
  // valueChanged(const class QVariant &)
  void slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0);
public:
  void (*slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant)(const QVariant & arg0) = NULL;
};
#include "src/core/qvariantanimation.moc"

extern "C" {
  QVariantAnimation_SlotProxy* QVariantAnimation_SlotProxy_new()
  {
    return new QVariantAnimation_SlotProxy();
  }
};

void QVariantAnimation_SlotProxy::slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0) {
  if (this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant != NULL) {
    // do smth...
    this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant(arg0);
  }
}
extern "C"
void* QVariantAnimation_SlotProxy_connect__ZN17QVariantAnimation12valueChangedERK8QVariant(QObject* sender, void* fptr){
  auto that = new QVariantAnimation_SlotProxy();
  that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant = (decltype(that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant))fptr;
  QObject::connect((QVariantAnimation*)sender, SIGNAL(valueChanged(const class QVariant &)), that, SLOT(slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0)));
  return that;
}
extern "C"
void QVariantAnimation_SlotProxy_disconnect__ZN17QVariantAnimation12valueChangedERK8QVariant(QVariantAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

