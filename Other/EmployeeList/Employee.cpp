#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int Employee::msIdCount = 0;

Employee::Employee()
{
}

void Employee::Input(void)
{
   cout << "Enter Employee Code: ";
   cin >> mCode;
   cin.ignore();
   cout << "Enter Employee Name: ";
   getline(cin, mName);
   cout << "Enter Employee Department: ";
   cin >> mDepartment;
   cout << "Enter Employee Basic Wage: ";
   cin >> mBasicWage;
   cout << "Enter Empolyee Bonus: ";
   cin >> mBonus;
   mNetWage = mBasicWage + mBonus;
}

void Employee::Output(void)
{
   cout << "______________" << endl;
   cout << "Empolyee Code:" << mCode << endl;
   cout << "Empolyee Name:" << mName << endl;
   cout << "Empolyee Department:" << mDepartment << endl;
   cout << "Empolyee Salary:" << mBasicWage << endl;
   cout << "Empolyee Bonus:" << mBonus << endl;
   cout << "Empolyee Net Wage:" << mNetWage << endl;
   cout << "______________" << endl;
}

void Employee::Assign(Employee &x)
{
   mCode = x.mCode;
   mName = x.mName;
   mDepartment = x.mDepartment;
   mBasicWage = x.mBasicWage;
   mBonus = x.mBonus;
   mNetWage = x.mNetWage;
}

string Employee::GetCode(void)
{
   return mCode;
}

string Employee::GetDepartment(void)
{
   return mDepartment;
}

long Employee::GetBasicWage(void)
{
   return mBasicWage;
}

long Employee::GetBonus(void)
{
   return mBonus;
}

long Employee::GetNetWage(void)
{
   return mNetWage;
}

