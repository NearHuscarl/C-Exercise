#include <iostream>
#include "Chessboard.h"

using namespace std;

int main()
{
   Chessboard cb;

   while(true)
   {
      system("cls");
      if(!cb.Select())
      {
         break;
      }
      cin.get();
      cb.ShowInfo();
      cin.get();
   }

   return 0;
}
