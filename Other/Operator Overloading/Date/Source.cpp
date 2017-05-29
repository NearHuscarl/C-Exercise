#include <iostream>
#include "Date.h"

using namespace std;

int main()
{

   Date cdA, cdB, cdC;

   cin >> cdA;
   cin >> cdB;

   cout << endl;
   cout << "cdA: " << cdA << endl;
   cout << "cdB: " << cdB << endl;

   cout << "cdA++: " << cdA++ << endl;
   cout << "cdA--: " << cdA++ << endl;

   cout << "++cdB: " << ++cdB << endl;
   cout << "--cdB: " << --cdB << endl;

   cout << "cdA + 10" << endl;
   cout << cdA + 10 << endl;
   cout << "cdB - 20" << endl;
   cout << cdA - 20 << endl;
   cout << "cdA - cdB" << endl;
   cout << cdA - cdB << endl;

   system("pause");
   return 0;
}

