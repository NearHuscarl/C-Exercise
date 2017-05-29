#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Complex cA, cB;

   cin >> cA;
   cin >> cB;
   cout << endl;

   cout << cA << endl;
   cout << cB << endl;
   cout << endl;

   cout << "cA Modulus: " << cA.Modulus() << endl;
   cout << "cB Modulus: " << cB.Modulus() << endl;
   cout << endl;

   cout << "cA + cB" << endl;
   cout << cA + cB << endl;
   cout << endl;

   cout << "cA - cB" << endl;
   cout << cA - cB << endl;
   cout << endl;

   cout << "cA * cB" << endl;
   cout << cA * cB << endl;
   cout << endl;

   cout << "cA / cB" << endl;
   cout << cA / cB << endl;
   cout << endl;

   system("pause");
   return 0;
}

