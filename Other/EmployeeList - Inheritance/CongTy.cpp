#include <iostream>
#include <iomanip>
#include "CongTy.h"

using namespace std;

enum EmployeeType {
   PD_WORKER = 1,
   DAY_LABORER,
   MANAGER
};

CCongTy::CCongTy():
   mPdWorkerCount(0),
   mDayLaborerCount(0),
   mManagerCount(0)
{
}

CCongTy::CCongTy(const CCongTy &c)
{
   mTotal           = c.mTotal;
   mPdWorkerCount   = c.mPdWorkerCount;
   mDayLaborerCount = c.mDayLaborerCount;
   mManagerCount    = c.mManagerCount;

   mpEmployeeList = new Employee*[mTotal];
   for(int i = 0; i < mTotal; i++)
   {
      switch(c.mpEmployeeList[i]->GetType())
      {
         case PD_WORKER:
            mpEmployeeList[i] = new ProductionWorker;
            *mpEmployeeList[i] = *c.mpEmployeeList[i];
            break;
         case DAY_LABORER:
            mpEmployeeList[i] = new DayLaborer;
            *mpEmployeeList[i] = *c.mpEmployeeList[i];
            break;
         case MANAGER:
            mpEmployeeList[i] = new Manager;
            *mpEmployeeList[i] = *c.mpEmployeeList[i];
            break;
      }
   }
}

CCongTy::~CCongTy()
{
   for(int i = 0; i < mTotal; i++)
   {
      delete mpEmployeeList[i];
   }
   delete [] mpEmployeeList;
}

void CCongTy::Input(void)
{
   cout << "Number of employee: ";
   cin >> mTotal;

   mpEmployeeList = new Employee*[mTotal];
   int choice;

   for(int i = 0; i < mTotal; i++)
   {
      system("cls");
      cout << "Choose Employee type to enter input: " << endl;
      cout << "  1: Production Worker" << endl;
      cout << "  2: Day Laborer" << endl;
      cout << "  3: Manager" << endl;
      cout << "Choice: ";
      cin >> choice;
      while(choice != 1 && choice != 2 && choice != 3)
      {
         cout << "Invalid Input. Choice: ";
         cin >> choice;
      }
      switch(choice)
      {
         case PD_WORKER:
            mpEmployeeList[i] = new ProductionWorker;
            mpEmployeeList[i]->Input();
            mPdWorkerCount++;
            break;
         case DAY_LABORER:
            mpEmployeeList[i] = new DayLaborer;
            mpEmployeeList[i]->Input();
            mDayLaborerCount++;
            break;
         case MANAGER:
            mpEmployeeList[i] = new Manager;
            mpEmployeeList[i]->Input();
            mManagerCount++;
            break;
      }
   }
}

void CCongTy::Output(void)
{
   if(mPdWorkerCount > 0)
   {
      for(int i = 0; i < mTotal; i++)
      {
         if(mpEmployeeList[i]->GetType() == PD_WORKER)
         {
            mpEmployeeList[i]->Output();
         }
      }
   }
   if(mDayLaborerCount > 0)
   {
      for(int i = 0; i < mTotal; i++)
      {
         if(mpEmployeeList[i]->GetType() == DAY_LABORER)
         {
            mpEmployeeList[i]->Output();
         }
      }
   }
   if(mManagerCount > 0)
   {
      for(int i = 0; i < mTotal; i++)
      {
         if(mpEmployeeList[i]->GetType() == MANAGER)
         {
            mpEmployeeList[i]->Output();
         }
      }
   }
}

float CCongTy::PrintTotalWage(void)
{
   float total = 0;

   for(int i = 0; i < mTotal; i++)
   {
      total+= mpEmployeeList[i]->GetSalary();
   }
   return total;
}

void CCongTy::PrintHighestSalary(void)
{
   int maxIndex = 0;
   float maxSalary = 0;

   for(int i = 0; i < mTotal; i++)
   {
      if(mpEmployeeList[i]->GetSalary() > maxSalary)
      {
         maxIndex = i;
         maxSalary = mpEmployeeList[i]->GetSalary();
      }
   }

   cout << "Employee with highest salary: " << endl;
   mpEmployeeList[maxIndex]->Output();
   cout << setprecision(8) << "Salary: " << mpEmployeeList[maxIndex]->GetSalary();
}
