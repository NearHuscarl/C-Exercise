#include <iostream>
#include "Person.h"
#include "Validation.h"

using namespace std;

int main()
{
   int choice = 0;

   while(choice != -1)
   {
      system("cls");
      cout << "Choose Individiual:" << endl;
      cout << "0: Exit" << endl;
      cout << "1: Student" << endl;
      cout << "2: Pupil" << endl;
      cout << "3: Worker" << endl;
      cout << "4: Artist" << endl;
      cout << "5: Singer" << endl;
      cout << "Choice: ";
      cin >> choice;
      Validate("Choice: ", choice);

      switch(choice)
      {
         case 0:
            choice = -1;
            break;
         case 1:
            {
               cout << "--Student--" << endl;
               Student s;
               s.Input();
               cout << endl << "--Output--" << endl;
               s.Output();
               cin.get();
               break;
            }
         case 2:
            {
               cout << "--Pupil--" << endl;
               Pupil p;
               p.Input();
               cout << endl << "--Output--" << endl;
               p.Output();
               cin.get();
               break;
            }
         case 3:
            {
               cout << "--Worker--" << endl;
               Worker w;
               w.Input();
               cout << endl << "--Output--" << endl;
               w.Output();
               cin.get();
               break;
            }
         case 4:
            {
               cout << "--Artist--" << endl;
               Artist a;
               a.Input();
               cout << endl << "--Output--" << endl;
               a.Output();
               cin.get();
               break;
            }
         case 5:
            {
               cout << "--Singer--" << endl;
               Singer s;
               s.Input();
               cout << endl << "--Output--" << endl;
               s.Output();
               cin.get();
               break;
            }
         default:
            break;
      }
   }

   cin.get();
}
