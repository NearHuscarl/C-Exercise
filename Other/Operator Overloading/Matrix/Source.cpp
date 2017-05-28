#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
   Matrix Ma, Mb, Mc;

   cin >> Ma;
   cin >> Mb;

   cout << "Matrix Ma: ";
   cout << Ma;
   cout << "Matrix Mb: ";
   cout << Mb;

   cout << "Ma + Mb:" << endl;
   cout << Ma + Mb;

   cout << "Ma - Mb:";
   cout << Ma - Mb;

   cout << "Ma * Mb:";
   cout << Ma * Mb;

   cout << "Ma * 3";
   cout << Ma * 3;

   system("pause");
   return 0;
}
