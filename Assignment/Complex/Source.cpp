#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Complex cA, cB, cC;

   cA.Input();
   cA.Output();
   cout << "Modulus of Complex Number A is: " << cA.Modulus() << endl;
   cB.Input();
   cC = cA.Add(cB);
   cC.Output();
   cC = cA.Subtract(cB);
   cC.Output();
   cC = cA.Multiply(cB);
   cC.Output();
   cC = cA.Divide(cB);
   cC.Output();

   system("pause");
   return 0;
}

