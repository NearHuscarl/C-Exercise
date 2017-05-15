// ------------------------------------------------------------
//    File Name: Artist.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:58:07 PM
// ------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include "Artist.h"
#include "Validation.h"

using namespace std;

Artist::Artist(string n, Birthday b, string h, string s): 
   Person(n, b, h),
   mStageName(s)
{
}

Artist::~Artist()
{
}

void Artist::Input(void)
{
   Person::Input();

   cout << "Stage Name: ";
   getline(cin, mStageName);
   Validate("Stage Name: ", mStageName);
}

void Artist::Output(void)
{
   Person::Output();

   cout << "Stage Name: " << mStageName << endl;
   cout << "______________________________________" << endl;
}
