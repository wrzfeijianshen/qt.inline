//  header block begin
// /usr/include/qt/QtCore/qrandom.h
#include <qrandom.h>
#include <QtCore>

// QRandomGenerator is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:172
// [-2] void QRandomGenerator(enum QRandomGenerator::System)
extern "C"
void* callback_ZN16QRandomGeneratorC1ENS_6SystemE = 0;
extern "C" void set_callback_ZN16QRandomGeneratorC1ENS_6SystemE(void*cbfn)
{ callback_ZN16QRandomGeneratorC1ENS_6SystemE = cbfn; }

class MyQRandomGenerator : public QRandomGenerator {
public:
MyQRandomGenerator(quint32 seedValue) : QRandomGenerator(seedValue) {}
MyQRandomGenerator(const quint32 * seedBuffer, qsizetype len) : QRandomGenerator(seedBuffer, len) {}
MyQRandomGenerator(const quint32 * begin, const quint32 * end) : QRandomGenerator(begin, end) {}
MyQRandomGenerator(QRandomGenerator::System arg0) : QRandomGenerator(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:55
// [-2] void QRandomGenerator(quint32)
extern "C"
void* C_ZN16QRandomGeneratorC1Ej(quint32 seedValue) {
  (MyQRandomGenerator*)(0);
  return  new MyQRandomGenerator(seedValue);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:61
// [-2] void QRandomGenerator(const quint32 *, qsizetype)
extern "C"
void* C_ZN16QRandomGeneratorC1EPKjx(const quint32 * seedBuffer, qsizetype len) {
  (MyQRandomGenerator*)(0);
  return  new MyQRandomGenerator(seedBuffer, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:65
// [-2] void QRandomGenerator(const quint32 *, const quint32 *)
extern "C"
void* C_ZN16QRandomGeneratorC1EPKjS1_(const quint32 * begin, const quint32 * end) {
  (MyQRandomGenerator*)(0);
  return  new MyQRandomGenerator(begin, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:77
// [4] quint32 generate()
extern "C"
quint32 C_ZN16QRandomGenerator8generateEv(void *this_) {
  return (quint32)((QRandomGenerator*)this_)->generate();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:84
// [8] quint64 generate64()
extern "C"
quint64 C_ZN16QRandomGenerator10generate64Ev(void *this_) {
  return (quint64)((QRandomGenerator*)this_)->generate64();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:91
// [8] double generateDouble()
extern "C"
double C_ZN16QRandomGenerator14generateDoubleEv(void *this_) {
  return (double)((QRandomGenerator*)this_)->generateDouble();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:105
// [8] double bounded(double)
extern "C"
double C_ZN16QRandomGenerator7boundedEd(void *this_, double highest) {
  return (double)((QRandomGenerator*)this_)->bounded(highest);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:110
// [4] quint32 bounded(quint32)
extern "C"
quint32 C_ZN16QRandomGenerator7boundedEj(void *this_, quint32 highest) {
  return (quint32)((QRandomGenerator*)this_)->bounded(highest);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:118
// [4] int bounded(int)
extern "C"
int C_ZN16QRandomGenerator7boundedEi(void *this_, int highest) {
  return (int)((QRandomGenerator*)this_)->bounded(highest);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:123
// [4] quint32 bounded(quint32, quint32)
extern "C"
quint32 C_ZN16QRandomGenerator7boundedEjj(void *this_, quint32 lowest, quint32 highest) {
  return (quint32)((QRandomGenerator*)this_)->bounded(lowest, highest);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:128
// [4] int bounded(int, int)
extern "C"
int C_ZN16QRandomGenerator7boundedEii(void *this_, int lowest, int highest) {
  return (int)((QRandomGenerator*)this_)->bounded(lowest, highest);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:152
// [-2] void generate(quint32 *, quint32 *)
extern "C"
void C_ZN16QRandomGenerator8generateEPjS0_(void *this_, quint32 * begin, quint32 * end) {
  ((QRandomGenerator*)this_)->generate(begin, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:160
// [-2] void seed(quint32)
extern "C"
void C_ZN16QRandomGenerator4seedEj(void *this_, quint32 s) {
  ((QRandomGenerator*)this_)->seed(s);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:162
// [-2] void discard(unsigned long long)
extern "C"
void C_ZN16QRandomGenerator7discardEy(void *this_, unsigned long long z) {
  ((QRandomGenerator*)this_)->discard(z);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:163
// [4] QRandomGenerator::result_type min()
extern "C"
QRandomGenerator::result_type C_ZN16QRandomGenerator3minEv() {
  return (QRandomGenerator::result_type)QRandomGenerator::min();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:164
// [4] QRandomGenerator::result_type max()
extern "C"
QRandomGenerator::result_type C_ZN16QRandomGenerator3maxEv() {
  return (QRandomGenerator::result_type)QRandomGenerator::max();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:166
// [8] QRandomGenerator * system()
extern "C"
void* C_ZN16QRandomGenerator6systemEv() {
  return (void*)QRandomGenerator::system();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:167
// [8] QRandomGenerator * global()
extern "C"
void* C_ZN16QRandomGenerator6globalEv() {
  return (void*)QRandomGenerator::global();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:168
// [2512] QRandomGenerator securelySeeded()
extern "C"
void* C_ZN16QRandomGenerator14securelySeededEv() {
  auto rv = QRandomGenerator::securelySeeded();
return new QRandomGenerator(rv);
}
//  main block end
