#include <iostream>
#include "Weapon.h"
#include "Controller.h"

using namespace std;

int main()
{
   Controller c;
   bool exitFlag = false;
   int target;
   int choice;

   while(true)
   {
      system("cls");
      cout << "Press 0 to exit" << endl;
      cout << "Press 1 to choose target from the controller" << endl;
      cout << "Press 2 to fire from the controller" << endl;
      cout << "Choice: ";
      cin >> choice;
      switch(choice)
      {
         case 0:
            exitFlag = true;
            break;
         case 1:
            c.ChooseTarget();
            break;
         case 2:
            c.ActivateButton();
            break;
      }

      if(exitFlag)
      {
         break;
      }
      cin.get();
      cin.get();
   }
   return 0;
}
