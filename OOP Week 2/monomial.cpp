#include <iostream>
#include "monomial.h"

using namespace std;

monomial::monomial(int co, int ix):
   mCoefficient(co),
   mIndex(ix)
{
}

void monomial::Input(void)
{
   cout << "Coefficient Input: ";
   cin >> mCoefficient;
   cout << "Index Input: ";
   cin >> mIndex;
}

void monomial::CoefficientInput(void)
{
   cout << "Coefficient Input: ";
   cin >> mCoefficient;
}

void monomial::Output(void)
{
   if(mIndex < 0)
   {
      cout << "(" << mCoefficient << ")X^" << mIndex;
   }
   cout << mCoefficient << "X^" << mIndex;
}

int monomial::GetCoefficient(void)
{
   return mCoefficient;
}

int monomial::GetIndex(void)
{
   return mIndex;
}

void monomial::SetMonomial(int co, int ix)
{
   mCoefficient = co;
   mIndex = ix;
}

void monomial::SetIndex(int ix)
{
   mIndex = ix;
}

void monomial::SetCoefficient(int x)
{
   mCoefficient = x;
}

monomial monomial::Add(monomial x)
{
   monomial sum;
   sum.mCoefficient = mCoefficient + x.mCoefficient;
   sum.mIndex = mIndex;
   return sum;
}

monomial monomial::Subtract(monomial x)
{
   monomial diff;
   diff.mCoefficient = mCoefficient - x.mCoefficient;
   diff.mIndex = mIndex;
   return diff;
}

monomial monomial::Multiply(monomial x)
{
   monomial product;
   product.mCoefficient = mCoefficient * x.mCoefficient;
   product.mIndex = mIndex + x.mIndex;
   return product;
}
