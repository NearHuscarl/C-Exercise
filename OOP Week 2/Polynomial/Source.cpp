#include "Monomial.h"
#include "Polynomial.h"
#include <iostream>

using namespace std;

int main()
{
   Polynomial poA, poB, poC;
   poA.Input();
   poB.Input();
   poA.Output();
   poB.Output();
   cout << "Sum of poA and poB: ";
   poC = poA.Add(poB);
   poC.Output();
   cout << "Difference of poA and poB: ";
   poC = poA.Subtract(poB);
   poC.Output();
   cout << "Product of poA and poB: ";
   poC = poA.Multiply(poB);
   poC.Output();

   system("pause");
   return 0;
}

