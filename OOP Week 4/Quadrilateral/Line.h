// ------------------------------------------------------------
//    File Name: Line.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-07 1:18:14 PM
// ------------------------------------------------------------

#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line
{
   public:
      Line();
      Line(Point aA, Point aB);
      ~Line();

      void Init(Point, Point);
      float GetLength();
      float GetSlope();
      bool IsValid();
      bool IsOverlappedOx();
      bool IsOverlappedOy();
      bool IsParellelOx();
      bool IsParellelOy();
      friend int IsOverlapped(Line LineA, Line LineB);
   private:
      float mLength;
      Point A;
      Point B;
};

#endif //LINE_H
