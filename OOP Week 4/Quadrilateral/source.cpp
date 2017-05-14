// ------------------------------------------------------------
//    File Name: source.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Sunday 2017-05-07 4:21:58 PM
// ------------------------------------------------------------

#include "Point.h"
#include "Validation.h"
#include "Quadrilateral.h"
#include <iostream>

using namespace std;

int main()
{
   int choice = -1;

   do
   {
      system("CLS");

      cout << "Choose a quadrilateral:" << endl;
      cout << "0. Exit" << endl;
      cout << "1. Trapezium" << endl;
      cout << "2. Parallelogram" << endl;
      cout << "3. Rectangle" << endl;
      cout << "4. Square" << endl;
      cout << "Choice: ";
      cin >> choice;

      while(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4)
      {
         cout << "Choice number is out of range, try again.\nChoice: ";
         cin >> choice;
         Validate("Choice: ", choice);
      }

      if(choice == 0)
      {
         break;
      }

      switch(choice)
      {
         case 1:
            {
               Trapezium t;
               t.Input();
               t.Output();
               cin.get();
               cin.get();
               break;
            }
         case 2: 
            {
               Parallelogram p;
               p.Input();
               p.Output();
               cin.get();
               cin.get();
               break;
            }
         case 3: 
            {
               Rectangle r;
               r.Input();
               r.Output();
               cin.get();
               cin.get();
               break;
            }
         case 4:
            {
               Square s;
               s.Input();
               s.Output();
               cin.get();
               cin.get();
               break;
            }
      }
   }
   while(true); 

   return 0;
}
