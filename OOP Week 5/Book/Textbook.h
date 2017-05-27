#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "Book.h"

using std::string;

class Textbook: public Book
{
   public:
      Textbook(
            string n = "N/A",
            string p = "N/A",
            int py = 0,
            int pg = 0,
            double pr = 0.0,
            int g = 0);
      ~Textbook();

      void Input();
      void Output();
   private:
      int mGrade;
};

#endif //TEXTBOOK_H
