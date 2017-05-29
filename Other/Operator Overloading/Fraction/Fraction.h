#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction 
{
   private:
      int mNumerator;
      int mDenominator;
      int LCM(int, int);
      int GCD(int, int);
   public:
      Fraction(int n = 1, int d = 1);
      ~Fraction();

      void Simplify();
      void Reduce(Fraction);
      Fraction Inverse();

      friend istream& operator>>(istream&, Fraction&); 
      friend ostream& operator<<(ostream&, Fraction&); 

      Fraction operator+(const Fraction&);
      Fraction operator-(const Fraction&);
      Fraction operator*(const Fraction&);
      Fraction operator/(const Fraction&);
};

#endif //FRACTION_H 

