// ------------------------------------------------------------
//    File Name: Cow.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 8:03:44 AM
// ------------------------------------------------------------

#ifndef COW_H
#define COW_H

#include "Cattle.h"

class Cow: public Cattle
{
   public:
      Cow();
      ~Cow();

      int GiveBirths();
      int ProduceMilk();
      void MakeNoise();
};

#endif //COW_H
