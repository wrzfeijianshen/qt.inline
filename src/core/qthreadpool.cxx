// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qthreadpool.h
// dst-file: /src/core/qthreadpool.cxx
//

// header block begin =>
#include <qthreadpool.h>

extern "C" {

int QThreadPool_Class_Size()
{
  return sizeof(QThreadPool);
}

// ~QThreadPool()
void dedtor_ZN11QThreadPoolD0Ev(QThreadPool* that)
{
  QThreadPool* rthis = (QThreadPool*)that;
  delete rthis;
}

// QThreadPool(class QObject *)
QThreadPool* dector_ZN11QThreadPoolC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QThreadPool) == 32, "tyszerr");
  QThreadPool* rthis = new QThreadPool(parent);
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
// QThreadPool_SlotProxy here
class QThreadPool_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QThreadPool_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qthreadpool.moc"

extern "C" {
  QThreadPool_SlotProxy* QThreadPool_SlotProxy_new()
  {
    return new QThreadPool_SlotProxy();
  }
};

// <= body block end

