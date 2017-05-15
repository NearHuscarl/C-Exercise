// ------------------------------------------------------------
//    File Name: Person.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 11:25:07 AM
// ------------------------------------------------------------

#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"
#include <string>

using std::string;

class Person
{
   protected:
      string mName;
      Birthday mBirthday;
      string mHometown;
   public:
      Person(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A");
      ~Person();

      void Input();
      void Output();
};

#include "Student.h"
#include "Pupil.h"
#include "Worker.h"
#include "Artist.h"

#endif //PERSON_H
