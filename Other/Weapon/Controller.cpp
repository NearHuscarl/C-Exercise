#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Controller.h"
#include "Weapon.h"

using namespace std;

Controller::Controller():
   mChoice(-1)
{
   RefreshTarget();
}

Controller::~Controller()
{
}

void Controller::RefreshTarget(void)
{
   srand(time(nullptr));

   //Target count can be anything from 0 to 5
   int type;
   mTargetCount = rand() % 5 + 0;

   targetList.resize(mTargetCount);
   for(int i = 0; i < mTargetCount; i++)
   {
      targetList[i].pos.x = rand() % 100 + 0;
      targetList[i].pos.y = rand() % 100 + 0;
      type                = rand() % 100 + 0;
      if(type < 40)
      {
         targetList[i].type = "Infantry";
      }
      else if(40 <= type && type <= 70)
      {
         targetList[i].type = "IFV";
      }
      else
      {
         targetList[i].type = "Tank";
      }
   }
}

void Controller::ShowTarget(void)
{
   int dice;

   srand(time(nullptr));
   dice = rand() % 100 + 1;
   //There is 20% chance that the enemy will start changing the maneuver
   if(dice < 40)
   {
      cout << "Enemy has changed maneuver" << endl;
      RefreshTarget();
   }

   if(targetList.empty())
   {
      cout << "There is currently no target" << endl;
      return;
   }

   for(int i = 0; i < targetList.size(); i++)
   {
      cout << "Target " << i+1 << ": " << targetList[i].type << ", Coordinate: (" << targetList[i].pos.x << ", " << targetList[i].pos.y << ")" << endl;
   }
}

void Controller::ShowTarget(int i)
{
   cout << "Target " << i+1 << ": " << targetList[i].type << ", Coordinate: (" << targetList[i].pos.x << ", " << targetList[i].pos.y << ")" << endl;
}

void Controller::ActivateButton()
{
   if(targetList.empty() || mChoice == -1)
   {
      cout << "There is currently no target" << endl;
      return;
   }

   MachineGun127 mg127;
   MachineGun762 mg762;
   Artillery120  ar120;

   ShowTarget(mChoice-1);

   if(targetList[mChoice-1].type == mg127.GetTarget())
   {
      mg127.Fire();
   }
   else if(targetList[mChoice-1].type == mg762.GetTarget())
   {
      mg762.Fire();
   }
   else if(targetList[mChoice-1].type == ar120.GetTarget())
   {
      ar120.Fire();
   }

   int dice;
   srand(time(nullptr));
   dice = rand() % 100 + 1;
   if(dice < 60)
   {
      targetList.erase(targetList.begin() + mChoice-1);
      cout << "Target " << mChoice << " has been eliminated" << endl;
      return;
   }
   cout << "Target " << mChoice << " has been missed" << endl;
}

void Controller::ChooseTarget(void)
{
   ShowTarget();
   if(targetList.empty())
   {
      return;
   }
   cout << "Choose target to fire: ";
   cin >> mChoice;
   while(mChoice > targetList.size() || mChoice < 1)
   {
      cout << "Invalid Input" << endl;
      cout << "Choose target: ";
      cin >> mChoice;
   }
   cout << "Target " << mChoice << " has been selected" << endl;
}
