#include <iostream>
#include <string>
#include "Manager.h"

using namespace std;

const float gCoefficient = 5.5;
const float gBasicWage = 5000000;

Manager::Manager()
{
   mEmployeeType = 3;
}

Manager::~Manager()
{
}

void Manager::Input(void)
{
   cout << "--Manager--" << endl;
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
}

void Manager::Output(void)
{
   cout << endl << "--Manager--" << endl;
   cout << "ID: " << mID << endl;
   cout << "Name: " << mName << endl;
   cout << "Birthday: " << mBirthday << endl;
   cout << "Address: " << mAddress << endl;
   cout << "________________________________" << endl;
}

float Manager::GetSalary()
{
   return gCoefficient * gBasicWage;
}

int Manager::GetType(void)
{
   return mEmployeeType;
}
