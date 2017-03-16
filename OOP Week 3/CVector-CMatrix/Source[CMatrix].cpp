#include <iostream>
#include "CMatrix.h"
#include "CVector.h"

using namespace std;

int main()
{
   CMatrix Ma, Mb, Mc;
   Ma.Input();
   Mb.Input();
   cout << "Matrix Ma: ";
   Ma.Output();
   cout << "Matrix Mb: ";
   Mb.Output();
   Mc = Ma.Add(Mb);
   cout << "Ma + Mb:";
   Mc.Output();
   Mc = Ma.Subtract(Mb);
   cout << "Ma - Mb:";
   Mc.Output();
   Mc = Ma.Multiply(3);
   cout << "Ma * 3";
   Mc.Output();

   CVector Va;
   Va.Input();
   cout << "Vector Va: ";
   Va.Output();
   Mc = Multiply(Ma, Va);
   cout << "Ma * Va";
   Mc.Output();

   system("pause");
   return 0;
}
