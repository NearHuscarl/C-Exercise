#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

class Polygon 
{
   private:
      int n;
      Point * mpPoint;
   public:
      Polygon(int x = 3);
      ~Polygon();
      void Input();
      void Output();
      void Translate(double, double);
      void Rotate(double); //Radian
      void Zoom(double);
};

#endif //POLYGON_H 
