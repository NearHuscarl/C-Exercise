// ------------------------------------------------------------
//    File Name: Point.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-07 12:16:58 PM
// ------------------------------------------------------------

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(int a, int b)
   :mX(a), mY(b)
{
}

Point::~Point()
{
}

void Point::Input()
{
   cout << "x: ";
   cin >> mX;
   cout << "y: ";
   cin >> mY;
}

void Point::Output()
{
   cout << "(" << mX << ", " << mY << ")";
}

int Point::GetX()
{
   return mX;
}

int Point::GetY()
{
   return mY;
}

void Point::SetXY(int aX, int aY)
{
   mX = aX;
   mY = aY;
}

double Length(Point a, Point b)
{
   return sqrt(pow((a.mX - b.mX), 2) + pow((a.mY - b.mY), 2));
}

bool IsOverlapped(Point A, Point B)
{
   if(A.GetX() == B. GetX() && A.GetY() == B.GetY())
   {
      return true;
   }
   return false;
}
