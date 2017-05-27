#ifndef NOVEL_H
#define NOVEL_H

#include "Book.h"

using std::string;

class Novel: public Book
{
   public:
      Novel(
            string n = "N/A",
            string p = "N/A",
            int py = 0,
            int pg = 0,
            double pr = 0.0,
            string t = "N/A");
      ~Novel();

      void Input();
      void Output();
   private:
      string mType;
};

#endif //NOVEL_H
