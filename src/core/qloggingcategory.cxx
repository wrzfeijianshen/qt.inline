// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qloggingcategory.h
// dst-file: /src/core/qloggingcategory.cxx
//

// header block begin =>
#include <qloggingcategory.h>

extern "C" {

// QLoggingCategory(const char *, enum QtMsgType)
QLoggingCategory* dector_ZN16QLoggingCategoryC1EPKc9QtMsgType(const char * category, QtMsgType severityLevel)
{
  // static_assert(sizeof(QLoggingCategory) == 32, "tyszerr");
  QLoggingCategory* rthis = new QLoggingCategory(category, severityLevel);
  return rthis;
}

// ~QLoggingCategory()
void dedtor_ZN16QLoggingCategoryD0Ev(QLoggingCategory* that)
{
  QLoggingCategory* rthis = (QLoggingCategory*)that;
  delete rthis;
}

// QLoggingCategory(const char *)
QLoggingCategory* dector_ZN16QLoggingCategoryC1EPKc(const char * category)
{
  // static_assert(sizeof(QLoggingCategory) == 32, "tyszerr");
  QLoggingCategory* rthis = new QLoggingCategory(category);
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

