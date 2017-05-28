#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int r, int c):
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

Matrix::Matrix(const Matrix &x)
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

Matrix::~Matrix()
{
   ReleaseMemory();
}

istream& operator>>(istream &x, Matrix &m)
{
   cout << "Row: ";
   cin >> m.mRow;
   cout << "Column: ";
   cin >> m.mCol;

   m.mpRow = new double*[m.mRow];
   for(int i = 0; i < m.mRow; i++)
   {
      m.mpRow[i] = new double[m.mCol];
      for(int j = 0; j < m.mCol; j++)
      {
         cout << "Element " << i+1 << j+1 << ": ";
         cin >> m.mpRow[i][j];
      }
   }
   return x;
}

ostream& operator<<(ostream &x, const Matrix &m)
{
   cout << endl;
   for(int i = 0; i < m.mRow; i++)
   {
      cout << "[";
      for(int j = 0; j < m.mCol; j++)
      {
         if(j == m.mCol - 1)
         {
            cout << m.mpRow[i][j] << "]" << endl;
            break;
         }
         cout << m.mpRow[i][j] << ", ";
      }
   }
   return x;
}

void Matrix::ReleaseMemory(void)
{
   for(int i = 0; i < mRow; i++)
   {
      delete [] mpRow[i];
   }
   delete [] mpRow;
}

Matrix Matrix::operator=(const Matrix &x)
{
   mRow = x.mRow;
   mCol = x.mCol;

   ReleaseMemory();

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

Matrix Matrix::operator+(Matrix x)
{
   if(x.mRow != mRow || x.mCol != mCol)
   {
      throw invalid_argument("2 Matrices with 2 different size");
   }
   Matrix sum(mRow, mCol);

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         sum.mpRow[i][j] = mpRow[i][j] + x.mpRow[i][j];
      }
   }
   return sum;
}

Matrix Matrix::operator-(Matrix x)
{
   if(x.mRow != mRow || x.mCol != mCol)
   {
      throw invalid_argument("2 Matrices with 2 different size");
   }
   Matrix diff(mRow, mCol);

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         diff.mpRow[i][j] = mpRow[i][j] - x.mpRow[i][j];
      }
   }
   return diff;
}

Matrix Matrix::operator*(int k)
{
   Matrix product(*this);

   for(int i = 0; i < mRow; i++)
   {
      for(int j = 0; j < mCol; j++)
      {
         product.mpRow[i][j] = mpRow[i][j] * k;
      }
   }
   return product;
}

Matrix Matrix::operator*(Matrix x)
{
   if(mRow != mCol || x.mRow != x.mCol)
   {
      throw invalid_argument("Matrices must has the same column and row to multiply");
   }
   else
   {
      Matrix product(mRow, mCol);

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
