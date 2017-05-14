// ------------------------------------------------------------
//    File Name: Quadrilateral.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Saturday 2017-05-06 11:57:00 PM
// ------------------------------------------------------------

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Point.h"
#include "Line.h"
#include <string>

class Quadrilateral
{
   protected:
      Point A;
      Point B;
      Point C;
      Point D;

      Line AB;
      Line BC;
      Line CD;
      Line DA;

      float mArea;
   public:
      Quadrilateral();
      Quadrilateral(Point aA, Point aB, Point aC, Point aD);
      ~Quadrilateral();

      void Input();
      void Output();
      virtual float GetArea() = 0;
   private:
      virtual bool IsValid() = 0;
      virtual void InitArea() = 0;
};

#include "Trapezium.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"

#endif //QUADRILATERAL_H
