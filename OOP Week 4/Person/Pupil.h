// ------------------------------------------------------------
//    File Name: Pupil.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:15:52 PM
// ------------------------------------------------------------

#ifndef PUPIL_H
#define PUPIL_H

#include "Person.h"

using std::string;

class Pupil: public Person
{
   private:
      int mGrade;
   public:
      Pupil(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A",
            int g = 1);
      ~Pupil();

      void Input();
      void Output();
};

#endif //PUPIL_H
