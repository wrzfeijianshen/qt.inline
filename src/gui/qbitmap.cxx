// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qbitmap.h
// dst-file: /src/gui/qbitmap.cxx
//

// header block begin =>
#include <qbitmap.h>

extern "C" {

int QBitmap_Class_Size()
{
  return sizeof(QBitmap);
}

// QBitmap(const class QPixmap &)
QBitmap* dector_ZN7QBitmapC1ERK7QPixmap(const QPixmap & arg1)
{
  // static_assert(sizeof(QBitmap) == 32, "tyszerr");
  QBitmap* rthis = new QBitmap(arg1);
  return rthis;
}

// QBitmap(const class QSize &)
QBitmap* dector_ZN7QBitmapC1ERK5QSize(const QSize & arg1)
{
  // static_assert(sizeof(QBitmap) == 32, "tyszerr");
  QBitmap* rthis = new QBitmap(arg1);
  return rthis;
}

// QBitmap(int, int)
QBitmap* dector_ZN7QBitmapC1Eii(int w, int h)
{
  // static_assert(sizeof(QBitmap) == 32, "tyszerr");
  QBitmap* rthis = new QBitmap(w, h);
  return rthis;
}

// ~QBitmap()
void dedtor_ZN7QBitmapD0Ev(QBitmap* that)
{
  QBitmap* rthis = (QBitmap*)that;
  delete rthis;
}

// QBitmap(const class QString &, const char *)
QBitmap* dector_ZN7QBitmapC1ERK7QStringPKc(const QString & fileName, const char * format)
{
  // static_assert(sizeof(QBitmap) == 32, "tyszerr");
  QBitmap* rthis = new QBitmap(fileName, format);
  return rthis;
}

// QBitmap()
QBitmap* dector_ZN7QBitmapC1Ev()
{
  // static_assert(sizeof(QBitmap) == 32, "tyszerr");
  QBitmap* rthis = new QBitmap();
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

