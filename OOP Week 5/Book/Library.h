#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"

class Library
{
   public:
      Library();
      ~Library();

      void Input();
      void Output();
   private:
      Book **mpBookList;
      int mNumOfBooks;
};

#endif //LIBRARY_H
