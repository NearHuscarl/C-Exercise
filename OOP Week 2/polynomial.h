#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class polynomial 
{
   private:
      int mMaxIndex;
      monomial * mpMonomial;
   public:
      polynomial(int m = 1);
      polynomial(const polynomial &x); //copy ctor
      ~polynomial();
      void Input();
      void Output();
      polynomial Inverse();
      polynomial Add(polynomial &x);
      polynomial Subtract(polynomial &x);
      polynomial Multiply(polynomial &x);
};

#endif //POLYNOMIAL_H 
