#ifndef MONOMIAL_H
#define MONOMIAL_H

#include <iostream>

using namespace std;

class Monomial 
{
   private:
      int mConst;
      int mIndex;
   public:
      Monomial(int c = 1, int i = 1);
      ~Monomial();

      void SetMonomial(int, int);
      void SetIndex(int);
      void SetConst(int);
      int GetConst();
      int GetIndex();

      friend istream& operator>>(istream&, Monomial&);
      friend ostream& operator<<(ostream&, const Monomial&);

      Monomial operator+(const Monomial&);
      Monomial& operator+=(const Monomial&);
      Monomial operator-(const Monomial&);
      Monomial operator*(const Monomial&);
};

#endif //MONOMIAL_H 
