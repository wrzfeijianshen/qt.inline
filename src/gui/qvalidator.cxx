// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qvalidator.h
// dst-file: /src/gui/qvalidator.cxx
//

// header block begin =>
#include <qvalidator.h>

extern "C" {

int QRegularExpressionValidator_Class_Size()
{
  return sizeof(QRegularExpressionValidator);
}

// ~QRegularExpressionValidator()
void dedtor_ZN27QRegularExpressionValidatorD0Ev(QRegularExpressionValidator* that)
{
  QRegularExpressionValidator* rthis = (QRegularExpressionValidator*)that;
  delete rthis;
}

// QRegularExpressionValidator(const class QRegularExpression &, class QObject *)
QRegularExpressionValidator* dector_ZN27QRegularExpressionValidatorC1ERK18QRegularExpressionP7QObject(const QRegularExpression & re, QObject * parent)
{
  // static_assert(sizeof(QRegularExpressionValidator) == 32, "tyszerr");
  QRegularExpressionValidator* rthis = new QRegularExpressionValidator(re, parent);
  return rthis;
}

// QRegularExpressionValidator(class QObject *)
QRegularExpressionValidator* dector_ZN27QRegularExpressionValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QRegularExpressionValidator) == 32, "tyszerr");
  QRegularExpressionValidator* rthis = new QRegularExpressionValidator(parent);
  return rthis;
}

int QDoubleValidator_Class_Size()
{
  return sizeof(QDoubleValidator);
}

// ~QDoubleValidator()
void dedtor_ZN16QDoubleValidatorD0Ev(QDoubleValidator* that)
{
  QDoubleValidator* rthis = (QDoubleValidator*)that;
  delete rthis;
}

// QDoubleValidator(class QObject *)
QDoubleValidator* dector_ZN16QDoubleValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QDoubleValidator) == 32, "tyszerr");
  QDoubleValidator* rthis = new QDoubleValidator(parent);
  return rthis;
}

// QDoubleValidator(double, double, int, class QObject *)
QDoubleValidator* dector_ZN16QDoubleValidatorC1EddiP7QObject(double bottom, double top, int decimals, QObject * parent)
{
  // static_assert(sizeof(QDoubleValidator) == 32, "tyszerr");
  QDoubleValidator* rthis = new QDoubleValidator(bottom, top, decimals, parent);
  return rthis;
}

int QIntValidator_Class_Size()
{
  return sizeof(QIntValidator);
}

// QIntValidator(class QObject *)
QIntValidator* dector_ZN13QIntValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QIntValidator) == 32, "tyszerr");
  QIntValidator* rthis = new QIntValidator(parent);
  return rthis;
}

// ~QIntValidator()
void dedtor_ZN13QIntValidatorD0Ev(QIntValidator* that)
{
  QIntValidator* rthis = (QIntValidator*)that;
  delete rthis;
}

// QIntValidator(int, int, class QObject *)
QIntValidator* dector_ZN13QIntValidatorC1EiiP7QObject(int bottom, int top, QObject * parent)
{
  // static_assert(sizeof(QIntValidator) == 32, "tyszerr");
  QIntValidator* rthis = new QIntValidator(bottom, top, parent);
  return rthis;
}

int QValidator_Class_Size()
{
  return sizeof(QValidator);
}

int QRegExpValidator_Class_Size()
{
  return sizeof(QRegExpValidator);
}

// ~QRegExpValidator()
void dedtor_ZN16QRegExpValidatorD0Ev(QRegExpValidator* that)
{
  QRegExpValidator* rthis = (QRegExpValidator*)that;
  delete rthis;
}

// QRegExpValidator(const class QRegExp &, class QObject *)
QRegExpValidator* dector_ZN16QRegExpValidatorC1ERK7QRegExpP7QObject(const QRegExp & rx, QObject * parent)
{
  // static_assert(sizeof(QRegExpValidator) == 32, "tyszerr");
  QRegExpValidator* rthis = new QRegExpValidator(rx, parent);
  return rthis;
}

// QRegExpValidator(class QObject *)
QRegExpValidator* dector_ZN16QRegExpValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QRegExpValidator) == 32, "tyszerr");
  QRegExpValidator* rthis = new QRegExpValidator(parent);
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
// QRegularExpressionValidator_SlotProxy here
class QRegularExpressionValidator_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QRegularExpressionValidator_SlotProxy():QObject(){}

