// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qslider.h
// dst-file: /src/widgets/qslider.cxx
//

// header block begin =>
#include <qslider.h>

extern "C" {

int QSlider_Class_Size()
{
  return sizeof(QSlider);
}

// ~QSlider()
void dedtor_ZN7QSliderD0Ev(QSlider* that)
{
  QSlider* rthis = (QSlider*)that;
  delete rthis;
}

// QSlider(Qt::Orientation, class QWidget *)
QSlider* dector_ZN7QSliderC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QSlider) == 32, "tyszerr");
  QSlider* rthis = new QSlider(orientation, parent);
  return rthis;
}

// QSlider(class QWidget *)
QSlider* dector_ZN7QSliderC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QSlider) == 32, "tyszerr");
  QSlider* rthis = new QSlider(parent);
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
// QSlider_SlotProxy here
class QSlider_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSlider_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qslider.moc"

extern "C" {
  QSlider_SlotProxy* QSlider_SlotProxy_new()
  {
    return new QSlider_SlotProxy();
  }
};

// <= body block end

