#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
   public:
      Shape();
      ~Shape();

      virtual void Input()        = 0;
      virtual void Output()       = 0;
      virtual void SetArea()      = 0;
      virtual void SetPerimeter() = 0;
   protected:
      double mArea;
      double mPerimeter;
};

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

#endif //SHAPE_H
