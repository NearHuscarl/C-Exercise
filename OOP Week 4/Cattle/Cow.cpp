// ------------------------------------------------------------
//    File Name: Cow.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 8:03:19 AM
// ------------------------------------------------------------

#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Cow.h"

using namespace std;

Cow::Cow():
   Cattle(1, 10, 0, 20, "Moooo")
{
}

Cow::~Cow()
{
}

int Cow::GiveBirths(void)
{
   return mMinBirth + (rand() % (int)(mMaxBirth - mMinBirth + 1));
}

int Cow::ProduceMilk(void)
{
   return mMinMilk + (rand() % (int)(mMaxMilk - mMinMilk + 1));
}

void Cow::MakeNoise(void)
{
   cout << mNoice << endl;
}
