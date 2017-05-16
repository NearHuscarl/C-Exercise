// ------------------------------------------------------------
//    File Name: Goat.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-09 3:20:08 PM
// ------------------------------------------------------------

#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Goat.h"

using namespace std;

Goat::Goat():
   Cattle(1, 10, 0, 10, "Maaa Maaa")
{
}

Goat::~Goat()
{
}

int Goat::GiveBirths(void)
{
   return mMinBirth + (rand() % (int)(mMaxBirth - mMinBirth + 1));
}

int Goat::ProduceMilk(void)
{
   return mMinMilk + (rand() % (int)(mMaxMilk - mMinMilk + 1));
}

void Goat::MakeNoise(void)
{
   cout << mNoice << endl;
}
