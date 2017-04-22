#ifndef MACHINEGUN127
#define MACHINEGUN127

#include "Weapon.h"

class MachineGun127: public Weapon
{
   public:
      MachineGun127();
      ~MachineGun127();
      
      float GetCaliber();
      std::string GetCategory();
      std::string GetTarget();
      void Fire();
};

#endif //MACHINEGUN127 
