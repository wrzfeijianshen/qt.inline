//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

// QIntValidator is pure virtual: false
//  header block end

//  main block begin

class MyQIntValidator : public QIntValidator {
public:
MyQIntValidator(QObject * parent) : QIntValidator(parent) {}
MyQIntValidator(int bottom, int top, QObject * parent) : QIntValidator(bottom, top, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QIntValidator10metaObjectEv(void *this_) {
  return (void*)((QIntValidator*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:96
// [-2] void QIntValidator(class QObject *)
extern "C"
void* C_ZN13QIntValidatorC1EP7QObject(QObject * parent) {
  (MyQIntValidator*)(0);
  return  new MyQIntValidator(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:97
// [-2] void QIntValidator(int, int, class QObject *)
extern "C"
void* C_ZN13QIntValidatorC1EiiP7QObject(int bottom, int top, QObject * parent) {
  (MyQIntValidator*)(0);
  return  new MyQIntValidator(bottom, top, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:98
// [-2] void ~QIntValidator()
extern "C"
void C_ZN13QIntValidatorD1Ev(void *this_) {
  delete (QIntValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:100
// [4] QValidator::State validate(class QString &, int &)
extern "C"
QValidator::State C_ZNK13QIntValidator8validateER7QStringRi(void *this_, QString & arg0, int & arg1) {
  return (QValidator::State)((QIntValidator*)this_)->validate(arg0, arg1);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:101
// [-2] void fixup(class QString &)
extern "C"
void C_ZNK13QIntValidator5fixupER7QString(void *this_, QString & input) {
  ((QIntValidator*)this_)->fixup(input);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:103
// [-2] void setBottom(int)
extern "C"
void C_ZN13QIntValidator9setBottomEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setBottom(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:104
// [-2] void setTop(int)
extern "C"
void C_ZN13QIntValidator6setTopEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setTop(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:105
// [-2] void setRange(int, int)
extern "C"
void C_ZN13QIntValidator8setRangeEii(void *this_, int bottom, int top) {
  ((QIntValidator*)this_)->setRange(bottom, top);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:107
// [4] int bottom()
extern "C"
int C_ZNK13QIntValidator6bottomEv(void *this_) {
  return (int)((QIntValidator*)this_)->bottom();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:108
// [4] int top()
extern "C"
int C_ZNK13QIntValidator3topEv(void *this_) {
  return (int)((QIntValidator*)this_)->top();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:110
// [-2] void bottomChanged(int)
extern "C"
void C_ZN13QIntValidator13bottomChangedEi(void *this_, int bottom) {
  ((QIntValidator*)this_)->bottomChanged(bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:111
// [-2] void topChanged(int)
extern "C"
void C_ZN13QIntValidator10topChangedEi(void *this_, int top) {
  ((QIntValidator*)this_)->topChanged(top);
}
//  main block end
