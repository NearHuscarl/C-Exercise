#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee 
{
   private:
      string mCode;
      string mName;
      string mDepartment;
      long mBasicWage;
      long mBonus;
      long mNetWage;
      static int msIdCount;
   public:
      Employee();
      void Input();
      void Output();
      void Assign(Employee&);
      string GetCode();
      string GetDepartment();
      long GetBasicWage();
      long GetBonus();
      long GetNetWage();
};


#endif //EMPLOYEE_H 
