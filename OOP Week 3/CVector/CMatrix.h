#ifndef CMATRIX_H
#define CMATRIX_H

class CVector;

class CMatrix 
{
   private:
      int mRow;
      int mCol;
      double **mpRow;
   public:
      CMatrix(int r=1, int col=1);
      CMatrix(const CMatrix &x);
      ~CMatrix();

      void Input();
      void Output();

      CMatrix operator=(const CMatrix &x);
      CMatrix Add(CMatrix &x);
      CMatrix Subtract(CMatrix &x);
      CMatrix Multiply(int k);
      friend CMatrix Multiply(const CMatrix &product, const CVector &v);
};

#endif //CMATRIX_H 
