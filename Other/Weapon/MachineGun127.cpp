#include <iostream>
#include "MachineGun127.h"

using namespace std;

MachineGun127::MachineGun127(): Weapon(12.7, "Machine Gun", "IFV")
{
   //IFV - Infantry Fighting Vehicle
}

MachineGun127::~MachineGun127()
{
}

float MachineGun127::GetCaliber(void)
{
   return mCaliber;
}

string MachineGun127::GetCategory(void)
{
   return mCategory;
}

string MachineGun127::GetTarget(void)
{
   return mTarget;
}

void MachineGun127::Fire(void)
{
   cout << "Machine Gun 127 has fired" << endl;
}
