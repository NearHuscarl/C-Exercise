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
   mpCoords = new double[mD];
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
   mpCoords = new double[mD];
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
   mpCoords = new double[mD];
   for(int i = 0; i < mD; i++)
   {
      mpCoords[i] = x.mpCoords[i];
   }
   return *this;
}

CVector CVector::Add(CVector &x)
{
   if(x.mD != mD)
   {
      throw invalid_argument("Vectors dont have the same dimensions");
   }

   CVector sum;
   sum.mD = mD;
   sum.mpCoords = new double[sum.mD];

   for(int i = 0; i < mD; i++)
   {
      sum.mpCoords[i] = mpCoords[i] + x.mpCoords[i];
   }
   return sum;
}

CVector CVector::Subtract(CVector &x)
{
   if(x.mD != mD)
   {
      throw invalid_argument("Vectors dont have the same dimensions");
   }

   CVector diff;
   diff.mD = mD;
   diff.mpCoords = new double[diff.mD];

   for(int i = 0; i < mD; i++)
   {
      diff.mpCoords[i] = mpCoords[i] - x.mpCoords[i];
   }
   return diff;
}

CVector CVector::Multiply(double k)
{
   CVector product;
   product.mD = mD;
   product.mpCoords = new double[product.mD];

   for(int i = 0; i < mD; i++)
   {
      product.mpCoords[i] = mpCoords[i] * k;
   }
   return product;
}

double CVector::Multiply(CVector &x)
{
   if(x.mD != mD)
   {
      throw invalid_argument("Matrix column != Vector dimension");
   }

   double ScalarProduct = 0;

   for(int i = 0; i < mD; i++)
   {
      ScalarProduct+= mpCoords[i]* x.mpCoords[i];
   }
   return ScalarProduct;
}
