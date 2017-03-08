#include <iostream>
#include "Employee.h"
#include "EmployeeList.h"

using namespace std;

EmployeeList::EmployeeList():
   mpEmployeeList(nullptr)
{
}

EmployeeList::~EmployeeList()
{
   delete [] mpEmployeeList;
}

void EmployeeList::Input(void)
{
   cout << "Enter Number of Employees: ";
   cin >> mMax;
   mpEmployeeList = new Employee[mMax];
   for(int i = 0; i < mMax; i++)
   {
      mpEmployeeList[i].Input();
   }
}

void EmployeeList::Output(void)
{
   for(int i = 0; i < mMax; i++)
   {
      cout << "List of Employees: " << endl;
      mpEmployeeList[i].Output();
   }
   cout << "___________________________" << endl;
}

void EmployeeList::Swap(Employee ft, Employee se)
{
   Employee temp;
   temp.Assign(ft);
   ft.Assign(se);
   se.Assign(temp);
}

void EmployeeList::PrintLowestWage(void)
{
   cout << "Employees with lowest income: " << endl;
   for(int i = 0; i < mMax; i++)
   {
      if(mpEmployeeList[i].GetBasicWage() < B_WAGE_THRESHOLD)
      {
         mpEmployeeList[i].Output();
      }
   }
   cout << "___________________________________" << endl;
}

long EmployeeList::TotalNetWage(void)
{
   int total = 0;
   for(int i = 0; i < mMax; i++)
   {
      total+= mpEmployeeList[i].GetNetWage();
   }
   return total;
}

int EmployeeList::BonusCount(void)
{
   int count = 0;
   for(int i = 0; i < mMax; i++)
   {
      if(mpEmployeeList[i].GetBonus() >= long(1200000))
      {
         count++;
      }
   }
   return count;
}

void EmployeeList::PrintEmployeeSort(void)
{

   //Sort by department (First sort)
   for(int i = 0; i < mMax - 1; i++)
   {
      for(int j = i; j < mMax; j++)
      {
         if(mpEmployeeList[i].GetDepartment() > mpEmployeeList[j].GetDepartment())
         {
            swap(mpEmployeeList[i], mpEmployeeList[j]);
         }
      }
   }

   //Sort by employee code (Second sort)
   int begin, end;
   for(int i = 0; i < mMax - 1; i++)
   {
      if(mpEmployeeList[i].GetDepartment() == mpEmployeeList[i+1].GetDepartment())
      {
         begin = i;
         for(int j = begin; mpEmployeeList[j].GetDepartment() == mpEmployeeList[j+1].GetDepartment(); j++)
         {
            if(j == mMax - 1)
            {
               end = j;
               break;
            }
            end = j+1;
         }
         for(int k = begin; k <= end - 1; k++)
         {
            for(int h = k+1; h <= end; h++)
            {
               if(begin == end)
               {
                  break;
               }
               if(mpEmployeeList[k].GetCode() < mpEmployeeList[h].GetCode())
               {
                  swap(mpEmployeeList[k], mpEmployeeList[h]);
               }
            }
         }
         i = end + 1;
      }
   }
   (*this).Output();
}
