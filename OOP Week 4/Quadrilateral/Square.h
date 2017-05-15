// ------------------------------------------------------------
//    File Name: Square.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:42 PM
// ------------------------------------------------------------

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square: public Rectangle
{
   public:
      Square();
      Square(Point aA, Point aB, Point aC, Point aD);
      ~Square();

      void Input();
      void Output();
      float GetArea();
   private:
      void InitArea();
   protected:
      bool IsValid();
};

#endif //SQUARE_H 
