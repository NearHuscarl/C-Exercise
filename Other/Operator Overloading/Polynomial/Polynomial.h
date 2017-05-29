#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "Monomial.h"

class Polynomial 
{
   private:
      int mMaxIndex;
      Monomial * mpMonomialList;
   public:
      Polynomial(int m = 1);
      Polynomial(const Polynomial&); //copy ctor
      ~Polynomial();

      Polynomial& operator=(const Polynomial &x);
      friend istream& operator>>(istream&, Polynomial&);
      friend ostream& operator<<(ostream&, const Polynomial&);

      Polynomial Inverse();

      Polynomial operator+(const Polynomial&);
      Polynomial operator-(const Polynomial&);
      Polynomial operator*(const Polynomial&);
};

#endif //POLYNOMIAL_H 
