#include <iostream>
#include "Weapon.h"
#include "Artillery120.h"

using namespace std;

Artillery120::Artillery120(): Weapon(120, "Artillery", "Tank")
{
}

Artillery120::~Artillery120()
{
}

float Artillery120::GetCaliber(void)
{
   return mCaliber;
}

string Artillery120::GetCategory(void)
{
   return mCategory;
}

string Artillery120::GetTarget(void)
{
   return mTarget;
}

void Artillery120::Fire(void)
{
   cout << "120mm Artillery has fired" << endl;
}
