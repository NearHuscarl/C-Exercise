#include <iostream>
#include "Monomial.h"

using namespace std;

Monomial::Monomial(int c, int i):
   mConst(c),
   mIndex(i)
{
}

Monomial::~Monomial()
{
}

istream& operator>>(istream &x, Monomial &m)
{
   cout << "Const Input: ";
   x >> m.mConst;
   cout << "Index Input: ";
   x >> m.mIndex;
   return x;
}

ostream& operator<<(ostream &x, const Monomial &m)
{
   if(m.mConst < 0)
   {
      x << "(" << m.mConst << ")X^" << m.mIndex;
   }
   else
   {
      x << m.mConst << "X^" << m.mIndex;
   }
   return x;
}

int Monomial::GetConst(void)
{
   return mConst;
}

int Monomial::GetIndex(void)
{
   return mIndex;
}

void Monomial::SetMonomial(int co, int ix)
{
   mConst = co;
   mIndex = ix;
}

void Monomial::SetIndex(int ix)
{
   mIndex = ix;
}

void Monomial::SetConst(int x)
{
   mConst = x;
}

Monomial Monomial::operator+(const Monomial &x)
{
   Monomial sum;
   sum.mConst = mConst + x.mConst;
   sum.mIndex = mIndex;
   return sum;
}

Monomial& Monomial::operator+=(const Monomial &x)
{
   *this = *this + x;
   return *this;
}

Monomial Monomial::operator-(const Monomial &x)
{
   Monomial diff;
   diff.mConst = mConst - x.mConst;
   diff.mIndex = mIndex;
   return diff;
}

Monomial Monomial::operator*(const Monomial &x)
{
   Monomial product;
   product.mConst = mConst * x.mConst;
   product.mIndex = mIndex + x.mIndex;
   return product;
}
