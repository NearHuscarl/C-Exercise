#include <iostream>
#include "Monomial.h"

using namespace std;

Monomial::Monomial(int co, int ix):
   mCoefficient(co),
   mIndex(ix)
{
}

void Monomial::Input(void)
{
   cout << "Coefficient Input: ";
   cin >> mCoefficient;
   cout << "Index Input: ";
   cin >> mIndex;
}

void Monomial::Output(void)
{
   if(mCoefficient < 0)
   {
      cout << "(" << mCoefficient << ")X^" << mIndex;
   }
   else
   {
      cout << mCoefficient << "X^" << mIndex;
   }
}

int Monomial::GetCoefficient(void)
{
   return mCoefficient;
}

int Monomial::GetIndex(void)
{
   return mIndex;
}

void Monomial::SetMonomial(int co, int ix)
{
   mCoefficient = co;
   mIndex = ix;
}

void Monomial::SetIndex(int ix)
{
   mIndex = ix;
}

void Monomial::SetCoefficient(int x)
{
   mCoefficient = x;
}

Monomial Monomial::Add(Monomial x)
{
   Monomial sum;
   sum.mCoefficient = mCoefficient + x.mCoefficient;
   sum.mIndex = mIndex;
   return sum;
}

Monomial Monomial::Subtract(Monomial x)
{
   Monomial diff;
   diff.mCoefficient = mCoefficient - x.mCoefficient;
   diff.mIndex = mIndex;
   return diff;
}

Monomial Monomial::Multiply(Monomial x)
{
   Monomial product;
   product.mCoefficient = mCoefficient * x.mCoefficient;
   product.mIndex = mIndex + x.mIndex;
   return product;
}
