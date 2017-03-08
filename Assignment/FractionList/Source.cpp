#include "fraction.h"
#include "FractionList.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   FractionList flA;
   fraction fA;
   flA.Input();
   fA = flA.Sum();
   cout << "Sum of fraction list: "; 
   fA.Output();
   fA = flA.MaxFraction();
   cout << "The max fraction in the array is: ";
   fA.Output();

   system("pause");
   return 0;
}