public slots:
  // regularExpressionChanged(const class QRegularExpression &)
  void slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0);
public:
  void (*slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression)(const QRegularExpression & arg0) = NULL;
};

extern "C" {
  QRegularExpressionValidator_SlotProxy* QRegularExpressionValidator_SlotProxy_new()
  {
    return new QRegularExpressionValidator_SlotProxy();
  }
};

void QRegularExpressionValidator_SlotProxy::slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0) {
  if (this->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression != NULL) {
    // do smth...
    this->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(arg0);
  }
}
extern "C"
void* QRegularExpressionValidator_SlotProxy_connect__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(QObject* sender, void* fptr){
  auto that = new QRegularExpressionValidator_SlotProxy();
  that->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression = (decltype(that->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression))fptr;
  QObject::connect((QRegularExpressionValidator*)sender, SIGNAL(regularExpressionChanged(const class QRegularExpression &)), that, SLOT(slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0)));
  return that;
}
extern "C"
void QRegularExpressionValidator_SlotProxy_disconnect__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(QRegularExpressionValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDoubleValidator_SlotProxy here
class QDoubleValidator_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDoubleValidator_SlotProxy():QObject(){}

public slots:
  // bottomChanged(double)
  void slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0);
public:
  void (*slot_func__ZN16QDoubleValidator13bottomChangedEd)(double arg0) = NULL;
public slots:
  // topChanged(double)
  void slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0);
public:
  void (*slot_func__ZN16QDoubleValidator10topChangedEd)(double arg0) = NULL;
public slots:
  // decimalsChanged(int)
  void slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0);
public:
  void (*slot_func__ZN16QDoubleValidator15decimalsChangedEi)(int arg0) = NULL;
public slots:
  // notationChanged(class QDoubleValidator::Notation)
  void slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0);
public:
  void (*slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE)(QDoubleValidator::Notation arg0) = NULL;
};

