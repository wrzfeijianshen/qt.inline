// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qsize.h
// dst-file: /src/core/qsize.cxx
//

// header block begin =>
#include <qsize.h>

extern "C" {

int QSize_Class_Size()
{
  return sizeof(QSize);
}

// QSize()
QSize* dector_ZN5QSizeC1Ev()
{
  // static_assert(sizeof(QSize) == 32, "tyszerr");
  QSize* rthis = new QSize();
  return rthis;
}

// QSize(int, int)
QSize* dector_ZN5QSizeC1Eii(int w, int h)
{
  // static_assert(sizeof(QSize) == 32, "tyszerr");
  QSize* rthis = new QSize(w, h);
  return rthis;
}

  // proto:  int & QSize::rheight();
int * demth_ZN5QSize7rheightEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return &cthat->rheight();
}

  // proto:  void QSize::scale(const QSize & s, Qt::AspectRatioMode mode);
void demth_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE(void *that, const QSize & s, Qt::AspectRatioMode mode)
{
  QSize *cthat = (QSize *)that;
   cthat->scale(s, mode);
}

  // proto:  void QSize::scale(int w, int h, Qt::AspectRatioMode mode);
void demth_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE(void *that, int w, int h, Qt::AspectRatioMode mode)
{
  QSize *cthat = (QSize *)that;
   cthat->scale(w, h, mode);
}

  // proto:  int & QSize::rwidth();
int * demth_ZN5QSize6rwidthEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return &cthat->rwidth();
}

  // proto:  void QSize::setHeight(int h);
void demth_ZN5QSize9setHeightEi(void *that, int h)
{
  QSize *cthat = (QSize *)that;
   cthat->setHeight(h);
}

  // proto:  void QSize::setWidth(int w);
void demth_ZN5QSize8setWidthEi(void *that, int w)
{
  QSize *cthat = (QSize *)that;
   cthat->setWidth(w);
}

int QSizeF_Class_Size()
{
  return sizeof(QSizeF);
}

// QSizeF()
QSizeF* dector_ZN6QSizeFC1Ev()
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF();
  return rthis;
}

// QSizeF(const class QSize &)
QSizeF* dector_ZN6QSizeFC1ERK5QSize(const QSize & sz)
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF(sz);
  return rthis;
}

// QSizeF(qreal, qreal)
QSizeF* dector_ZN6QSizeFC1Edd(double w, double h)
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF(w, h);
  return rthis;
}

  // proto:  qreal & QSizeF::rheight();
qreal * demth_ZN6QSizeF7rheightEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return &cthat->rheight();
}

  // proto:  qreal & QSizeF::rwidth();
qreal * demth_ZN6QSizeF6rwidthEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return &cthat->rwidth();
}

  // proto:  void QSizeF::setHeight(qreal h);
void demth_ZN6QSizeF9setHeightEd(void *that, double h)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->setHeight(h);
}

  // proto:  bool QSizeF::isNull();
bool demth_ZNK6QSizeF6isNullEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->isNull();
}

  // proto:  void QSizeF::scale(qreal w, qreal h, Qt::AspectRatioMode mode);
void demth_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *that, double w, double h, Qt::AspectRatioMode mode)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->scale(w, h, mode);
}

  // proto:  void QSizeF::setWidth(qreal w);
void demth_ZN6QSizeF8setWidthEd(void *that, double w)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->setWidth(w);
}

  // proto:  void QSizeF::scale(const QSizeF & s, Qt::AspectRatioMode mode);
void demth_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *that, const QSizeF & s, Qt::AspectRatioMode mode)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->scale(s, mode);
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

