#include <iostream>
#include "fraction.h"
#include "FractionList.h"

using namespace std;

FractionList::FractionList():
   mpFraction(nullptr)
{
}

FractionList::~FractionList()
{
   delete [] mpFraction;
}

void FractionList::Input(void)
{
   cout << "Enter number of fractions: ";
   cin >> mMax;
   mpFraction = new fraction[mMax];
   for(int i = 0; i < mMax; i++)
   {
      mpFraction[i].Input();
   }
}

fraction FractionList::Sum(void)
{
   fraction sum(0, 1), localSum;
   for(int i = 0; i <= mMax - 1; i+=2)
   {
      if(i == mMax - 1)
      {
         sum.Add(mpFraction[i]);
         return sum;
      }
      localSum = mpFraction[i].Add(mpFraction[i+1]);
      sum = sum.Add(localSum);
   }
   return sum;
}

fraction FractionList::MaxFraction(void)
{
   fraction max(0,1);
   for(int i = 0; i < mMax; i++)
   {
      if(mpFraction[i].IsGreater(max))
      {
         max.Assign(mpFraction[i]);
      }
   }
   return max;
}

