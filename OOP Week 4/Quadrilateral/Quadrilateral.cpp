// ------------------------------------------------------------
//    File Name: Quadrilateral.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-07 12:16:40 PM
// ------------------------------------------------------------

#include "Point.h"
#include "Line.h"
#include "Quadrilateral.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Quadrilateral::Quadrilateral()
{
}

Quadrilateral::Quadrilateral(Point aA, Point aB, Point aC, Point aD):
   A(aA),
   B(aB),
   C(aC),
   D(aD),
   AB(A, B),
   BC(B, C),
   CD(C, D),
   DA(D, A)
{
}

Quadrilateral::~Quadrilateral()
{
}

void Quadrilateral::Input()
{
   cout << "A: " << endl;
   A.Input();
   cout << "B: " << endl;
   B.Input();
   cout << "C: " << endl;
   C.Input();
   cout << "D: " << endl;
   D.Input();

   AB.Init(A, B);
   BC.Init(B, C);
   CD.Init(C, D);
   DA.Init(D, A);
}

void Quadrilateral::Output()
{
   cout << "A";
   A.Output();
   cout << endl;
   cout << "B";
   B.Output();
   cout << endl;
   cout << "C";
   C.Output();
   cout << endl;
   cout << "D";
   D.Output();
   cout << endl << endl;

   cout << setprecision(3) << "AB = " << AB.GetLength() << endl;
   cout << setprecision(3) << "BC = " << BC.GetLength() << endl;
   cout << setprecision(3) << "CD = " << CD.GetLength() << endl;
   cout << setprecision(3) << "DA = " << DA.GetLength() << endl << endl;

   cout << "Area: " << setprecision(3) << GetArea() << endl << endl;
}
