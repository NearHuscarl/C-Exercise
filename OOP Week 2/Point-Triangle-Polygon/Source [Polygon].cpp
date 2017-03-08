#include "graphics.h"
#include "Point.h"
#include "Polygon.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Polygon pA;
   pA.Input();
   pA.Translate(1, 2);
   pA.Output();
   pA.Rotate(30);
   pA.Output();
   pA.Zoom(30);
   pA.Output();

   system("pause");
   return 0;
}

