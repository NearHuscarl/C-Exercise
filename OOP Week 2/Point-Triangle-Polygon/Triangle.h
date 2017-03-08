#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle 
{
   private:
      Point mPoint[3];
   public:
      Triangle();
      void Input();
      void Output();
      void Translate(double, double);
      void Rotate(double); //Radian
      void Zoom(double);
};

#endif //TRIANGLE_H
