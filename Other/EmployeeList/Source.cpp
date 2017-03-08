#include "Employee.h"
#include "EmployeeList.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

   EmployeeList elA;
   elA.Input();
   cout << "Total Net Wage is: " << elA.TotalNetWage() << endl;
   elA.PrintLowestWage();
   cout << elA.BonusCount() << " employees has bonus bigger than 1.2000.000" << endl;
   elA.PrintEmployeeSort();

   system("pause");
   return 0;
}

