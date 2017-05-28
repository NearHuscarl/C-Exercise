#include "Fraction.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Fraction cA, cB, cC;

   cin >> cA;
   cin >> cB;

   cout << cA << endl;
   cout << cB << endl;

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

