// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qpropertyanimation.h
// dst-file: /src/core/qpropertyanimation.cxx
//

// header block begin =>
#include <qpropertyanimation.h>

extern "C" {

int QPropertyAnimation_Class_Size()
{
  return sizeof(QPropertyAnimation);
}

// QPropertyAnimation(class QObject *)
QPropertyAnimation* dector_ZN18QPropertyAnimationC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QPropertyAnimation) == 32, "tyszerr");
  QPropertyAnimation* rthis = new QPropertyAnimation(parent);
  return rthis;
}

// ~QPropertyAnimation()
void dedtor_ZN18QPropertyAnimationD0Ev(QPropertyAnimation* that)
{
  QPropertyAnimation* rthis = (QPropertyAnimation*)that;
  delete rthis;
}

// QPropertyAnimation(class QObject *, const class QByteArray &, class QObject *)
QPropertyAnimation* dector_ZN18QPropertyAnimationC1EP7QObjectRK10QByteArrayS1_(QObject * target, const QByteArray & propertyName, QObject * parent)
{
  // static_assert(sizeof(QPropertyAnimation) == 32, "tyszerr");
  QPropertyAnimation* rthis = new QPropertyAnimation(target, propertyName, parent);
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
// QPropertyAnimation_SlotProxy here
class QPropertyAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPropertyAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qpropertyanimation.moc"

extern "C" {
  QPropertyAnimation_SlotProxy* QPropertyAnimation_SlotProxy_new()
  {
    return new QPropertyAnimation_SlotProxy();
  }
};

// <= body block end

