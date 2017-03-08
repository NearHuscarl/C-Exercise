#ifndef FRACTIONLIST_H
#define FRACTIONLIST_H

#include "fraction.h"

class FractionList 
{
   private:
      int mMax;
      fraction * mpFraction;
   public:
      FractionList();
      ~FractionList();
      void Input();
      fraction Sum();
      fraction MaxFraction();
};

#endif //FRACTIONLIST_H 
