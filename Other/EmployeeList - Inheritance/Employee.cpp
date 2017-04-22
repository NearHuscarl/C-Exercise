#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee():
   mID(-1),
   mName("No Name Available"),
   mBirthday(0, 0, 0),
   mAddress("No Address Available")
{
}

Employee::~Employee()
{
}

void Employee::Input(void)
{
   cout << "ID: ";
   cin >> mID;
   cout << "Name: ";
   cin.ignore();
   getline(cin, mName);
   cout << "Birthday: " << endl;
   mBirthday.Input();
   cout << "Address: ";
   cin >> mAddress;
}

void Employee::Output(void)
{
   cout << "ID: " << mID << endl;
   cout << "Name: " << mName << endl;
   cout << "Birthday: " << mBirthday << endl;
   cout << "Address: " << mAddress << endl;
   cout << "________________________________" << endl;
}

float Employee::GetSalary()
{
   return 0;
}

int Employee::GetType(void)
{
   return 0;
}
