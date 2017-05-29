#ifndef COMPLEX_H 
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex 
{
   private:
      double mRealNum;
      double mImaginaryUnit;
   public:
      Complex(int x = 1, int y = 1);
      ~Complex();

      double Modulus();

      friend istream& operator>>(istream&, Complex&); 
      friend ostream& operator<<(ostream&, const Complex&); 

      Complex operator+(const Complex&);
      Complex operator-(const Complex&);
      Complex operator*(const Complex&);
      Complex operator/(const Complex&);
};

#endif //COMPLEX_H
