#include <iostream>
#include <string>
#include "ProductionWorker.h"

using namespace std;

ProductionWorker::ProductionWorker()
{
   mEmployeeType = 1;
}

ProductionWorker::~ProductionWorker()
{
}

void ProductionWorker::Input(void)
{
   cout << "--Production Worker--" << endl;
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
   cout << "Number of product: ";
   cin >> mProductNum;
}

void ProductionWorker::Output(void)
{
   cout << endl << "--Production Worker--" << endl;
   cout << "ID: " << mID << endl;
   cout << "Name: " << mName << endl;
   cout << "Birthday: " << mBirthday << endl;
   cout << "Address: " << mAddress << endl;
   cout << "Number of product: " << mProductNum << endl;
   cout << "________________________________" << endl;
}

float ProductionWorker::GetSalary()
{
   return 20000 * mProductNum;
}

int ProductionWorker::GetType(void)
{
   return mEmployeeType;
}
