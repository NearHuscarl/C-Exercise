#include <iostream>
#include <string>
#include "String.h"

using namespace std;

int main()
{
   String strA("Hello "), strB("world!"), strC("Hello ");
   cout << strA.Output() << strB.Output() << endl;
   cout << strA.Compare(strC) << endl;
   strA.Append(strB);
   cout << strA.Output() << endl;
   strA.Inverse();
   cout << strA.Output() << endl;
   cout << "strA's length is " << strA.GetLength() << endl;

   system("pause");
   return 0;
}
