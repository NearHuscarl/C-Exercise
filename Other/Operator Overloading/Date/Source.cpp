#include <iostream>
#include "Date.h"

using namespace std;

int main()
{

   Date cdA, cdB, cdC;

   cin >> cdA;
   cin >> cdB;
   cout << cdA << endl;
   cout << cdB << endl;

   cout << cdA++ << endl;
   cout << cdA-- << endl;

   cout << ++cdA << endl;
   cout << --cdA << endl;

   cout << cdA + 10 << endl;
   cout << cdA - 20 << endl;
   cout << cdA - cdB << endl;

   system("pause");
   return 0;
}

