#ifndef COMPLEX_H 
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex 
{
   private:
      double mRealNum;
      double mIUnit;
   public:
      Complex(int x = 1, int y = 1)
         :mRealNum(x), mIUnit(y){}
      void Input();
      void Output();
      double Modulus();
      friend ostream& operator<<(ostream& x, const Complex& c); 
      Complex Add(Complex &x);
      Complex Subtract(Complex &x);
      Complex Multiply(Complex &x);
      Complex Divide(Complex &x);
};

#endif //COMPLEX_H
