// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qthreadstorage.h
// dst-file: /src/core/qthreadstorage.cxx
//

// header block begin =>
#include <qthreadstorage.h>

extern "C" {

// ~QThreadStorageData()
void dedtor_ZN18QThreadStorageDataD0Ev(QThreadStorageData* that)
{
  QThreadStorageData* rthis = (QThreadStorageData*)that;
  delete rthis;
}

// QThreadStorageData(void (*)(void *))
QThreadStorageData* dector_ZN18QThreadStorageDataC1EPFvPvE(void (*func)(void *))
{
  // static_assert(sizeof(QThreadStorageData) == 32, "tyszerr");
  QThreadStorageData* rthis = new QThreadStorageData(func);
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
// <= body block end

