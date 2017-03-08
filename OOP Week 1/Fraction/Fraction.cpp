#include <iostream>
#include <cmath>
#include <algorithm>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(int n, int d):
   mNumerator(n),
   mDenominator(d)
{
}

void Fraction::Input(void)
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

void Fraction::Output(void)
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

int Fraction::LCM(int x, int y)
{
   x = abs(x);
   y = abs(y);
   int maxXY = max(x, y);
   int lcm = maxXY;
   while (lcm+= maxXY)
      if (lcm % x == 0 && lcm % y == 0)
         return lcm;
}

int Fraction::GCD(int a, int b)
{
   a = abs(a);
   b = abs(b);
   for (int i = min(a, b);; i--)
      if (a % i == 0 && b % i == 0)
         return i;
}

void Fraction::Simplify(void)
{
   int lGCD = GCD(mNumerator, mDenominator);
   mNumerator/=lGCD;
   mDenominator/=lGCD;
}

void Fraction::Reduce(Fraction x)
{
   int lLCM = LCM(mDenominator, x.mDenominator);
   mNumerator*= (lLCM / mDenominator);
   mDenominator = lLCM;
}

bool Fraction::IsGreater(Fraction x)
{
   (*this).Reduce(x);
   x.Reduce(*this);
   if(mNumerator > x.mNumerator)
   {
      return true;
   }
   return false;
}

Fraction Fraction::Inverse(void)
{
   Fraction temp;
   temp.mNumerator = mDenominator;
   temp.mDenominator = mNumerator;
   return temp;
}

Fraction Fraction::Add(Fraction x)
{
   Fraction sum;
   int lLCM = LCM(mDenominator, x.mDenominator);

   sum.mNumerator = (lLCM / mDenominator)*mNumerator + (lLCM / x.mDenominator)*x.mNumerator;
   sum.mDenominator = lLCM;
   sum.Simplify();
   return sum;
}

Fraction Fraction::Subtract(Fraction x)
{
   Fraction diff;
   int lLCM = LCM(mDenominator, x.mDenominator);

   diff.mNumerator = (lLCM / mDenominator)*mNumerator - (lLCM / x.mDenominator)*x.mNumerator;
   diff.mDenominator = lLCM;
   diff.Simplify();
   return diff;
}

Fraction Fraction::Multiply(Fraction x)
{
   Fraction product;

   product.mNumerator = mNumerator * x.mNumerator;
   product.mDenominator = mDenominator * x.mDenominator;
   product.Simplify();
   return product;
}

Fraction Fraction::Divide(Fraction x)
{
   Fraction quotient;

   if(x.mNumerator == 0)
   {
      throw, "Cant divide to 0";
   }
   quotient.mNumerator = mNumerator * x.mDenominator;
   quotient.mDenominator = mDenominator * x.mNumerator;
   quotient.Simplify();
   return quotient;
}
