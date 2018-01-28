//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#include <qaccessiblebridge.h>
#include <QtGui>

// QAccessibleBridge is pure virtual: true
//  header block end

//  main block begin

class MyQAccessibleBridge : public QAccessibleBridge {
public:
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:58
// [-2] void ~QAccessibleBridge()
extern "C"
void C_ZN17QAccessibleBridgeD1Ev(void *this_) {
  delete (QAccessibleBridge*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:59
// [-2] void setRootObject(class QAccessibleInterface *)
extern "C"
void C_ZN17QAccessibleBridge13setRootObjectEP20QAccessibleInterface(void *this_, QAccessibleInterface * arg0) {
  ((QAccessibleBridge*)this_)->setRootObject(arg0);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:60
// [-2] void notifyAccessibilityUpdate(class QAccessibleEvent *)
extern "C"
void C_ZN17QAccessibleBridge25notifyAccessibilityUpdateEP16QAccessibleEvent(void *this_, QAccessibleEvent * event) {
  ((QAccessibleBridge*)this_)->notifyAccessibilityUpdate(event);
}
//  main block end
