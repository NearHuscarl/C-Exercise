#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
   Board b;

   while(true)
   {
      system("cls");
      if(!b.Select())
      {
         break;
      }
      cin.get();
      b.ShowInfo();
      cin.get();
   }

   return 0;
}
