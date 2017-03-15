#include <iostream>
#include "CVector.h"

using namespace std;

CVector::CVector():
   mpCoords(nullptr)
{
}

CVector::CVector(const CVector &x)
{
   mD = x.mD;
   mpCoords = new int[mD];
   for(int i = 0; i < mD; i++)
   {
      mpCoords[i] = x.mpCoords[i];
   }
}

CVector::~CVector()
{
   delete [] mpCoords;
}

void CVector::Input(void)
{
   cout << "Dimension: ";
   cin >> mD;
   mpCoords = new int[mD];
   for(int i = 0; i < mD; i++)
   {
      cout << "Coordinate " << i+1 << " : ";
      cin >> mpCoords[i];
   }
}

void CVector::Output(void)
{
   cout << "(";
   for(int i = 0; i < mD; i++)
   {
      if(i == mD - 1)
      {
         cout << mpCoords[i] << ")" << endl;
         break;
      }
      cout << mpCoords[i] << ", ";
   }
}

CVector CVector::operator=(const CVector &x)
{
   delete [] mpCoords;
   mD = x.mD;
   mpCoords = new int[mD];
   for(int i = 0; i < mD; i++)
   {
      mpCoords[i] = x.mpCoords[i];
   }
   return *this;
}

CVector CVector::Add(CVector &x)
{
   //Missing exception handlers: Check whether they have the same number of dimension or not
   CVector sum;
   sum.mD = mD;
   sum.mpCoords = new int[sum.mD];

   for(int i = 0; i < mD; i++)
   {
      sum.mpCoords[i] = mpCoords[i] + x.mpCoords[i];
   }
   return sum;
}

CVector CVector::Subtract(CVector &x)
{
   //Missing exception handlers: Check whether they have the same number of dimension or not
   CVector diff;
   diff.mD = mD;
   diff.mpCoords = new int[diff.mD];

   for(int i = 0; i < mD; i++)
   {
      diff.mpCoords[i] = mpCoords[i] - x.mpCoords[i];
   }
   return diff;
}

CVector CVector::Multiply(int k)
{
   CVector product;
   product.mD = mD;
   product.mpCoords = new int[product.mD];

   for(int i = 0; i < mD; i++)
   {
      product.mpCoords[i] = mpCoords[i] * k;
   }
   return product;
}

int CVector::Multiply(CVector &x)
{
   //Missing exception handlers: Check whether they have the same number of dimension or not
   int ScalarProduct = 0;

   for(int i = 0; i < mD; i++)
   {
      ScalarProduct+= mpCoords[i]* x.mpCoords[i];
   }
   return ScalarProduct;
}
