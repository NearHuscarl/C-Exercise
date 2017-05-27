// ------------------------------------------------------------
//    File Name: Sheep.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 9:10:53 AM
// ------------------------------------------------------------

#include "Sheep.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

using namespace std;

Sheep::Sheep():
   Cattle(1, 10, 0, 5, "Baaa Baaa")
{
}

Sheep::~Sheep()
{
}

int Sheep::GiveBirths(void)
{
   return mMinBirth + (rand() % (int)(mMaxBirth - mMinBirth + 1));
}

int Sheep::ProduceMilk(void)
{
   return mMinMilk + (rand() % (int)(mMaxMilk - mMinMilk + 1));
}

void Sheep::MakeNoise(void)
{
   cout << mNoice << endl;
}
