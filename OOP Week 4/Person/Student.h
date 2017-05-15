// ------------------------------------------------------------
//    File Name: Student.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 11:31:07 AM
// ------------------------------------------------------------

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

using std::string;

class Student: public Person
{
   private:
      int mID;
      string mMajor;
   public:
      Student(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A",
            int i = 0,
            string m = "N/A");
      ~Student();

      void Input();
      void Output();
};

#endif //STUDENT_H
