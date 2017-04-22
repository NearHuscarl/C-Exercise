#include <iostream>
#include <string>
#include "DayLaborer.h"

using namespace std;

DayLaborer::DayLaborer()
{
   mEmployeeType = 2;
}

DayLaborer::~DayLaborer()
{
}

void DayLaborer::Input(void)
{
   cout << "--DayLaborer--" << endl;
   cout << "ID: ";
   cin >> mID;
   cout << "Name: ";
   cin.ignore();
   getline(cin, mName);
   cout << "Birthday: " << endl;
   mBirthday.Input();
   cout << "Address: ";
   cin.ignore();
   getline(cin, mAddress);
   cout << "Day: ";
   cin >> mDay;
}

void DayLaborer::Output(void)
{
   cout << endl << "--DayLaborer--" << endl;
   cout << "ID: " << mID << endl;
   cout << "Name: " << mName << endl;
   cout << "Birthday: " << mBirthday << endl;
   cout << "Address: " << mAddress << endl;
   cout << "Day: " << mDay << endl;
   cout << "________________________________" << endl;
}

float DayLaborer::GetSalary()
{
   //WIP
   return 55000 * mDay;
}

int DayLaborer::GetType(void)
{
   return mEmployeeType;
}
