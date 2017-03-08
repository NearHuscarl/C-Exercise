#include "cTimeSpan.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   CTimeSpan ctA, ctB, ctSum, ctDiff;
   ctA.Input();
   ctB.Input();
   cout << ctA.IsEqualTo(ctB) << endl;
   cout << ctA.IsNotEqualTo(ctB) << endl;
   cout << ctA.IsGreater(ctB) << endl;
   cout << ctA.IsGreaterEqual(ctB) << endl;
   cout << ctA.IsLess(ctB) << endl;
   cout << ctA.IsLessEqual(ctB) << endl;
   ctA.Output();
   ctB.Output();
   ctSum = ctA.Add(ctB);
   cout << "Sum of time first and time second: ";
   ctSum.Output();
   ctDiff = ctA.Substract(ctB);
   cout << "Difference between time first and time second: ";
   ctDiff.Output();

   system("pause");
   return 0;
}

