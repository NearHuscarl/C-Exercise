#ifndef CVECTOR_H
#define CVECTOR_H

class CMatrix;

class CVector 
{
   private:
      int mD;
      double * mpCoords;
   public:
      CVector();
      CVector(const CVector& x);
      ~CVector();

      void Input();
      void Output();
      CVector operator=(const CVector &x);
      CVector Add(CVector &x);
      CVector Subtract(CVector &x);
      CVector Multiply(double k);
      double Multiply(CVector &x);
      friend CMatrix Multiply(const CMatrix &product, const CVector &v);
};

#endif //CVECTOR_H 
