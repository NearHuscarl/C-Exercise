#include "Polynomial.h"
#include <iostream>

using namespace std;

int main()
{
   Polynomial poA, poB;

   cin >> poA;
   cin >> poB;

   cout << poA;
   cout << poB;

   cout << "Sum of poA and poB: " << endl;
   cout << poA + poB;

   cout << "Difference of poA and poB: " << endl;
   cout << poA - poB;

   cout << "Product of poA and poB: " << endl;
   cout << poA * poB;

   system("pause");
   return 0;
}

