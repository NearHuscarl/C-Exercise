// ------------------------------------------------------------
//    File Name: Farm.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 9:15:38 AM
// ------------------------------------------------------------

#include <iostream>
#include "Farm.h"

using namespace std;

Farm::Farm(int c, int g, int s):
   mNumberOfCow(c),
   mNumberOfGoat(g),
   mNumberOfSheep(s)
{
}

Farm::~Farm()
{
   delete [] mpCowList;
   delete [] mpGoatList;
   delete [] mpSheepList;
}

void Farm::Input(void)
{
   cout << "Number of Cow: ";
   cin >> mNumberOfCow;
   mpCowList = new Cow[mNumberOfCow];

   cout << "Number of Goat: ";
   cin >> mNumberOfGoat;
   mpGoatList = new Goat[mNumberOfGoat];

   cout << "Number of Sheep: ";
   cin >> mNumberOfSheep;
   mpSheepList = new Sheep[mNumberOfSheep];

   InitTotalMilk();
   InitTotalOffSpring();
}


void Farm::PrintStats(void)
{
   cout << "Number of Cow: " << mNumberOfCow << endl;
   cout << "Number of Goat: " << mNumberOfGoat << endl;
   cout << "Number of Sheep: " << mNumberOfSheep << endl;
   cout << "Total Amount of Milk: " << mAmountOfMilk << " litres" << endl;
   cout << "Total Number of Offspring: " << mNumOfOffSpring << endl;
}

void Farm::PrintNoise(void)
{
   for(int i = 0; i < mNumberOfCow; i++)
   {
      mpCowList[i].MakeNoise();
   }

   for(int i = 0; i < mNumberOfGoat; i++)
   {
      mpGoatList[i].MakeNoise();
   }

   for(int i = 0; i < mNumberOfSheep; i++)
   {
      mpSheepList[i].MakeNoise();
   }
}

void Farm::InitTotalMilk(void)
{
   for(int i = 0; i < mNumberOfCow; i++)
   {
      mAmountOfMilk+= mpCowList[i].ProduceMilk();
   }

   for(int i = 0; i < mNumberOfGoat; i++)
   {
      mAmountOfMilk+= mpGoatList[i].ProduceMilk();
   }

   for(int i = 0; i < mNumberOfSheep; i++)
   {
      mAmountOfMilk+= mpSheepList[i].ProduceMilk();
   }
}

void Farm::InitTotalOffSpring(void)
{
   for(int i = 0; i < mNumberOfCow; i++)
   {
      mNumOfOffSpring+= mpCowList[i].ProduceMilk();
   }

   for(int i = 0; i < mNumberOfGoat; i++)
   {
      mNumOfOffSpring+= mpGoatList[i].ProduceMilk();
   }

   for(int i = 0; i < mNumberOfSheep; i++)
   {
      mNumOfOffSpring+= mpSheepList[i].ProduceMilk();
   }
}
