// ------------------------------------------------------------
//    File Name: Goat.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-09 3:18:45 PM
// ------------------------------------------------------------

#ifndef GOAT_H
#define GOAT_H

#include "Cattle.h"

class Goat: public Cattle
{
   public:
      Goat();
      ~Goat();

      int GiveBirths();
      int ProduceMilk();
      void MakeNoise();
};

#endif //GOAT_H
