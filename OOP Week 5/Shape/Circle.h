#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape
{
   public:
      Circle(double r = 0.0);
      ~Circle();

      void Input();
      void Output();
      void SetArea();
      void SetPerimeter();
   private:
      double mRadius;
      const double mPi;
};

#endif //CIRCLE_H
