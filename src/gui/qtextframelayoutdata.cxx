//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

// QTextFrameLayoutData is pure virtual: false
//  header block end

//  main block begin

class MyQTextFrameLayoutData : public QTextFrameLayoutData {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:114
// [-2] void ~QTextFrameLayoutData()
extern "C"
void C_ZN20QTextFrameLayoutDataD1Ev(void *this_) {
  delete (QTextFrameLayoutData*)(this_);
}
//  main block end
