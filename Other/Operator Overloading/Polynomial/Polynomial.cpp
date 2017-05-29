#include <iostream>
#include "Monomial.h"
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial(int m):
   mMaxIndex(m),
   mpMonomialList(nullptr)
{
}

Polynomial::Polynomial(const Polynomial &x)
{
   mMaxIndex = x.mMaxIndex;
   mpMonomialList = new Monomial[mMaxIndex + 1];

   for(int i = 0; i <= x.mMaxIndex; i++)
   {
      mpMonomialList[i].SetMonomial(x.mpMonomialList[i].GetConst(), i);
   }
}

Polynomial::~Polynomial()
{
   delete [] mpMonomialList;
}

Polynomial& Polynomial::operator=(const Polynomial &x)
{
   mMaxIndex = x.mMaxIndex;
   delete [] mpMonomialList;
   mpMonomialList = new Monomial[mMaxIndex + 1];
   for(int i = 0; i <= mMaxIndex; i++)
   {
      mpMonomialList[i].SetMonomial(x.mpMonomialList[i].GetConst(), i);
   }
   return *this;
}

istream& operator>>(istream &x, Polynomial &p)
{
   cout << "Enter the maximum index: ";
   x >> p.mMaxIndex;
   p.mpMonomialList = new Monomial[p.mMaxIndex + 1];

   int constant = 0;
   for(int i = 0; i <= p.mMaxIndex; i++)
   {
      cout << "Const Input " << i << ": ";
      x >> constant;
      p.mpMonomialList[i].SetConst(constant);
      p.mpMonomialList[i].SetIndex(i);
   }
   return x;
}

ostream& operator<<(ostream &x, const Polynomial &p)
{
   x << p.mpMonomialList[0];
   for(int i = 1; i <= p.mMaxIndex; i++)
   {
      x << " + ";
      x << p.mpMonomialList[i];
   }
   x << endl;
   return x;
}

Polynomial Polynomial::Inverse(void)
{
   Polynomial pInvert;

   pInvert.mMaxIndex = mMaxIndex;
   pInvert.mpMonomialList = new Monomial[pInvert.mMaxIndex + 1];
   for(int i = 0; i <= mMaxIndex; i++)
   {
      int coInvert = mpMonomialList[i].GetConst() * (-1);
      pInvert.mpMonomialList[i].SetMonomial(coInvert, i);
   }
   return pInvert;
}

Polynomial Polynomial::operator+(const Polynomial &x)
{
   int flag = 0;
   int bigIndex;
   int smallIndex;

   if(mMaxIndex > x.mMaxIndex)
   {
      bigIndex = mMaxIndex;
      smallIndex = x.mMaxIndex;
      flag = 1;
   }
   else
   {
      bigIndex = x.mMaxIndex;
      smallIndex = mMaxIndex;
   }
   Polynomial sum;
   sum.mMaxIndex = bigIndex;
   sum.mpMonomialList = new Monomial[bigIndex + 1];

   for(int i = 0; i <= smallIndex; i++)
   {
      int coSum = x.mpMonomialList[i].GetConst() + mpMonomialList[i].GetConst();
      sum.mpMonomialList[i].SetMonomial(coSum, i);
   }
   for(int i = smallIndex+1; i <= bigIndex; i++)
   {
      if(flag)
      {
         int coSum = mpMonomialList[i].GetConst();
         sum.mpMonomialList[i].SetMonomial(coSum, i);
      }
      else
      {
         int coSum = x.mpMonomialList[i].GetConst();
         sum.mpMonomialList[i].SetMonomial(coSum, i);
      }
   }
   return sum;
}

Polynomial Polynomial::operator-(const Polynomial &x)
{
   Polynomial iv(*this);
   Polynomial diff = *this + iv.Inverse();
   return diff;
}

Polynomial Polynomial::operator*(const Polynomial &x)
{
   Polynomial product;
   product.mMaxIndex = mMaxIndex + x.mMaxIndex;
   product.mpMonomialList = new Monomial[product.mMaxIndex + 1];

   for(int i = 0; i <= product.mMaxIndex; i++)
   {
      product.mpMonomialList[i].SetMonomial(0, i);
   }

   for(int i = 0; i <= mMaxIndex; i++)
   {
      for(int j = 0; j <= x.mMaxIndex; j++)
      {
         product.mpMonomialList[i+j]+= mpMonomialList[i] * x.mpMonomialList[j];
      }
   }
   return product;
}  
