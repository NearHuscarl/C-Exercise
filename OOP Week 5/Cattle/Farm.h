// ------------------------------------------------------------
//    File Name: Farm.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 9:14:25 AM
// ------------------------------------------------------------

#ifndef FARM_H
#define FARM_H

#include "Cattle.h"

class Farm
{
   public:
      Farm(int c = 0, int g = 0, int s = 0);
      ~Farm();

      void Input();
      void PrintNoise();
      void PrintStats();
   private:
      int mNumberOfCow;
      int mNumberOfGoat;
      int mNumberOfSheep;
      Cow   *mpCowList;
      Goat  *mpGoatList;
      Sheep *mpSheepList;

      int mNumOfOffSpring = 0;
      int mAmountOfMilk = 0;

      void InitTotalMilk();
      void InitTotalOffSpring();
};

#include "Cattle.h"

#endif //FARM_H
