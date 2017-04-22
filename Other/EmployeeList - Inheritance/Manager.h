#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager: public Employee
{
   public:
      Manager();
      ~Manager();

      void Input();
      void Output();
      float GetSalary();
      int GetType();
};


#endif //MANAGER_H 
