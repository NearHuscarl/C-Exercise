// ------------------------------------------------------------
//    File Name: Trapezium.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 9:32:16 PM
// ------------------------------------------------------------

#include "Point.h"
#include "Quadrilateral.h"
#include "Trapezium.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

Trapezium::Trapezium()
{
}

Trapezium::Trapezium(Point aA, Point aB, Point aC, Point aD):
   Quadrilateral(aA, aB, aC, aD)
{
   if(!IsValid())
   {
      throw, "Invalid Arguments";
   }
   InitArea();
}

Trapezium::~Trapezium()
{
}

bool Trapezium::IsValid(void)
{
   if(
         AB.IsParellelOx() && CD.IsParellelOx() && IsOverlapped(AB, CD) == 1 ||
         BC.IsParellelOx() && DA.IsParellelOx() && IsOverlapped(BC, DA) == 1
     )
   {
      return true;
   }
   return false;
}

void Trapezium::InitArea(void)
{
   if(AB.IsParellelOx() && CD.IsParellelOx())
   {
      float height = abs(A.GetY() - D.GetY());
      mArea = ( (AB.GetLength() + CD.GetLength()) * height ) / 2;
   }
   else //BC || DA
   {
      float height = abs(B.GetY() - A.GetY());
      mArea = ( (BC.GetLength() + DA.GetLength()) * height ) / 2;
   }
}

float Trapezium::GetArea(void)
{
   return mArea;
}

void Trapezium::Input()
{
   Quadrilateral::Input();
   while(!IsValid())
   {
      cout << "Invalid Input. Try again:\n";
      Quadrilateral::Input();
   }
   InitArea();
}

void Trapezium::Output()
{
   cout << "--Trapezium--" << endl;
   Quadrilateral::Output();

   cout << "Property: " << endl;
   if(AB.IsParellelOx() && CD.IsParellelOx())
   {
      cout << "AB is parellel to CD" << endl;
   }
   else //BC || DA
   {
      cout << "BC is parellel to DA" << endl;
   }
   cout << endl;
}
