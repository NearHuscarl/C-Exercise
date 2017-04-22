#ifndef MACHINEGUN762_H
#define MACHINEGUN762_H

#include "Weapon.h"

class MachineGun762: public Weapon
{
   public:
      MachineGun762();
      ~MachineGun762();
      
      float GetCaliber();
      std::string GetCategory();
      std::string GetTarget();
      void Fire();
};

#endif //MACHINEGUN762_H 
