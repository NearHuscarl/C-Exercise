#ifndef FRACTION_H
#define FRACTION_H

class Fraction 
{
   private:
      int mNumerator;
      int mDenominator;
      int LCM(int, int);
      int GCD(int, int);
   public:
      Fraction(int n = 1, int d = 1);
      void Input();
      void Output();
      void Assign(Fraction);
      void Simplify();
      void Reduce(Fraction);
      bool IsGreater(Fraction x);
      Fraction Inverse();
      Fraction Add(Fraction x);
      Fraction Subtract(Fraction x);
      Fraction Multiply(Fraction x);
      Fraction Divide(Fraction x);
};

#endif //FRACTION_H 

