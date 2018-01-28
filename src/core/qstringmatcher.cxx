//  header block begin
// /usr/include/qt/QtCore/qstringmatcher.h
#include <qstringmatcher.h>
#include <QtCore>

// QStringMatcher is pure virtual: false
//  header block end

//  main block begin

class MyQStringMatcher : public QStringMatcher {
public:
MyQStringMatcher() : QStringMatcher() {}
MyQStringMatcher(const QString & pattern, Qt::CaseSensitivity cs) : QStringMatcher(pattern, cs) {}
MyQStringMatcher(const QChar * uc, int len, Qt::CaseSensitivity cs) : QStringMatcher(uc, len, cs) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:53
// [-2] void QStringMatcher()
extern "C"
void* C_ZN14QStringMatcherC1Ev() {
  (MyQStringMatcher*)(0);
  return  new MyQStringMatcher();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:54
// [-2] void QStringMatcher(const class QString &, Qt::CaseSensitivity)
extern "C"
void* C_ZN14QStringMatcherC1ERK7QStringN2Qt15CaseSensitivityE(const QString & pattern, Qt::CaseSensitivity cs) {
  (MyQStringMatcher*)(0);
  return  new MyQStringMatcher(pattern, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:56
// [-2] void QStringMatcher(const class QChar *, int, Qt::CaseSensitivity)
extern "C"
void* C_ZN14QStringMatcherC1EPK5QChariN2Qt15CaseSensitivityE(const QChar * uc, int len, Qt::CaseSensitivity cs) {
  (MyQStringMatcher*)(0);
  return  new MyQStringMatcher(uc, len, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:59
// [-2] void ~QStringMatcher()
extern "C"
void C_ZN14QStringMatcherD1Ev(void *this_) {
  delete (QStringMatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:63
// [-2] void setPattern(const class QString &)
extern "C"
void C_ZN14QStringMatcher10setPatternERK7QString(void *this_, const QString & pattern) {
  ((QStringMatcher*)this_)->setPattern(pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:64
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN14QStringMatcher18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QStringMatcher*)this_)->setCaseSensitivity(cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:66
// [4] int indexIn(const class QString &, int)
extern "C"
int C_ZNK14QStringMatcher7indexInERK7QStringi(void *this_, const QString & str, int from) {
  return (int)((QStringMatcher*)this_)->indexIn(str, from);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:67
// [4] int indexIn(const class QChar *, int, int)
extern "C"
int C_ZNK14QStringMatcher7indexInEPK5QCharii(void *this_, const QChar * str, int length, int from) {
  return (int)((QStringMatcher*)this_)->indexIn(str, length, from);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:68
// [8] QString pattern()
extern "C"
void* C_ZNK14QStringMatcher7patternEv(void *this_) {
  auto rv = ((QStringMatcher*)this_)->pattern();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:69
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C"
Qt::CaseSensitivity C_ZNK14QStringMatcher15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QStringMatcher*)this_)->caseSensitivity();
}
//  main block end
