#ifndef POINT_H
#define POINT_H

#include "graphics.h"

class Point 
{
   private:
      double mX;
      double mY;
   public:
      Point(double x = 0, double y = 0);
      double GetX();
      double GetY();
      void Set(double, double);
      void Input();
      void Output();
      void Move(double x, double y);
      void Draw(int c);
};

#endif //POINT_H  
