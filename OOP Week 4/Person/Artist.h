// ------------------------------------------------------------
//    File Name: Artist.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:56:57 PM
// ------------------------------------------------------------

#ifndef ARTIST_H
#define ARTIST_H

#include "Person.h"

using std::string;

class Artist: public Person
{
   protected:
      string mStageName;
   public:
      Artist(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A",
            string s = "N/A");
      ~Artist();

      void Input();
      void Output();
};

#include "Singer.h"

#endif //ARTIST_H
