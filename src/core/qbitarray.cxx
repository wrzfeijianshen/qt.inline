// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qbitarray.h
// dst-file: /src/core/qbitarray.cxx
//

// header block begin =>
#include <qbitarray.h>

extern "C" {

int QBitRef_Class_Size()
{
  return sizeof(QBitRef);
}

int QBitArray_Class_Size()
{
  return sizeof(QBitArray);
}

// QBitArray(int, _Bool)
QBitArray* dector_ZN9QBitArrayC1Eib(int size, bool val)
{
  // static_assert(sizeof(QBitArray) == 32, "tyszerr");
  QBitArray* rthis = new QBitArray(size, val);
  return rthis;
}

// QBitArray(class QBitArray &&)
QBitArray* dector_ZN9QBitArrayC1EOS_(QBitArray && other)
{
  // static_assert(sizeof(QBitArray) == 32, "tyszerr");
  QBitArray* rthis = new QBitArray(other);
  return rthis;
}

// QBitArray()
QBitArray* dector_ZN9QBitArrayC1Ev()
{
  // static_assert(sizeof(QBitArray) == 32, "tyszerr");
  QBitArray* rthis = new QBitArray();
  return rthis;
}

// QBitArray(const class QBitArray &)
QBitArray* dector_ZN9QBitArrayC1ERKS_(const QBitArray & other)
{
  // static_assert(sizeof(QBitArray) == 32, "tyszerr");
  QBitArray* rthis = new QBitArray(other);
  return rthis;
}

  // proto:  bool QBitArray::isEmpty();
bool demth_ZNK9QBitArray7isEmptyEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isEmpty();
}

  // proto:  int QBitArray::size();
int demth_ZNK9QBitArray4sizeEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->size();
}

  // proto:  void QBitArray::swap(QBitArray & other);
void demth_ZN9QBitArray4swapERS_(void *that, QBitArray & other)
{
  QBitArray *cthat = (QBitArray *)that;
   cthat->swap(other);
}

  // proto:  int QBitArray::count();
int demth_ZNK9QBitArray5countEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->count();
}

  // proto:  void QBitArray::QBitArray(QBitArray && other);
void demth_ZN9QBitArrayC1EOS_(void *that, QBitArray && other)
{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray(other);
}

  // proto:  void QBitArray::detach();
void demth_ZN9QBitArray6detachEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
   cthat->detach();
}

  // proto:  void QBitArray::QBitArray();
void demth_ZN9QBitArrayC1Ev(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray();
}

  // proto:  void QBitArray::clear();
void demth_ZN9QBitArray5clearEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
   cthat->clear();
}

  // proto:  void QBitArray::truncate(int pos);
void demth_ZN9QBitArray8truncateEi(void *that, int pos)
{
  QBitArray *cthat = (QBitArray *)that;
   cthat->truncate(pos);
}

  // proto:  void QBitArray::QBitArray(const QBitArray & other);
void demth_ZN9QBitArrayC1ERKS_(void *that, const QBitArray & other)
{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray(other);
}

  // proto:  bool QBitArray::isNull();
bool demth_ZNK9QBitArray6isNullEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isNull();
}

  // proto:  bool QBitArray::isDetached();
bool demth_ZNK9QBitArray10isDetachedEv(void *that)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isDetached();
}

  // proto:  bool QBitArray::fill(bool val, int size);
bool demth_ZN9QBitArray4fillEbi(void *that, bool val, int size)
{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->fill(val, size);
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

