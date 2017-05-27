#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape
{
   public:
      Triangle(double b = 0.0, double h = 0.0, double s1 = 0.0, double s2 = 0.0);
      ~Triangle();

      void Input();
      void Output();
      void SetArea();
      void SetPerimeter();
   private:
      double mBase;
      double mHeight;
      double mSide1;
      double mSide2;
};

#endif //TRIANGLE_H
