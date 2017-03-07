#ifndef MONOMIAL_H
#define MONOMIAL_H

class monomial 
{
   private:
      int mCoefficient;
      int mIndex;
   public:
      monomial(int co = 1, int ix = 1);
      void Input();
      void CoefficientInput();
      void Output();
      void SetMonomial(int co, int ix);
      void SetIndex(int ix);
      void SetCoefficient(int x);
      int GetCoefficient();
      int GetIndex();
      monomial Add(monomial);
      monomial Subtract(monomial);
      monomial Multiply(monomial);
};

#endif //MONOMIAL_H 
