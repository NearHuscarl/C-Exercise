// ------------------------------------------------------------
//    File Name: Rectangle.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:34 PM
// ------------------------------------------------------------

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Parallelogram.h"

class Rectangle: public Parallelogram
{
   public:
      Rectangle();
      Rectangle(Point aA, Point aB, Point aC, Point aD);
      ~Rectangle();

      void Input();
      void Output();
      float GetArea();
   private:
      void InitArea();
   protected:
      bool IsValid();
};

#endif //RECTANGLE_H 
