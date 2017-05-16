// ------------------------------------------------------------
//    File Name: Sheep.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 8:05:18 AM
// ------------------------------------------------------------

#ifndef SHEEP_H
#define SHEEP_H

#include "Cattle.h"

class Sheep: public Cattle
{
   public:
      Sheep();
      ~Sheep();

      int GiveBirths();
      int ProduceMilk();
      void MakeNoise();
};

#endif //SHEEP_H
