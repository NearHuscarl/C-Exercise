// ------------------------------------------------------------
//    File Name: Cattle.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-09 3:14:38 PM
// ------------------------------------------------------------

#ifndef CATTLE_H
#define CATTLE_H

#include <string>

using std::string;

class Cattle
{
   protected:
      int mMinBirth;
      int mMaxBirth;
      int mMinMilk;
      int mMaxMilk;
      string mNoice;
   public:
      Cattle(
            int minB = 0,
            int maxB = 0,
            int minM = 0,
            int maxM = 0,
            string n = "N/A");
      ~Cattle();

      virtual int GiveBirths() = 0;
      virtual int ProduceMilk() = 0;
      virtual void MakeNoise() = 0;
};

#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"

#endif //CATTLE_H
