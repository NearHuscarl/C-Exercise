// ------------------------------------------------------------
//    File Name: Worker.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:51:40 PM
// ------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include "Worker.h"
#include "Validation.h"

using namespace std;

Worker::Worker(string n, Birthday b, string h, int i, float s): 
   Person(n, b, h),
   mID(i),
   mSalary(s)
{
}

Worker::~Worker()
{
}

void Worker::Input(void)
{
   Person::Input();

   cout << "ID: ";
   cin >> mID;
   Validate("ID: ", mID);

   cout << "Salary: ";
   cin >> mSalary;
   Validate("Salary: ", mSalary);
   cin.get();

   cout << endl;
}

void Worker::Output(void)
{
   Person::Output();

   cout << "ID: " << mID << endl;
   cout << "Salary: " << setprecision(8) << mSalary << endl;
   cout << "______________________________________" << endl;
}
