// ------------------------------------------------------------
//    File Name: Line.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:54 PM
// ------------------------------------------------------------

#include "Point.h"
#include "Line.h"
#include <cmath>

using namespace std;

Line::Line()
{
}

Line::Line(Point aA, Point aB):
   A(aA),
   B(aB),
   mLength(sqrt(pow(A.GetX()-B.GetX(), 2) + pow(A.GetY()-B.GetY(), 2)))
{
   if(!IsValid())
   {
      throw, "Invalid arguments";
   }
}

Line::~Line()
{
}

void Line::Init(Point aA, Point aB)
{
   A = aA;
   B = aB;
   mLength = sqrt(pow(A.GetX()-B.GetX(), 2) + pow(A.GetY()-B.GetY(), 2));
}

float Line::GetLength(void)
{
   return mLength;
}

bool Line::IsValid(void)
{
   if(IsOverlapped(A, B))
   {
      return false;
   }
   return true;
}

bool Line::IsOverlappedOx(void)
{
   if(A.GetX() != B.GetX() && A.GetY() == B.GetY() == 0)
   {
      return true;
   }
   return false;
}

bool Line::IsOverlappedOy(void)
{
   if(A.GetY() != B.GetY() && A.GetX() == B.GetX() == 0)
   {
      return true;
   }
   return false;
}

bool Line::IsParellelOx(void)
{
   if(A.GetX() != B.GetX() && A.GetY() == B.GetY())
   {
      return true;
   }
   return false;
}

bool Line::IsParellelOy(void)
{
   if(A.GetY() != B.GetY() && A.GetX() == B.GetX())
   {
      return true;
   }
   return false;
}

int IsOverlapped(Line LineA, Line LineB)
{
   if(
         LineA.A.GetX() == LineA.B.GetX() == LineB.A.GetX() == LineB.B.GetX() ||
         LineA.A.GetY() == LineA.B.GetY() == LineB.A.GetY() == LineB.B.GetY()
     )
   {
      return 1;
   }
   return -1; //Unknown
}