extern "C" {
  QDoubleValidator_SlotProxy* QDoubleValidator_SlotProxy_new()
  {
    return new QDoubleValidator_SlotProxy();
  }
};

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0) {
  if (this->slot_func__ZN16QDoubleValidator13bottomChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator13bottomChangedEd(arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator13bottomChangedEd(QObject* sender, void* fptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->slot_func__ZN16QDoubleValidator13bottomChangedEd = (decltype(that->slot_func__ZN16QDoubleValidator13bottomChangedEd))fptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(bottomChanged(double)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator13bottomChangedEd(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0) {
  if (this->slot_func__ZN16QDoubleValidator10topChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator10topChangedEd(arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator10topChangedEd(QObject* sender, void* fptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->slot_func__ZN16QDoubleValidator10topChangedEd = (decltype(that->slot_func__ZN16QDoubleValidator10topChangedEd))fptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(topChanged(double)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator10topChangedEd(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0) {
  if (this->slot_func__ZN16QDoubleValidator15decimalsChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator15decimalsChangedEi(arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator15decimalsChangedEi(QObject* sender, void* fptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->slot_func__ZN16QDoubleValidator15decimalsChangedEi = (decltype(that->slot_func__ZN16QDoubleValidator15decimalsChangedEi))fptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(decimalsChanged(int)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator15decimalsChangedEi(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0) {
  if (this->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator15notationChangedENS_8NotationE(QObject* sender, void* fptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE = (decltype(that->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE))fptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(notationChanged(class QDoubleValidator::Notation)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QIntValidator_SlotProxy here
class QIntValidator_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QIntValidator_SlotProxy():QObject(){}

public slots:
  // bottomChanged(int)
  void slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0);
public:
  void (*slot_func__ZN13QIntValidator13bottomChangedEi)(int arg0) = NULL;
public slots:
  // topChanged(int)
  void slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0);
public:
  void (*slot_func__ZN13QIntValidator10topChangedEi)(int arg0) = NULL;
};

extern "C" {
  QIntValidator_SlotProxy* QIntValidator_SlotProxy_new()
  {
    return new QIntValidator_SlotProxy();
  }
};

void QIntValidator_SlotProxy::slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0) {
  if (this->slot_func__ZN13QIntValidator13bottomChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QIntValidator13bottomChangedEi(arg0);
  }
}
extern "C"
void* QIntValidator_SlotProxy_connect__ZN13QIntValidator13bottomChangedEi(QObject* sender, void* fptr){
  auto that = new QIntValidator_SlotProxy();
  that->slot_func__ZN13QIntValidator13bottomChangedEi = (decltype(that->slot_func__ZN13QIntValidator13bottomChangedEi))fptr;
  QObject::connect((QIntValidator*)sender, SIGNAL(bottomChanged(int)), that, SLOT(slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0)));
  return that;
}
extern "C"
void QIntValidator_SlotProxy_disconnect__ZN13QIntValidator13bottomChangedEi(QIntValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIntValidator_SlotProxy::slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0) {
  if (this->slot_func__ZN13QIntValidator10topChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QIntValidator10topChangedEi(arg0);
  }
}
extern "C"
void* QIntValidator_SlotProxy_connect__ZN13QIntValidator10topChangedEi(QObject* sender, void* fptr){
  auto that = new QIntValidator_SlotProxy();
  that->slot_func__ZN13QIntValidator10topChangedEi = (decltype(that->slot_func__ZN13QIntValidator10topChangedEi))fptr;
  QObject::connect((QIntValidator*)sender, SIGNAL(topChanged(int)), that, SLOT(slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0)));
  return that;
}
extern "C"
void QIntValidator_SlotProxy_disconnect__ZN13QIntValidator10topChangedEi(QIntValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QValidator_SlotProxy here
class QValidator_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QValidator_SlotProxy():QObject(){}

public slots:
  // changed()
  void slot_proxy_func__ZN10QValidator7changedEv();
public:
  void (*slot_func__ZN10QValidator7changedEv)() = NULL;
};

extern "C" {
  QValidator_SlotProxy* QValidator_SlotProxy_new()
  {
    return new QValidator_SlotProxy();
  }
};

void QValidator_SlotProxy::slot_proxy_func__ZN10QValidator7changedEv() {
  if (this->slot_func__ZN10QValidator7changedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QValidator7changedEv();
  }
}
extern "C"
void* QValidator_SlotProxy_connect__ZN10QValidator7changedEv(QObject* sender, void* fptr){
  auto that = new QValidator_SlotProxy();
  that->slot_func__ZN10QValidator7changedEv = (decltype(that->slot_func__ZN10QValidator7changedEv))fptr;
  QObject::connect((QValidator*)sender, SIGNAL(changed()), that, SLOT(slot_proxy_func__ZN10QValidator7changedEv()));
  return that;
}
extern "C"
void QValidator_SlotProxy_disconnect__ZN10QValidator7changedEv(QValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QRegExpValidator_SlotProxy here
class QRegExpValidator_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QRegExpValidator_SlotProxy():QObject(){}

public slots:
  // regExpChanged(const class QRegExp &)
  void slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0);
public:
  void (*slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp)(const QRegExp & arg0) = NULL;
};
#include "src/gui/qvalidator.moc"

extern "C" {
  QRegExpValidator_SlotProxy* QRegExpValidator_SlotProxy_new()
  {
    return new QRegExpValidator_SlotProxy();
  }
};

void QRegExpValidator_SlotProxy::slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0) {
  if (this->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp != NULL) {
    // do smth...
    this->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(arg0);
  }
}
extern "C"
void* QRegExpValidator_SlotProxy_connect__ZN16QRegExpValidator13regExpChangedERK7QRegExp(QObject* sender, void* fptr){
  auto that = new QRegExpValidator_SlotProxy();
  that->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp = (decltype(that->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp))fptr;
  QObject::connect((QRegExpValidator*)sender, SIGNAL(regExpChanged(const class QRegExp &)), that, SLOT(slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0)));
  return that;
}
extern "C"
void QRegExpValidator_SlotProxy_disconnect__ZN16QRegExpValidator13regExpChangedERK7QRegExp(QRegExpValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

