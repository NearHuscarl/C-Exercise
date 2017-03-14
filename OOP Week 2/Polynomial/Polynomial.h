#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "Monomial.h"

class Polynomial 
{
   private:
      int mMaxIndex;
      Monomial * mpMonomial;
   public:
      Polynomial(int m = 1);
      Polynomial(const Polynomial &x); //copy ctor
      ~Polynomial();
      Polynomial& operator=(const Polynomial &x);
      void Input();
      void Output();
      Polynomial Inverse();
      Polynomial Add(Polynomial &x);
      Polynomial Subtract(Polynomial &x);
      Polynomial Multiply(Polynomial &x);
};

#endif //POLYNOMIAL_H 
