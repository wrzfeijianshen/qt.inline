// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qcoreapplication.h
// dst-file: /src/core/qcoreapplication.cxx
//

// header block begin =>
#include <qcoreapplication.h>

extern "C" {

// ~QCoreApplication()
void dedtor_ZN16QCoreApplicationD0Ev(QCoreApplication* that)
{
  QCoreApplication* rthis = (QCoreApplication*)that;
  delete rthis;
}

// QCoreApplication(int &, char **, int)
QCoreApplication* dector_ZN16QCoreApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QCoreApplication) == 32, "tyszerr");
  QCoreApplication* rthis = new QCoreApplication(argc, argv, arg3);
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

