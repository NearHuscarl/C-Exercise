#include <iostream>
#include <string>
#include "CVector.h"

using namespace std;

int main()
{
   CVector Va, Vb, Vc;
   Va.Input();
   Vb.Input();
   cout << "Vector Va: ";
   Va.Output();
   cout << "Vector Vb: ";
   Vb.Output();
   Vc = Va.Add(Vb);
   cout << "Va + Vb: ";
   Vc.Output();
   Vc = Va.Subtract(Vb);
   cout << "Va - Vb: ";
   Vc.Output();
   int p;
   p = Va.Multiply(Vb);
   cout << "Va * Vb: ";
   cout << p << endl;
   Vc = Va.Multiply(5);
   cout << "Va * 5: ";
   Vc.Output();

   system("pause");
   return 0;
}
