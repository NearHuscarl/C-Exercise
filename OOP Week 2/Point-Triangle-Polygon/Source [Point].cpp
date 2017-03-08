#include "graphics.h"
#include "Point.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Point pA, pB;

   pA.Input();
   pA.Output();
   pA.Move(4, 5);
   pA.Output();
   pB.Input();

   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   Point a(1, 1), b(3, 3), c(5, 5);

   pA.Draw(RED);
   pB.Draw(YELLOW);

   getch();
   closegraph();

   system("pause");
   return 0;
}

