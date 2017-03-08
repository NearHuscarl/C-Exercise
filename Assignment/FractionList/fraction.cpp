#include <iostream>
#include <cmath>
#include <algorithm>
#include "fraction.h"

using namespace std;

fraction::fraction(int n, int d):
   mNumerator(n),
   mDenominator(d)
{
}

void fraction::Input(void)
{
   cout << "Numerator Input: ";
   cin >> mNumerator;
   cout << "Denominator Input: ";
   cin >> mDenominator;
   if(mDenominator == 0)
   {
      while(mDenominator == 0)
      {
         cout << "Invalid Input. mDenominator cant equal to zero. Try again" << endl;
         cout << "Denominator Input: ";
         cin >>  mDenominator;
      }
   }
}

void fraction::Output(void)
{
   (*this).Simplify();
   if((mNumerator >= 0 && mDenominator > 0) || (mNumerator < 0 && mDenominator < 0))
   {
      cout << abs(mNumerator) << "/" << abs(mDenominator) << endl;
   }
   else if(mNumerator >= 0 && mDenominator < 0)
   {
      cout << -mNumerator << "/" << -mDenominator << endl;
   }
   else
   {
      cout << mNumerator << "/" << mDenominator << endl;
   }
}

void fraction::Assign(fraction x)
{
   mNumerator = x.mNumerator;
   mDenominator = x.mDenominator;
}

int fraction::LCM(int x, int y)
{
   x = abs(x);
   y = abs(y);
   int maxXY = max(x, y);
   int lcm = maxXY;
   while (lcm+= maxXY)
      if (lcm % x == 0 && lcm % y == 0)
         return lcm;
}

int fraction::GCD(int a, int b)
{
   a = abs(a);
   b = abs(b);
   if(a == 0 || b == 0)
   {
      return max(a, b);
   }
   for (int i = min(a, b);; i--)
      if (a % i == 0 && b % i == 0)
         return i;
}

void fraction::Simplify(void)
{
   int lGCD = GCD(mNumerator, mDenominator);
   mNumerator/=lGCD;
   mDenominator/=lGCD;
}

void fraction::Reduce(fraction x)
{
   int lLCM = LCM(mDenominator, x.mDenominator);
   mNumerator*= (lLCM / mDenominator);
   mDenominator = lLCM;
}

bool fraction::IsGreater(fraction x)
{
   (*this).Reduce(x);
   (*this).Simplify();
   x.Reduce(*this);
   x.Simplify();

   if(mNumerator > x.mNumerator)
   {
      return true;
   }
   return false;
}

fraction fraction::Inverse(void)
{
   fraction temp;
   temp.mNumerator = mDenominator;
   temp.mDenominator = mNumerator;
   return temp;
}

fraction fraction::Add(fraction x)
{
   fraction sum;
   int lLCM = LCM(mDenominator, x.mDenominator);

   sum.mNumerator = (lLCM / mDenominator)*mNumerator + (lLCM / x.mDenominator)*x.mNumerator;
   sum.mDenominator = lLCM;
   sum.Simplify();
   return sum;
}

fraction fraction::Subtract(fraction x)
{
   fraction diff;
   int lLCM = LCM(mDenominator, x.mDenominator);

   diff.mNumerator = (lLCM / mDenominator)*mNumerator - (lLCM / x.mDenominator)*x.mNumerator;
   diff.mDenominator = lLCM;
   diff.Simplify();
   return diff;
}

fraction fraction::Multiply(fraction x)
{
   fraction product;

   product.mNumerator = mNumerator * x.mNumerator;
   product.mDenominator = mDenominator * x.mDenominator;
   product.Simplify();
   return product;
}

fraction fraction::Divide(fraction x)
{
   fraction quotient;

   if(x.mNumerator == 0)
   {
      throw, "Cant divide to 0";
   }
   quotient.mNumerator = mNumerator * x.mDenominator;
   quotient.mDenominator = mDenominator * x.mNumerator;
   quotient.Simplify();
   return quotient;
}
