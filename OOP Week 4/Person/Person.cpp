// ------------------------------------------------------------
//    File Name: Person.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:11:31 PM
// ------------------------------------------------------------

#include <iostream>
#include "Validation.h"
#include "Person.h"

using namespace std;

Person::Person(string n, Birthday b, string h):
   mName(n),
   mBirthday(b),
   mHometown(h)
{
}

Person::~Person()
{
}

void Person::Input(void)
{
   cout << "Name: ";
   cin.ignore();
   getline(cin, mName);
   Validate("Name: ", mName);

   cout << "Birthday: " << endl;
   mBirthday.Input();

   cout << "Hometown: ";
   cin.ignore();
   getline(cin, mHometown);
   Validate("Hometown: ", mHometown);
}

void Person::Output(void)
{
   cout << "Name: " << mName << endl;

   cout << "Birthday: ";
   mBirthday.Output();
   cout << endl;

   cout << "Hometown: " << mHometown << endl;
}
