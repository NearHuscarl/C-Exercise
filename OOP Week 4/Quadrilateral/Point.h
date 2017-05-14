// ------------------------------------------------------------
//    File Name: Point.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-07 12:16:52 PM
// ------------------------------------------------------------

#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
   private:
      int mX;
      int mY;
   public:
      Point(int a = 0, int b = 0);
      ~Point();

      void Input();
      void Output();
      void SetXY(int aX, int aY);
      int GetX();
      int GetY();
      friend double Length(Point, Point);
      friend bool IsOverlapped(Point, Point);
};

#endif //POINT_H
