// ------------------------------------------------------------
//    File Name: Rectangle.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 5:50:43 PM
// ------------------------------------------------------------

#include "Point.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Point aA, Point aB, Point aC, Point aD):
   Parallelogram(aA, aB, aC, aD)
{
   if(!IsValid())
   {
      throw, "Invalid Arguments";
   }
   InitArea();
}

Rectangle::~Rectangle()
{
}

bool Rectangle::IsValid(void)
{
   if(Parallelogram::IsValid() && AB.IsParellelOy() && CD.IsParellelOy() ||
      Parallelogram::IsValid() && BC.IsParellelOy() && DA.IsParellelOy()
     )
   {
      return true;
   }
   return false;
}

void Rectangle::InitArea(void)
{
   mArea = AB.GetLength() * BC.GetLength();
}

float Rectangle::GetArea(void)
{
   return mArea;
}

void Rectangle::Input()
{
   Quadrilateral::Input();
   while(!IsValid())
   {
      cout << "Invalid Input. Try again:\n";
      Quadrilateral::Input();
   }
   InitArea();
}

void Rectangle::Output()
{
   cout << "--Rectangle--" << endl;
   Quadrilateral::Output();

   cout << "Property: " << endl;
   if(AB.GetLength() > BC.GetLength())
   {
      cout << "AB and CD is longer than BC and DA" << endl;
   }
   else if(AB.GetLength() < BC.GetLength())
   {
      cout << "BC and DA is longer than AB and CD" << endl;
   }
   cout << "AB is parellel to CD" << endl;
   cout << "BC is parellel to DA" << endl;
   cout << "AB and CD is perpendicular to BC and DA" << endl;
   cout << endl;
}
