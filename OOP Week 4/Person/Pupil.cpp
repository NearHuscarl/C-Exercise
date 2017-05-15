// ------------------------------------------------------------
//    File Name: Pupil.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:16:30 PM
// ------------------------------------------------------------

#include <iostream>
#include "Pupil.h"
#include "Validation.h"

using namespace std;

Pupil::Pupil(string n, Birthday b, string h, int g): 
   Person(n, b, h),
   mGrade(g)
{
}

Pupil::~Pupil()
{
}

void Pupil::Input(void)
{
   Person::Input();

   cout << "Grade: ";
   cin >> mGrade;
   Validate("Grade: ", mGrade);
   cin.get();

   cout << endl;
}

void Pupil::Output(void)
{
   Person::Output();

   cout << "Grade: " << mGrade << endl;
   cout << "______________________________________" << endl;
}
