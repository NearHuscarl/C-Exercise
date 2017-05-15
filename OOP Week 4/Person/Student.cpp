// ------------------------------------------------------------
//    File Name: Student.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:11:14 PM
// ------------------------------------------------------------

#include <iostream>
#include "Student.h"
#include "Validation.h"

using namespace std;

Student::Student(string n, Birthday b, string h, int i, string m):
   Person(n, b, h),
   mID(i),
   mMajor(m)
{
}

Student::~Student()
{
}

void Student::Input(void)
{
   Person::Input();

   cout << "ID: ";
   cin >> mID;
   Validate("ID: ", mID);

   cout << "Major: ";
   cin.ignore();
   getline(cin, mMajor);
   Validate("Major: ", mMajor);

   cout << endl;
}

void Student::Output(void)
{
   Person::Output();

   cout << "ID: " << mID << endl;
   cout << "Major: " << mMajor << endl;
   cout << "______________________________________" << endl;
}
