// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qgridlayout.h
// dst-file: /src/widgets/qgridlayout.cxx
//

// header block begin =>
#include <qgridlayout.h>

extern "C" {

int QGridLayout_Class_Size()
{
  return sizeof(QGridLayout);
}

// QGridLayout(class QWidget *)
QGridLayout* dector_ZN11QGridLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QGridLayout) == 32, "tyszerr");
  QGridLayout* rthis = new QGridLayout(parent);
  return rthis;
}

// QGridLayout()
QGridLayout* dector_ZN11QGridLayoutC1Ev()
{
  // static_assert(sizeof(QGridLayout) == 32, "tyszerr");
  QGridLayout* rthis = new QGridLayout();
  return rthis;
}

// ~QGridLayout()
void dedtor_ZN11QGridLayoutD0Ev(QGridLayout* that)
{
  QGridLayout* rthis = (QGridLayout*)that;
  delete rthis;
}

  // proto:  void QGridLayout::addWidget(QWidget * w);
void demth_ZN11QGridLayout9addWidgetEP7QWidget(void *that, QWidget * w)
{
  QGridLayout *cthat = (QGridLayout *)that;
   cthat->addWidget(w);
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
// QGridLayout_SlotProxy here
class QGridLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGridLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgridlayout.moc"

extern "C" {
  QGridLayout_SlotProxy* QGridLayout_SlotProxy_new()
  {
    return new QGridLayout_SlotProxy();
  }
};

// <= body block end

