#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
   Fraction cA, cB, cC;

   cin >> cA;
   cin >> cB;

   cout << "\n--Output--\n";
   cout << cA << endl;
   cout << cB << endl << endl;

   cout << cA << " + "  << cB << " = " << cA + cB << endl;
   cout << cA << " + "  << 2  << " = " << cA + 2  << endl;
   cout << 3  << " - "  << cA << " = " << 3 - cA  << endl;
   cout << cA << " - "  << cB << " = " << cA - cB << endl;
   cout << cA << " * "  << cB << " = " << cA * cB << endl;
   cout << cA << " / "  << cB << " = " << cA / cB << endl << endl;

   cout << cA << " += " << cB << endl;
   cA+= cB;
   cout << ">> " << cA << endl << endl;

   cout << cA << " -= " << cB << endl;
   cA-= cB;
   cout << ">> " << cA << endl << endl;

   cout << cA << " *= " << cB << endl;
   cA*= cB;
   cout << ">> " << cA << endl << endl;

   cout << cA << " /= " << cB << endl;
   cA/= cB;
   cout << ">> " << cA << endl << endl;

   cout << cA << "++" << " >> ";
   cout << cA++ << endl;
   cout << ">> " << cA << endl << endl;

   cout << cA << "--" << " >> ";
   cout << cA-- << endl;
   cout << ">> " << cA << endl << endl;

   cout << "++" << cA << " >> ";
   cout << ++cA << endl;
   cout << ">> " << cA << endl << endl;

   cout << "--" << cA << " >> ";
   cout << --cA << endl;
   cout << ">> " << cA << endl << endl;

   cout << cA << " > " << cB << endl;
   cout << ">> " << (cA > cB) << endl << endl;

   cout << cA << " < " << cB << endl;
   cout << ">> " << (cA < cB) << endl << endl;

   cout << cA << " == " << cB << endl;
   cout << ">> " << (cA == cB) << endl << endl;

   cout << cA << " != " << cB << endl;
   cout << ">> " << (cA != cB) << endl << endl;

   cout << cA << " >= " << cB << endl;
   cout << ">> " << (cA >= cB) << endl << endl;

   cout << cA << " <= " << cB << endl;
   cout << ">> " << (cA <= cB) << endl << endl;

   system("pause");
   return 0;
}

