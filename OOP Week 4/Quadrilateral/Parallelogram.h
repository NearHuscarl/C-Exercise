// ------------------------------------------------------------
//    File Name: Parallelogram.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:26 PM
// ------------------------------------------------------------

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Trapezium.h"

class Parallelogram: public Trapezium
{
   public:
      Parallelogram();
      Parallelogram(Point aA, Point aB, Point aC, Point aD);
      ~Parallelogram();

      void Input();
      void Output();
      float GetArea();
   private:
      void InitArea();
   protected:
      bool IsValid();
};

#include "Rectangle.h"

#endif //PARALLELOGRAM_H 
