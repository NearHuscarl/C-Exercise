#include <string>
#include "Weapon.h"

using namespace std;

Weapon::Weapon(float caliber, string category, string target):
   mCaliber(caliber),
   mCategory(category),
   mTarget(target)
{
}

Weapon::~Weapon()
{
}
