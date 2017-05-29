#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;

class Matrix 
{
   private:
      int mRow;
      int mCol;
      double **mpRow;
   public:
      Matrix(int r=1, int col=1);
      Matrix(const Matrix &x);
      ~Matrix();

      friend istream& operator>>(istream&, Matrix&);
      friend ostream& operator<<(ostream&, const Matrix&);
      void ReleaseMemory();

      Matrix operator=(const Matrix&);
      Matrix operator+(const Matrix&);
      Matrix operator-(const Matrix&);
      Matrix operator*(const Matrix&);
      Matrix operator*(int k);
};

#endif //MATRIX_H 
