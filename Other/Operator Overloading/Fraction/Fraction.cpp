#include <iostream>
#include <cmath>
#include <algorithm>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(long n, long d):
   mNumerator(n),
   mDenominator(d)
{
}

Fraction::Fraction(long k):
   mNumerator(k),
   mDenominator(1)
{
}

Fraction::~Fraction()
{
}

istream& operator>>(istream& x, Fraction &f)
{
   cout << "Numerator Input: ";
   x >> f.mNumerator;
   cout << "Denominator Input: ";
   x >> f.mDenominator;
   if(f.mDenominator == 0)
   {
      while(f.mDenominator == 0)
      {
         cout << "Invalid Input. mDenominator cant equal to zero. Try again" << endl;
         cout << "Denominator Input: ";
         x >>  f.mDenominator;
      }
   }
   return x;
}

ostream& operator<<(ostream& x, Fraction &f)
{
   f.Simplify();
   if((f.mNumerator >= 0 && f.mDenominator > 0) || (f.mNumerator < 0 && f.mDenominator < 0))
   {
      x << abs(f.mNumerator) << "/" << abs(f.mDenominator);
   }
   else if(f.mNumerator >= 0 && f.mDenominator < 0)
   {
      x << -f.mNumerator << "/" << -f.mDenominator;
   }
   else
   {
      x << f.mNumerator << "/" << f.mDenominator;
   }
   return x;
}

long Fraction::LCM(long x, long y)
{
   x = abs(x);
   y = abs(y);
   long maxXY = max(x, y);
   long lcm = maxXY;
   while (lcm+= maxXY)
      if (lcm % x == 0 && lcm % y == 0)
         return lcm;
}

long Fraction::GCD(long a, long b)
{
   a = abs(a);
   b = abs(b);
   if(a == 0 || b == 0)
   {
      return max(a, b);
   }
   for (long i = min(a, b);; i--)
      if (a % i == 0 && b % i == 0)
         return i;
}

void Fraction::Simplify(void)
{
   long lGCD = GCD(mNumerator, mDenominator);
   mNumerator/= lGCD;
   mDenominator/= lGCD;
}

void Fraction::LCD(Fraction &x, Fraction &y)
{
   long lLCM = LCM(x.mDenominator, y.mDenominator);

   x.mNumerator*= (lLCM / x.mDenominator);
   x.mDenominator = lLCM;

   y.mNumerator*= (lLCM / y.mDenominator);
   y.mDenominator = lLCM;
}

Fraction Fraction::operator-(void)
{
   Fraction result(-(*this).mNumerator, (*this).mDenominator);
   return result;
}

Fraction operator+(Fraction x, Fraction y)
{
   Fraction sum;

   sum.mNumerator = x.mNumerator * y.mDenominator + y.mNumerator * x.mDenominator;
   sum.mDenominator = x.mDenominator * y.mDenominator;
   sum.Simplify();
   return sum;
}

Fraction operator-(Fraction x, Fraction y)
{
   Fraction diff = x + (-y);

   diff.Simplify();
   return diff;
}

Fraction operator*(Fraction x, Fraction y)
{
   Fraction product;

   product.mNumerator = x.mNumerator * y.mNumerator;
   product.mDenominator = x.mDenominator * y.mDenominator;
   product.Simplify();
   return product;
}

Fraction operator/(Fraction x, Fraction y)
{
   Fraction quotient;

   if(!y.mNumerator)
   {
      throw, "Cant divide to 0";
   }
   quotient.mNumerator = x.mNumerator * y.mDenominator;
   quotient.mDenominator = x.mDenominator * y.mNumerator;
   quotient.Simplify();
   return quotient;
}

Fraction Fraction::operator+=(Fraction p)
{
   *this = *this + p;
   this->Simplify();
   return *this;
}

Fraction Fraction::operator-=(Fraction p)
{
   *this = *this - p;
   this->Simplify();
   return *this;
}

Fraction Fraction::operator*=(Fraction p)
{
   *this = *this * p;
   this->Simplify();
   return *this;
}

Fraction Fraction::operator/=(Fraction p)
{
   *this = *this / p;
   this->Simplify();
   return *this;
}

Fraction Fraction::operator++(int)
{
   Fraction temp(*this);

   mNumerator = mNumerator + mDenominator;
   temp.Simplify();
   return temp;
}

Fraction Fraction::operator++(void)
{
   mNumerator = mNumerator + mDenominator;
   (*this).Simplify();
   return *this;
}

Fraction Fraction::operator--(int)
{
   Fraction temp(*this);

   mNumerator = mNumerator - mDenominator;
   temp.Simplify();
   return temp;
}

Fraction Fraction::operator--(void)
{
   mNumerator = mNumerator - mDenominator;
   this->Simplify();
   return *this;
}

bool Fraction::operator>(Fraction p)
{
   Fraction temp(*this);
   LCD(temp, p);

   return temp.mNumerator > p.mNumerator;
}

bool Fraction::operator<(Fraction p)
{
   Fraction temp(*this);
   LCD(temp, p);

   return temp.mNumerator < p.mNumerator;
}

bool Fraction::operator==(Fraction p)
{
   return !(*this > p || *this < p);
}

bool Fraction::operator!=(Fraction p)
{
   return !(*this == p);
}

bool Fraction::operator>=(Fraction p)
{
   return (*this > p || *this == p);
}

bool Fraction::operator<=(Fraction p)
{
   return (*this < p || *this == p);
}
