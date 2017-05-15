// ------------------------------------------------------------
//    File Name: Worker.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:47:02 PM
// ------------------------------------------------------------

#ifndef WORKER_H
#define WORKER_H

#include "Person.h"

using std::string;

class Worker: public Person
{
   private:
      int mID;
      float mSalary;
   public:
      Worker(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A",
            int i = 0,
            float s = 0.0);
      ~Worker();

      void Input();
      void Output();
};

#endif //WORKER_H

