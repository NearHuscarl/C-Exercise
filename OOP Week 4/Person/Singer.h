// ------------------------------------------------------------
//    File Name: Singer.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:53:36 PM
// ------------------------------------------------------------

#ifndef SINGER_H
#define SINGER_H

#include "Artist.h"

using std::string;

class Singer: public Artist
{
   private:
      string mGenre;
      string mDebutAlbum;
   public:
      Singer(
            string n = "N/A", 
            Birthday b = Birthday(),
            string h = "N/A",
            string s = "N/A",
            string g = "N/A",
            string d = "N/A");
      ~Singer();

      void Input();
      void Output();
};

#endif //SINGER_H
