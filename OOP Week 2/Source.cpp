//#include "graphics.h"
#include "Point.h"
#include "polygon.h"
#include "cTimeSpan.h"
#include "CDate.h"
#include "monomial.h"
#include "polynomial.h"
#include <iostream>

using namespace std;

int main()
{
   //int gd = DETECT, gm;
   //initgraph(&gd, &gm, "C:\\TC\\BGI");
   //Point a(1, 1), b(3, 3), c(5, 5);

   //a.Draw(RED);
   //b.Draw(BLUE);
   //c.Draw(YELLOW);

   //getch();
   //closegraph();
   //
   //Point A, B(3, 3);
   //polygon pA;
   //pA.Input();
   //pA.Translate(1, 2);
   //pA.Output();
   //pA.Rotate(30);
   //pA.Output();
   //pA.Zoom(30);
   //pA.Output();

   //CTimeSpan ctA, ctB, ctSum, ctDiff;
   //ctA.Input();
   //ctB.Input();
   //cout << ctA.IsEqualTo(ctB) << endl;
   //cout << ctA.IsNotEqualTo(ctB) << endl;
   //cout << ctA.IsGreater(ctB) << endl;
   //cout << ctA.IsGreaterEqual(ctB) << endl;
   //cout << ctA.IsLess(ctB) << endl;
   //cout << ctA.IsLessEqual(ctB) << endl;
   //ctA.Output();
   //ctB.Output();
   //ctSum = ctA.Add(ctB);
   //cout << "Sum of time first and time second: ";
   //ctSum.Output();
   //ctDiff = ctA.Substract(ctB);
   //cout << "Difference between time first and time second: ";
   //ctDiff.Output();

   //CDate cdA, cdB;
   //int n;
   //cdA.Input();
   //cdA.NextDay();
   //cout << "The next day is: ";
   //cdA.Output();
   //cdA.PreviousDay();
   //cdA.PreviousDay();
   //cout << "The previous day is: ";
   //cdA.Output();
   //cout << "Enter a number of days: ";
   //cin >> n;
   //cdA.Add(n);
   //cout << n << " days after this day is: ";
   //cdA.Output();
   //cdA.Substract(n);
   //cout << n << " days before this day is: ";
   //cdA.Output();
   //cdB.Input();
   //cout << "Difference between the first and the second date is: " << cdB.Diff(cdA) << endl;

   polynomial poA, poB, poC;
   poA.Input();
   poB.Input();
   poA.Output();
   poB.Output();
   cout << "Sum of poA and poB: ";
   poC = poA.Add(poB);
   poC.Output();
   cout << "Difference of poA and poB: ";
   poC = poA.Subtract(poB);
   poC.Output();
   cout << "Product of poA and poB: ";
   poC = poA.Multiply(poB);
   poC.Output();

   system("pause");
   return 0;
}

