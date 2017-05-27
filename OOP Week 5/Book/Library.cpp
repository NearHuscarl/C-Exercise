#include <iostream>
#include "Library.h"

using namespace std;

Library::Library()
{
}

Library::~Library()
{
   for(int i = 0; i < mNumOfBooks; i++)
   {
      delete mpBookList[i];
   }
   delete [] mpBookList;
}

void Library::Input(void)
{
   cout << "Number of Books: ";
   cin >> mNumOfBooks;

   mpBookList = new Book*[mNumOfBooks];

   int choice;
   for(int i = 0; i < mNumOfBooks; i++)
   {
      system("cls");
      cout << "Choose what one type of book: " << endl;
      cout << "1: Textbook" << endl;
      cout << "2: Novel" << endl;
      cout << "3: Magazine" << endl;
      cout << "Choice: ";
      cin >> choice;

      switch(choice)
      {
         case 1:
            mpBookList[i] = new Textbook;
            mpBookList[i]->Input();
            break;
         case 2:
            mpBookList[i] = new Novel;
            mpBookList[i]->Input();
            break;
         case 3:
            mpBookList[i] = new Magazine;
            mpBookList[i]->Input();
            break;
         default:
            break;
      }
   }
}

void Library::Output(void)
{
   for(int i = 0; i < mNumOfBooks; i++)
   {
      mpBookList[i]->Output();
   }
}
