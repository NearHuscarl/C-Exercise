#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker: public Employee 
{
   private:
      int mProductNum;
   public:
      ProductionWorker();
      ~ProductionWorker();

      void Input();
      void Output();
      float GetSalary();
      int GetType();
};

#endif //PRODUCTIONWORKER_H 
