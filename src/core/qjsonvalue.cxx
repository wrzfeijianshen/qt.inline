//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

// QJsonValue is pure virtual: false
//  header block end

//  main block begin

class MyQJsonValue : public QJsonValue {
public:
MyQJsonValue(QJsonValue::Type arg0) : QJsonValue(arg0) {}
MyQJsonValue(bool b) : QJsonValue(b) {}
MyQJsonValue(double n) : QJsonValue(n) {}
MyQJsonValue(int n) : QJsonValue(n) {}
MyQJsonValue(qint64 n) : QJsonValue(n) {}
MyQJsonValue(const QString & s) : QJsonValue(s) {}
MyQJsonValue(QLatin1String s) : QJsonValue(s) {}
MyQJsonValue(const char * s) : QJsonValue(s) {}
MyQJsonValue(const QJsonArray & a) : QJsonValue(a) {}
MyQJsonValue(const QJsonObject & o) : QJsonValue(o) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:76
// [-2] void QJsonValue(enum QJsonValue::Type)
extern "C"
void* C_ZN10QJsonValueC1ENS_4TypeE(QJsonValue::Type arg0) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:77
// [-2] void QJsonValue(_Bool)
extern "C"
void* C_ZN10QJsonValueC1Eb(bool b) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:78
// [-2] void QJsonValue(double)
extern "C"
void* C_ZN10QJsonValueC1Ed(double n) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:79
// [-2] void QJsonValue(int)
extern "C"
void* C_ZN10QJsonValueC1Ei(int n) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:80
// [-2] void QJsonValue(qint64)
extern "C"
void* C_ZN10QJsonValueC1Ex(qint64 n) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:81
// [-2] void QJsonValue(const class QString &)
extern "C"
void* C_ZN10QJsonValueC1ERK7QString(const QString & s) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(s);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:82
// [-2] void QJsonValue(class QLatin1String)
extern "C"
void* C_ZN10QJsonValueC1E13QLatin1String(QLatin1String s) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:84
// [-2] void QJsonValue(const char *)
extern "C"
void* C_ZN10QJsonValueC1EPKc(const char * s) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(s);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:87
// [-2] void QJsonValue(const class QJsonArray &)
extern "C"
void* C_ZN10QJsonValueC1ERK10QJsonArray(const QJsonArray & a) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:88
// [-2] void QJsonValue(const class QJsonObject &)
extern "C"
void* C_ZN10QJsonValueC1ERK11QJsonObject(const QJsonObject & o) {
  (MyQJsonValue*)(0);
  return  new MyQJsonValue(o);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:90
// [-2] void ~QJsonValue()
extern "C"
void C_ZN10QJsonValueD1Ev(void *this_) {
  delete (QJsonValue*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:111
// [-2] void swap(class QJsonValue &)
extern "C"
void C_ZN10QJsonValue4swapERS_(void *this_, QJsonValue & other) {
  ((QJsonValue*)this_)->swap(other);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:118
// [24] QJsonValue fromVariant(const class QVariant &)
extern "C"
void* C_ZN10QJsonValue11fromVariantERK8QVariant(const QVariant & variant) {
  auto rv = QJsonValue::fromVariant(variant);
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:119
// [16] QVariant toVariant()
extern "C"
void* C_ZNK10QJsonValue9toVariantEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toVariant();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:121
// [4] QJsonValue::Type type()
extern "C"
QJsonValue::Type C_ZNK10QJsonValue4typeEv(void *this_) {
  return (QJsonValue::Type)((QJsonValue*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:122
// [1] bool isNull()
extern "C"
bool C_ZNK10QJsonValue6isNullEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:123
// [1] bool isBool()
extern "C"
bool C_ZNK10QJsonValue6isBoolEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isBool();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:124
// [1] bool isDouble()
extern "C"
bool C_ZNK10QJsonValue8isDoubleEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isDouble();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:125
// [1] bool isString()
extern "C"
bool C_ZNK10QJsonValue8isStringEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isString();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:126
// [1] bool isArray()
extern "C"
bool C_ZNK10QJsonValue7isArrayEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isArray();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:127
// [1] bool isObject()
extern "C"
bool C_ZNK10QJsonValue8isObjectEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isObject();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:128
// [1] bool isUndefined()
extern "C"
bool C_ZNK10QJsonValue11isUndefinedEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isUndefined();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:130
// [1] bool toBool(_Bool)
extern "C"
bool C_ZNK10QJsonValue6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QJsonValue*)this_)->toBool(defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:131
// [4] int toInt(int)
extern "C"
int C_ZNK10QJsonValue5toIntEi(void *this_, int defaultValue) {
  return (int)((QJsonValue*)this_)->toInt(defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:132
// [8] double toDouble(double)
extern "C"
double C_ZNK10QJsonValue8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QJsonValue*)this_)->toDouble(defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:133
// [8] QString toString()
extern "C"
void* C_ZNK10QJsonValue8toStringEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:134
// [8] QString toString(const class QString &)
extern "C"
void* C_ZNK10QJsonValue8toStringERK7QString(void *this_, const QString & defaultValue) {
  auto rv = ((QJsonValue*)this_)->toString(defaultValue);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:135
// [16] QJsonArray toArray()
extern "C"
void* C_ZNK10QJsonValue7toArrayEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toArray();
return new QJsonArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:136
// [16] QJsonArray toArray(const class QJsonArray &)
extern "C"
void* C_ZNK10QJsonValue7toArrayERK10QJsonArray(void *this_, const QJsonArray & defaultValue) {
  auto rv = ((QJsonValue*)this_)->toArray(defaultValue);
return new QJsonArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:137
// [16] QJsonObject toObject()
extern "C"
void* C_ZNK10QJsonValue8toObjectEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toObject();
return new QJsonObject(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:138
// [16] QJsonObject toObject(const class QJsonObject &)
extern "C"
void* C_ZNK10QJsonValue8toObjectERK11QJsonObject(void *this_, const QJsonObject & defaultValue) {
  auto rv = ((QJsonValue*)this_)->toObject(defaultValue);
return new QJsonObject(rv);
}
//  main block end
