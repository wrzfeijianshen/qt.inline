// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qtimer.h
// dst-file: /src/core/qtimer.cxx
//

// header block begin =>
#include <qtimer.h>

extern "C" {

// ~QTimer()
void dedtor_ZN6QTimerD0Ev(QTimer* that)
{
  QTimer* rthis = (QTimer*)that;
  delete rthis;
}

// QTimer(class QObject *)
QTimer* dector_ZN6QTimerC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTimer) == 32, "tyszerr");
  QTimer* rthis = new QTimer(parent);
  return rthis;
}

  // proto:  void QTimer::setSingleShot(bool singleShot);
void _ZN6QTimer13setSingleShotEb(void *that, bool singleShot)
{
  QTimer *cthat = (QTimer *)that;
   cthat->setSingleShot(singleShot);
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
// <= body block end

