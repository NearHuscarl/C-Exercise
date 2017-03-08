#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include "Employee.h"
#include <string>
using namespace std;

class EmployeeList 
{
   private:
      int mMax;
      int mID;
      const long B_WAGE_THRESHOLD = 1000000;
      Employee * mpEmployeeList;
   public:
      EmployeeList();
      ~EmployeeList();
      void Input();
      void Output();
      void Swap(Employee f, Employee s);
      void PrintLowestWage();
      void PrintEmployeeSort();
      long TotalNetWage();
      int BonusCount();
};

#endif //EMPLOYEELIST_H 
