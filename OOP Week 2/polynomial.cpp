#include <iostream>
#include "monomial.h"
#include "polynomial.h"

using namespace std;

polynomial::polynomial(int m):
   mMaxIndex(m),
   mpMonomial(nullptr)
{
}

polynomial::polynomial(const polynomial &x)
{
   mMaxIndex = x.mMaxIndex;
   mpMonomial = new monomial[mMaxIndex];

   for(int i = 0; i < x.mMaxIndex; i++)
   {
      mpMonomial[i].SetMonomial(x.mpMonomial[i].GetCoefficient(), i);
   }
}

polynomial::~polynomial()
{
   delete [] mpMonomial;
}
void polynomial::Input(void)
{
   cout << "Enter the maximum index: ";
   cin >> mMaxIndex;
   mpMonomial = new monomial[mMaxIndex];

   for(int i = 0; i < mMaxIndex; i++)
   {
      mpMonomial[i].CoefficientInput();
      mpMonomial[i].SetIndex(i);
   }
}

void polynomial::Output(void)
{
   mpMonomial[0].Output();
   for(int i = 1; i < mMaxIndex; i++)
   {
      cout << " + ";
      mpMonomial[i].Output();
   }
   cout << endl;
}

polynomial polynomial::Inverse(void)
{
   polynomial pInvert;
   for(int i = 0; i < mMaxIndex; i++)
   {
      int coInvert = mpMonomial[i].GetCoefficient() * -1;
      pInvert.mpMonomial[i].SetCoefficient(coInvert);
   }
   return pInvert;
}

polynomial polynomial::Add(polynomial &x)
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
   polynomial sum;
   sum.mMaxIndex = bigIndex;
   sum.mpMonomial = new monomial[bigIndex];

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

polynomial polynomial::Subtract(polynomial &x)
{
   polynomial diff = (*this).Add(x.Inverse());
   return diff;
}

polynomial polynomial::Multiply(polynomial &x)
{
   polynomial product(mMaxIndex*x.mMaxIndex);

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
