#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Complex cA, cB, cC;

   cin >> cA;
   cin >> cB;

   cout << cA << endl;
   cout << "Modulus of Complex Number A is: " << cA.Modulus() << endl;

   cC = cA + cB;
   cout << cC << endl;

   cC = cA - cB;
   cout << cC << endl;

   cC = cA * cB;
   cout << cC << endl;

   cC = cA / cB;
   cout << cC << endl;

   system("pause");
   return 0;
}

