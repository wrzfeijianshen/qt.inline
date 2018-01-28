//  header block begin
// /usr/include/qt/QtCore/qtextboundaryfinder.h
#include <qtextboundaryfinder.h>
#include <QtCore>

// QTextBoundaryFinder is pure virtual: false
//  header block end

//  main block begin

class MyQTextBoundaryFinder : public QTextBoundaryFinder {
public:
MyQTextBoundaryFinder() : QTextBoundaryFinder() {}
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QString & string) : QTextBoundaryFinder(type, string) {}
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QChar * chars, int length, unsigned char * buffer, int bufferSize) : QTextBoundaryFinder(type, chars, length, buffer, bufferSize) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:54
// [-2] void QTextBoundaryFinder()
extern "C"
void* C_ZN19QTextBoundaryFinderC1Ev() {
  (MyQTextBoundaryFinder*)(0);
  return  new MyQTextBoundaryFinder();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:57
// [-2] void ~QTextBoundaryFinder()
extern "C"
void C_ZN19QTextBoundaryFinderD1Ev(void *this_) {
  delete (QTextBoundaryFinder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:76
// [-2] void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QString &)
extern "C"
void* C_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeERK7QString(QTextBoundaryFinder::BoundaryType type, const QString & string) {
  (MyQTextBoundaryFinder*)(0);
  return  new MyQTextBoundaryFinder(type, string);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:77
// [-2] void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QChar *, int, unsigned char *, int)
extern "C"
void* C_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeEPK5QChariPhi(QTextBoundaryFinder::BoundaryType type, const QChar * chars, int length, unsigned char * buffer, int bufferSize) {
  (MyQTextBoundaryFinder*)(0);
  return  new MyQTextBoundaryFinder(type, chars, length, buffer, bufferSize);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:79
// [1] bool isValid()
extern "C"
bool C_ZNK19QTextBoundaryFinder7isValidEv(void *this_) {
  return (bool)((QTextBoundaryFinder*)this_)->isValid();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:81
// [4] QTextBoundaryFinder::BoundaryType type()
extern "C"
QTextBoundaryFinder::BoundaryType C_ZNK19QTextBoundaryFinder4typeEv(void *this_) {
  return (QTextBoundaryFinder::BoundaryType)((QTextBoundaryFinder*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:82
// [8] QString string()
extern "C"
void* C_ZNK19QTextBoundaryFinder6stringEv(void *this_) {
  auto rv = ((QTextBoundaryFinder*)this_)->string();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:84
// [-2] void toStart()
extern "C"
void C_ZN19QTextBoundaryFinder7toStartEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toStart();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:85
// [-2] void toEnd()
extern "C"
void C_ZN19QTextBoundaryFinder5toEndEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:86
// [4] int position()
extern "C"
int C_ZNK19QTextBoundaryFinder8positionEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->position();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:87
// [-2] void setPosition(int)
extern "C"
void C_ZN19QTextBoundaryFinder11setPositionEi(void *this_, int position) {
  ((QTextBoundaryFinder*)this_)->setPosition(position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:89
// [4] int toNextBoundary()
extern "C"
int C_ZN19QTextBoundaryFinder14toNextBoundaryEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->toNextBoundary();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:90
// [4] int toPreviousBoundary()
extern "C"
int C_ZN19QTextBoundaryFinder18toPreviousBoundaryEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->toPreviousBoundary();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:92
// [1] bool isAtBoundary()
extern "C"
bool C_ZNK19QTextBoundaryFinder12isAtBoundaryEv(void *this_) {
  return (bool)((QTextBoundaryFinder*)this_)->isAtBoundary();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:93
// [4] QTextBoundaryFinder::BoundaryReasons boundaryReasons()
extern "C"
void C_ZNK19QTextBoundaryFinder15boundaryReasonsEv(void *this_) {
  auto rv = ((QTextBoundaryFinder*)this_)->boundaryReasons();
/*return rv;*/
}
//  main block end
