#include "graphics.h"
#include "Point.h"
#include "polygon.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   polygon pA;
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

