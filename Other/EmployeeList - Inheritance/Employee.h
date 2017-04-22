#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Birthday.h"

class Employee 
{
   protected:
      int mID;
      int mEmployeeType;
      std::string mName;
      Birthday mBirthday;
      std::string mAddress;
   public:
      Employee();
      ~Employee();

      virtual void Input();
      virtual void Output();
      virtual float GetSalary();
      virtual int GetType();
};

#include "ProductionWorker.h"
#include "DayLaborer.h"
#include "Manager.h"

#endif //EMPLOYEE_H 
