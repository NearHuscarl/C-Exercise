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

Fraction::~Fraction()
{
}

istream& operator>>(istream& x, Fraction &f)
{
   cout << "Numerator Input: ";
   cin >> f.mNumerator;
   cout << "Denominator Input: ";
   cin >> f.mDenominator;
   if(f.mDenominator == 0)
   {
      while(f.mDenominator == 0)
      {
         cout << "Invalid Input. mDenominator cant equal to zero. Try again" << endl;
         cout << "Denominator Input: ";
         cin >>  f.mDenominator;
      }
   }
   return x;
}

ostream& operator<<(ostream& x, Fraction f)
{
   f.Simplify();
   if((f.mNumerator >= 0 && f.mDenominator > 0) || (f.mNumerator < 0 && f.mDenominator < 0))
   {
      cout << abs(f.mNumerator) << "/" << abs(f.mDenominator) << endl;
   }
   else if(f.mNumerator >= 0 && f.mDenominator < 0)
   {
      cout << -f.mNumerator << "/" << -f.mDenominator << endl;
   }
   else
   {
      cout << f.mNumerator << "/" << f.mDenominator << endl;
   }
   return x;
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
   if(a == 0 || b == 0)
   {
      return max(a, b);
   }
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

Fraction Fraction::Inverse(void)
{
   Fraction temp;
   temp.mNumerator = mDenominator;
   temp.mDenominator = mNumerator;
   return temp;
}

Fraction Fraction::operator+(Fraction &x)
{
   Fraction sum;
   int lLCM = LCM(mDenominator, x.mDenominator);

   sum.mNumerator = (lLCM / mDenominator)*mNumerator + (lLCM / x.mDenominator)*x.mNumerator;
   sum.mDenominator = lLCM;
   sum.Simplify();
   return sum;
}

Fraction Fraction::operator-(Fraction &x)
{
   Fraction diff;
   int lLCM = LCM(mDenominator, x.mDenominator);

   diff.mNumerator = (lLCM / mDenominator)*mNumerator - (lLCM / x.mDenominator)*x.mNumerator;
   diff.mDenominator = lLCM;
   diff.Simplify();
   return diff;
}

Fraction Fraction::operator*(Fraction &x)
{
   Fraction product;

   product.mNumerator = mNumerator * x.mNumerator;
   product.mDenominator = mDenominator * x.mDenominator;
   product.Simplify();
   return product;
}

Fraction Fraction::operator/(Fraction &x)
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
