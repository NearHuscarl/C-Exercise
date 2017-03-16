#include <iostream>
#include "CMatrix.h"
#include "CVector.h"

using namespace std;

CMatrix::CMatrix(int r, int col):
   mpRow(nullptr)
{
}

CMatrix::CMatrix(const CMatrix &x)
{
   mRow = x.mRow;
   mCol = x.mCol;

   mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      mpRow[i] = new double[mCol];
      for(int j = 0; j < mCol; j++)
      {
         mpRow[i][j] = x.mpRow[i][j];
      }
   }
}

CMatrix::~CMatrix()
{
   delete [] mpRow;
}

void CMatrix::Input(void)
{
   cout << "Row: ";
   cin >> mRow;
   cout << "Column: ";
   cin >> mCol;

   mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      mpRow[i] = new double[mCol];
      for(int j = 0; j < mCol; j++)
      {
         cout << "Element " << i+1 << j+1 << ": ";
         cin >> mpRow[i][j];
      }
   }
}

void CMatrix::Output(void)
{
   cout << endl;
   for(int i = 0; i < mRow; i++)
   {
      cout << "[";
      for(int j = 0; j < mCol; j++)
      {
         if(j == mCol - 1)
         {
            cout << mpRow[i][j] << "]" << endl;
            break;
         }
         cout << mpRow[i][j] << ", ";
      }
   }
}

CMatrix CMatrix::operator=(const CMatrix &x)
{
   mRow = x.mRow;
   mCol = x.mCol;

   delete [] mpRow;

   mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      mpRow[i] = new double[mCol];
      for(int j = 0; j < mCol; j++)
      {
         mpRow[i][j] = x.mpRow[i][j];
      }
   }
   return *this;
}

CMatrix CMatrix::Add(CMatrix &x)
{
   CMatrix sum;
   sum.mRow = mRow;
   sum.mCol = mCol;
   sum.mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      sum.mpRow[i] = new double[mCol];
      for(int j = 0; j < mCol; j++)
      {
         sum.mpRow[i][j] = 0;
      }
   }

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         sum.mpRow[i][j] = mpRow[i][j] + x.mpRow[i][j];
      }
   }
   return sum;
}

CMatrix CMatrix::Subtract(CMatrix &x)
{
   CMatrix diff;
   diff.mRow = mRow;
   diff.mCol = mCol;
   diff.mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      diff.mpRow[i] = new double[mCol];
      for(int j = 0; j < mCol; j++)
      {
         diff.mpRow[i][j] = 0;
      }
   }

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         diff.mpRow[i][j] = mpRow[i][j] - x.mpRow[i][j];
      }
   }
   return diff;
}

CMatrix CMatrix::Multiply(int k)
{
   CMatrix product(*this);

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         product.mpRow[i][j] = mpRow[i][j] * k;
      }
   }
   return product;
}

CMatrix Multiply(const CMatrix &product, const CVector &v) 
{

   for(int i = 0; i < product.mRow; i++)
   {
      for(int j = 0; j < product.mCol; j++)
      {
         product.mpRow[i][j]*= v.mpCoords[j];
      }
   }
   return product;
}
