// ------------------------------------------------------------
//    File Name: Cattle.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 6:31:59 PM
// ------------------------------------------------------------

#include "Cattle.h"
#include "cstdlib"
#include <iostream>

using namespace std;

Cattle::Cattle(int minB, int maxB, int minM, int maxM, string n):
   mMinBirth(minB),
   mMaxBirth(maxB),
   mMinMilk(minM),
   mMaxMilk(maxM),
   mNoice(n)
{
}

Cattle::~Cattle()
{
}
