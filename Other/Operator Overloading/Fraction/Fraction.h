#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction 
{
   private:
      long mNumerator;
      long mDenominator;

      long LCM(long, long);
      long GCD(long, long);
      void Simplify();
      void LCD(Fraction&, Fraction&);
   public:
      Fraction(long n, long);
      Fraction(long k = 1);
      ~Fraction();

      friend istream& operator>>(istream&, Fraction&); 
      friend ostream& operator<<(ostream&, Fraction&); 

      Fraction operator-(void);
      friend Fraction operator+(Fraction, Fraction);
      friend Fraction operator-(Fraction, Fraction);
      friend Fraction operator*(Fraction, Fraction);
      friend Fraction operator/(Fraction, Fraction);

      Fraction operator+=(Fraction);
      Fraction operator-=(Fraction);
      Fraction operator*=(Fraction);
      Fraction operator/=(Fraction);

      Fraction operator++(int);
      Fraction operator++();
      Fraction operator--(int);
      Fraction operator--();

      bool operator>(Fraction);
      bool operator<(Fraction);
      bool operator==(Fraction);
      bool operator!=(Fraction);
      bool operator>=(Fraction);
      bool operator<=(Fraction);
};

#endif //FRACTION_H 

