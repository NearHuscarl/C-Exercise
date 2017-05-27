#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
   Shape *s = nullptr;
   int choice = -1, subChoice;

   while(choice != 3)
   {
      system("cls");
      cout << "1: Input" << endl;
      cout << "2: Output" << endl;
      cout << "3: Exit" << endl;
      cout << "Choice: ";
      cin >> choice;

      switch(choice)
      {
         case 1:
            {
               system("cls");
               cout << "Choose a type of shape: " << endl;
               cout << "1: Rectangle" << endl;
               cout << "2: Triangle" << endl;
               cout << "3: Circle" << endl;
               cout << "Choice: ";
               cin >> subChoice;
               cout << endl;

               switch(subChoice)
               {
                  case 1:
                     s = new Rectangle;
                     break;
                  case 2:
                     s = new Triangle;
                     break;
                  case 3:
                     s = new Circle;
                     break;
                  default:
                     break;
               }
               s->Input();
            }
         case 2:
            if(s)
            {
               s->Output();
               cin.get();
               cin.get();
            }
            break;
         case 3:
            break;
         default:
            break;
      }
   }
}
