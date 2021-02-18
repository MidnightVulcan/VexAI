#include "vex.h"


/// unused
using namespace vex;

class MotorGroup {
  motor Motors[4];
  public:
    void AddMotor(int num, motor Mot);
    

};

void MotorGroup::AddMotor(int num, motor Mot){
  if (Motors[3].installed() == true){
    return;
  }
  Motors[num] = Mot;
}

