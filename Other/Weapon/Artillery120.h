#ifndef ARTILLERY120
#define ARTILLERY120

#include "Weapon.h"

class Artillery120: public Weapon
{
   public:
      Artillery120();
      ~Artillery120();
      
      float GetCaliber();
      std::string GetCategory();
      std::string GetTarget();
      void Fire();
};

#endif //ARTILLERY120 
