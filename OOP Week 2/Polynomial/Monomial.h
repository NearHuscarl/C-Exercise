#ifndef MONOMIAL_H
#define MONOMIAL_H

class Monomial 
{
   private:
      int mCoefficient;
      int mIndex;
   public:
      Monomial(int co = 1, int ix = 1);
      void Input();
      void CoefficientInput();
      void Output();
      void SetMonomial(int co, int ix);
      void SetIndex(int ix);
      void SetCoefficient(int x);
      int GetCoefficient();
      int GetIndex();
      Monomial Add(Monomial);
      Monomial Subtract(Monomial);
      Monomial Multiply(Monomial);
};

#endif //MONOMIAL_H 
