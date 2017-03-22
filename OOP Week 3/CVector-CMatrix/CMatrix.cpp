#include <iostream>
#include "CMatrix.h"
#include "CVector.h"

using namespace std;

CMatrix::CMatrix(int r, int c):
   mpRow(nullptr),
   mRow(r),
   mCol(c)
{
   mpRow = new double*[mRow];
   for(int i = 0; i < mRow; i++)
   {
      mpRow[i] = new double[mCol];
   }
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
   if(x.mRow != mRow || x.mCol != mCol)
   {
      throw invalid_argument("2 Matrices with 2 different size");
   }
   CMatrix sum(mRow, mCol);

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
   if(x.mRow != mRow || x.mCol != mCol)
   {
      throw invalid_argument("2 Matrices with 2 different size");
   }
   CMatrix diff(mRow, mCol);

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

CMatrix Multiply(const CMatrix &m, const CVector &v) 
{
   CMatrix product(m);
   if(v.mD != product.mCol)
   {
      throw invalid_argument("Vectors dont have the same dimensions");
   }

   for(int i = 0; i < product.mRow; i++)
   {
      for(int j = 0; j < product.mCol; j++)
      {
         product.mpRow[i][j]*= v.mpCoords[j];
      }
   }
   return product;
}

CMatrix CMatrix::Multiply(CMatrix &x)
{
   if(mRow != mCol || x.mRow != x.mCol)
   {
      throw invalid_argument("Matrices must has the same column and row to multiply");
   }
   else
   {
      CMatrix product(mRow, mCol);

      int length = mRow;
      int sum = 0;

      for(int i = 0; i < length; i++)
      {
         for(int j = 0; j < length; j++)
         {
            for(int h = 0; h < length; h++)
            {
               sum+= mpRow[i][h] * x.mpRow[h][j];
               product.mpRow[i][j] = sum;
            }
            sum = 0;
         }
      }
      return product;
   }
}
