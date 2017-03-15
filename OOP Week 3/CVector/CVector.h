#ifndef CVECTOR_H
#define CVECTOR_H

class CVector 
{
   private:
      int mD;
      int * mpCoords;
   public:
      CVector();
      CVector(const CVector& x);
      ~CVector();

      void Input();
      void Output();
      CVector operator=(const CVector &x);
      CVector Add(CVector &x);
      CVector Subtract(CVector &x);
      CVector Multiply(int k);
      int Multiply(CVector &x);
};

#endif //CVECTOR_H 
