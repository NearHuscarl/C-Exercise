#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

class polygon 
{
   private:
      int n;
      Point * mpPoint;
   public:
      polygon(int x = 3);
      ~polygon();
      void Input();
      void Output();
      void Translate(double, double);
      void Rotate(double); //Radian
      void Zoom(double);
};

#endif //POLYGON_H 
