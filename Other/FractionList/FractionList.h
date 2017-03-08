#ifndef FRACTIONLIST_H
#define FRACTIONLIST_H

#include "Fraction.h"

class FractionList 
{
   private:
      int mMax;
      Fraction * mpFraction;
   public:
      FractionList();
      ~FractionList();
      void Input();
      Fraction Sum();
      Fraction MaxFraction();
};

#endif //FRACTIONLIST_H 
