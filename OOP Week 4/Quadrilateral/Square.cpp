// ------------------------------------------------------------
//    File Name: Square.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-14 6:17:43 PM
// ------------------------------------------------------------

#include "Square.h"
#include <iostream>
#include <cmath>

using namespace std;

Square::Square()
{
}

Square::Square(Point aA, Point aB, Point aC, Point aD):
   Rectangle(aA, aB, aC, aD)
{
   if(!IsValid())
   {
      throw, "Invalid Arguments";
   }
   InitArea();
}

Square::~Square()
{
}

bool Square::IsValid(void)
{
   if(
         Rectangle::IsValid() && 
         AB.GetLength() == BC.GetLength() &&
         BC.GetLength() == CD.GetLength() &&
         CD.GetLength() == DA.GetLength() &&
         DA.GetLength() == AB.GetLength()
     )
   {
      return true;
   }
   return false;
}

void Square::InitArea(void)
{
   mArea = AB.GetLength() * AB.GetLength();
}

float Square::GetArea(void)
{
   return mArea;
}

void Square::Input()
{
   Quadrilateral::Input();
   while(!IsValid())
   {
      cout << "Invalid Input. Try again:\n";
      Quadrilateral::Input();
   }
   InitArea();
}

void Square::Output()
{
   cout << "--Square--" << endl;
   Quadrilateral::Output();

   cout << "Property: " << endl;
   cout << "AB is parellel to CD" << endl;
   cout << "BC is parellel to DA" << endl;
   cout << "AB and CD is perpendicular to BC and DA" << endl;
   cout << "AB length is equal to BC, CD and DA" << endl;
   cout << endl;
}

