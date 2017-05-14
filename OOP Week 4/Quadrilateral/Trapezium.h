// ------------------------------------------------------------
//    File Name: Trapezium.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:11 PM
// ------------------------------------------------------------

#ifndef TRAPAZIUM_H
#define TRAPAZIUM_H

#include "Point.h"
#include "Quadrilateral.h"
#include <string>

class Trapezium: public Quadrilateral
{
   public:
      Trapezium();
      Trapezium(Point aA, Point aB, Point aC, Point aD);
      ~Trapezium();

      void Input();
      void Output();
      float GetArea();
   private:
      void InitArea();
   protected:
      bool IsValid();
};


#endif //TRAPAZIUM_H 
