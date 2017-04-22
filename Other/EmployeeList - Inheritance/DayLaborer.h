#ifndef DAYLABORER_H
#define DAYLABORER_H

#include "Employee.h"

class DayLaborer: public Employee
{
   private:
      int mDay;
   public:
      DayLaborer();
      ~DayLaborer();

      void Input();
      void Output();
      float GetSalary();
      int GetType();
};

#endif //DAYLABORER_H 
