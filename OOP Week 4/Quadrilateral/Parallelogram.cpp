// ------------------------------------------------------------
//    File Name: Parallelogram.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 5:50:39 PM
// ------------------------------------------------------------

#include "Parallelogram.h"
#include <iostream>
#include <cmath>

using namespace std;

Parallelogram::Parallelogram()
{
}

Parallelogram::Parallelogram(Point aA, Point aB, Point aC, Point aD):
   Trapezium(aA, aB, aC, aD)
{
   if(!IsValid())
   {
      throw, "Invalid Arguments";
   }
   InitArea();
}

Parallelogram::~Parallelogram()
{
}

bool Parallelogram::IsValid(void)
{
   if(
         Trapezium::IsValid() && 
         AB.GetLength() == CD.GetLength() &&
         BC.GetLength() == DA.GetLength()
     )
   {
      return true;
   }
   return false;
}

void Parallelogram::InitArea(void)
{
   float height;
   if(AB.IsParellelOx() && CD.IsParellelOx())
   {
      height = abs(A.GetY() - D.GetY());
      mArea = height * CD.GetLength();
   }
   else if(BC.IsParellelOx() && DA.IsParellelOx())
   {
      height = abs(C.GetY() - D.GetY());
      mArea = height * BC.GetLength();
   }
}

float Parallelogram::GetArea(void)
{
   return mArea;
}

void Parallelogram::Input()
{
   Quadrilateral::Input();
   while(!IsValid())
   {
      cout << "Invalid Input. Try again:\n";
      Quadrilateral::Input();
   }
   InitArea();
}

void Parallelogram::Output()
{
   cout << "--Parallelogram--" << endl;
   Quadrilateral::Output();

   cout << "Property: " << endl;
   cout << "AB is parellel to CD" << endl;
   cout << "BC is parellel to DA" << endl;
   cout << endl;
}
