#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
   Fraction cA, cB, cC;

   cin >> cA;
   cin >> cB;

   cout << cA << endl;
   cout << cB << endl;

   cout << "cA + cB:" << endl;
   cC = cA + cB;
   cout << cC << endl;

   cout << "cA - cB:" << endl;
   cC = cA - cB;
   cout << cC << endl;

   cout << "cA * cB:" << endl;
   cC = cA * cB;
   cout << cC << endl;

   cout << "cA / cB:" << endl;
   cC = cA / cB;
   cout << cC << endl;

   system("pause");
   return 0;
}

