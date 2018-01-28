//  header block begin
// /usr/include/qt/QtCore/qloggingcategory.h
#include <qloggingcategory.h>
#include <QtCore>

// QLoggingCategory is pure virtual: false
//  header block end

//  main block begin

class MyQLoggingCategory : public QLoggingCategory {
public:
MyQLoggingCategory(const char * category) : QLoggingCategory(category) {}
MyQLoggingCategory(const char * category, QtMsgType severityLevel) : QLoggingCategory(category, severityLevel) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:53
// [-2] void QLoggingCategory(const char *)
extern "C"
void* C_ZN16QLoggingCategoryC1EPKc(const char * category) {
  (MyQLoggingCategory*)(0);
  return  new MyQLoggingCategory(category);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:54
// [-2] void QLoggingCategory(const char *, enum QtMsgType)
extern "C"
void* C_ZN16QLoggingCategoryC1EPKc9QtMsgType(const char * category, QtMsgType severityLevel) {
  (MyQLoggingCategory*)(0);
  return  new MyQLoggingCategory(category, severityLevel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:55
// [-2] void ~QLoggingCategory()
extern "C"
void C_ZN16QLoggingCategoryD1Ev(void *this_) {
  delete (QLoggingCategory*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:57
// [1] bool isEnabled(enum QtMsgType)
extern "C"
bool C_ZNK16QLoggingCategory9isEnabledE9QtMsgType(void *this_, QtMsgType type) {
  return (bool)((QLoggingCategory*)this_)->isEnabled(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:58
// [-2] void setEnabled(enum QtMsgType, _Bool)
extern "C"
void C_ZN16QLoggingCategory10setEnabledE9QtMsgTypeb(void *this_, QtMsgType type, bool enable) {
  ((QLoggingCategory*)this_)->setEnabled(type, enable);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:61
// [1] bool isDebugEnabled()
extern "C"
bool C_ZNK16QLoggingCategory14isDebugEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isDebugEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:62
// [1] bool isInfoEnabled()
extern "C"
bool C_ZNK16QLoggingCategory13isInfoEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isInfoEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:63
// [1] bool isWarningEnabled()
extern "C"
bool C_ZNK16QLoggingCategory16isWarningEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isWarningEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:64
// [1] bool isCriticalEnabled()
extern "C"
bool C_ZNK16QLoggingCategory17isCriticalEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isCriticalEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:71
// [8] const char * categoryName()
extern "C"
void* C_ZNK16QLoggingCategory12categoryNameEv(void *this_) {
  return (void*)((QLoggingCategory*)this_)->categoryName();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:77
// [8] QLoggingCategory * defaultCategory()
extern "C"
void* C_ZN16QLoggingCategory15defaultCategoryEv() {
  return (void*)QLoggingCategory::defaultCategory();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:82
// [-2] void setFilterRules(const class QString &)
extern "C"
void C_ZN16QLoggingCategory14setFilterRulesERK7QString(const QString & rules) {
  QLoggingCategory::setFilterRules(rules);
}
//  main block end
