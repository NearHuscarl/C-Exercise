#ifndef CCONGTY_H
#define CCONGTY_H

#include "Employee.h"

class CCongTy 
{
   private:
      int mTotal;
      int mPdWorkerCount;
      int mDayLaborerCount;
      int mManagerCount;
      Employee** mpEmployeeList;
   public:
      CCongTy();
      CCongTy(const CCongTy&);
      ~CCongTy();

      void Input();
      void Output();
      float PrintTotalWage();
      void PrintHighestSalary();
};

#endif //CCONGTY_H 
