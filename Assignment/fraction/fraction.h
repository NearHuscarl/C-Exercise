#ifndef FRACTION_H
#define FRACTION_H

class fraction 
{
   private:
      int mNumerator;
      int mDenominator;
      int LCM(int, int);
      int GCD(int, int);
   public:
      fraction(int n = 1, int d = 1);
      void Input();
      void Output();
      void Simplify();
      void Reduce(fraction);
      bool IsGreater(fraction x);
      fraction Inverse();
      fraction Add(fraction x);
      fraction Subtract(fraction x);
      fraction Multiply(fraction x);
      fraction Divide(fraction x);
};

#endif //FRACTION_H 

