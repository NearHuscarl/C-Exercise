#ifndef BOOK_H
#define BOOK_H

#include <string>

using std::string;

class Book
{
   public:
      Book(
            string n = "N/A",
            string p = "N/A",
            int py = 0,
            int pg = 0,
            double pr = 0.0);
      ~Book();

      virtual void Input();
      virtual void Output();
   protected:
      string mTitle;
      string mPublisher;
      int mPublishingYear;
      int mNumOfPages;
      int mPrice;
};

#include "Textbook.h"
#include "Novel.h"
#include "Magazine.h"

#endif //BOOK_H
