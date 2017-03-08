#include <iostream>
#include "Monomial.h"
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial(int m):
   mMaxIndex(m),
   mpMonomial(nullptr)
{
}

Polynomial::Polynomial(const Polynomial &x)
{
   mMaxIndex = x.mMaxIndex;
   mpMonomial = new Monomial[mMaxIndex];

   for(int i = 0; i < x.mMaxIndex; i++)
   {
      mpMonomial[i].SetMonomial(x.mpMonomial[i].GetCoefficient(), i);
   }
}

Polynomial::~Polynomial()
{
   delete [] mpMonomial;
}
void Polynomial::Input(void)
{
   cout << "Enter the maximum index: ";
   cin >> mMaxIndex;
   mpMonomial = new Monomial[mMaxIndex];

   for(int i = 0; i < mMaxIndex; i++)
   {
      mpMonomial[i].CoefficientInput();
      mpMonomial[i].SetIndex(i);
   }
}

void Polynomial::Output(void)
{
   mpMonomial[0].Output();
   for(int i = 1; i < mMaxIndex; i++)
   {
      cout << " + ";
      mpMonomial[i].Output();
   }
   cout << endl;
}

Polynomial Polynomial::Inverse(void)
{
   Polynomial pInvert;
   for(int i = 0; i < mMaxIndex; i++)
   {
      int coInvert = mpMonomial[i].GetCoefficient() * -1;
      pInvert.mpMonomial[i].SetCoefficient(coInvert);
   }
   return pInvert;
}

Polynomial Polynomial::Add(Polynomial &x)
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
   sum.mpMonomial = new Monomial[bigIndex];

   for(int i = 0; i < smallIndex; i++)
   {
      int coSum = x.mpMonomial[i].GetCoefficient() + mpMonomial[i].GetCoefficient();
      sum.mpMonomial[i].SetMonomial(coSum, i);
   }
   if(flag)
   {
      for(int i = smallIndex; i < bigIndex; i++)
      {
         int coSum = mpMonomial[i].GetCoefficient();
         sum.mpMonomial[i].SetMonomial(coSum, i);
      }
   }
   else
   {
      for(int i = smallIndex; i < bigIndex; i++)
      {
         int coSum = x.mpMonomial[i].GetCoefficient();
         sum.mpMonomial[i].SetMonomial(coSum, i);
      }
   }
   return sum;
}

Polynomial Polynomial::Subtract(Polynomial &x)
{
   Polynomial diff = (*this).Add(x.Inverse());
   return diff;
}

Polynomial Polynomial::Multiply(Polynomial &x)
{
   Polynomial product(mMaxIndex*x.mMaxIndex);

   int proC = 0;
   for(int i = 0; i < mMaxIndex; i++)
   {
      for(int j = 0; j < x.mMaxIndex; j++, proC++)
      {
         product.mpMonomial[proC] = mpMonomial[i].Multiply(x.mpMonomial[j]);
      }
   }
   return product;
}  
