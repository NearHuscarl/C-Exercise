#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Book.h"

using std::string;

class Magazine: public Book
{
   public:
      Magazine(
            string n = "N/A",
            string p = "N/A",
            int py = 0,
            int pg = 0,
            double pr = 0.0,
            string pt = "N/A");
      ~Magazine();

      void Input();
      void Output();
   private:
      string mPeriodicalType;
};

#endif //MAGAZINE_H
