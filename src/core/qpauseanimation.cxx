// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qpauseanimation.h
// dst-file: /src/core/qpauseanimation.cxx
//

// header block begin =>
#include <qpauseanimation.h>

extern "C" {

int QPauseAnimation_Class_Size()
{
  return sizeof(QPauseAnimation);
}

// QPauseAnimation(class QObject *)
QPauseAnimation* dector_ZN15QPauseAnimationC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QPauseAnimation) == 32, "tyszerr");
  QPauseAnimation* rthis = new QPauseAnimation(parent);
  return rthis;
}

// QPauseAnimation(int, class QObject *)
QPauseAnimation* dector_ZN15QPauseAnimationC1EiP7QObject(int msecs, QObject * parent)
{
  // static_assert(sizeof(QPauseAnimation) == 32, "tyszerr");
  QPauseAnimation* rthis = new QPauseAnimation(msecs, parent);
  return rthis;
}

// ~QPauseAnimation()
void dedtor_ZN15QPauseAnimationD0Ev(QPauseAnimation* that)
{
  QPauseAnimation* rthis = (QPauseAnimation*)that;
  delete rthis;
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
// QPauseAnimation_SlotProxy here
class QPauseAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPauseAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qpauseanimation.moc"

extern "C" {
  QPauseAnimation_SlotProxy* QPauseAnimation_SlotProxy_new()
  {
    return new QPauseAnimation_SlotProxy();
  }
};

// <= body block end

