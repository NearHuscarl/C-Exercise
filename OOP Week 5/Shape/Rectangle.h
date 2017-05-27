#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
   public:
      Rectangle(double w = 0.0, double h = 0.0);
      ~Rectangle();

      void Input();
      void Output();
      void SetArea();
      void SetPerimeter();
   private:
      double mWidth;
      double mHeight;
};

#endif //RECTANGLE_H
