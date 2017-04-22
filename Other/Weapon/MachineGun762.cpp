#include <iostream>
#include "Weapon.h"
#include "MachineGun762.h"

using namespace std;

MachineGun762::MachineGun762(): Weapon(7.62, "Machine Gun", "Infantry")
{
}

MachineGun762::~MachineGun762()
{
}

float MachineGun762::GetCaliber(void)
{
   return mCaliber;
}

string MachineGun762::GetCategory(void)
{
   return mCategory;
}

string MachineGun762::GetTarget(void)
{
   return mTarget;
}

void MachineGun762::Fire(void)
{
   cout << "Machine Gun 762 has fired" << endl;
}
