#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon 
{
   protected:
      float mCaliber;
      std::string mCategory;
      std::string mTarget;
   public:
      Weapon(
            float caliber = 0.0,
            std::string category = "none",
            std::string target = "none");
      ~Weapon();

      virtual float GetCaliber() = 0;
      virtual std::string GetCategory() = 0;
      virtual std::string GetTarget() = 0;
      virtual void Fire() = 0;
};

#include "MachineGun127.h"
#include "MachineGun762.h"
#include "Artillery120.h"

#endif //WEAPON_H 
