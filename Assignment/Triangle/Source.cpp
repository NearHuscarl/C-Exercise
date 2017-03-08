#include "graphics.h"
#include "Point.h"
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Triangle tA;
   tA.Input();
   tA.Translate(1, 2);
   tA.Output();
   tA.Rotate(30);
   tA.Output();
   tA.Zoom(30);
   tA.Output();

   system("pause");
   return 0;
}

