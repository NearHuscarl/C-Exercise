#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
   Fraction fA, fB, fC;
   cout << "Enter fA: " << endl;
   fA.Input();
   cout << "fA simplified: " << endl;
   fA.Output();
   cout << "Enter fB: " << endl;
   fB.Input();
   if(fA.IsGreater(fB))
   {
      cout << "fA is greater than fB" << endl;
   }
   else
   {
      cout << "fB is greater than fA" << endl;
   }
   fC = fA.Add(fB);
   fC.Output();
   fC = fA.Subtract(fB);
   fC.Output();
   fC = fA.Multiply(fB);
   fC.Output();
   fC = fA.Divide(fB);
   fC.Output();
   system("pause");
   return 0;
}

