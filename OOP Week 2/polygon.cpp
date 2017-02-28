#include "polygon.h"
#include <iostream>
#include "Point.h"
#include <cmath>

using namespace std;

polygon::polygon(int x):
   n(x),
   mpPoint(new Point[n])
{
}

polygon::~polygon()
{
   delete [] mpPoint;
}

void polygon::Input(void)
{
   for(int i = 0; i < n; i++)
   {
      cout << "Enter coordinate " << i+1 << " :" << endl;
      mpPoint[i].Point::Input();
      cout << "_____________________" << endl;
   }
}

void polygon::Output(void)
{
   cout << "This polygon is made up of " << n << " point(s): " << endl;
   for(int i = 0; i < n; i++)
   {
      mpPoint[i].Point::Output();
   }
   cout << "_____________________" << endl;
}

void polygon::Translate(double x1, double y1)
{
   double x, y;
   for(int i = 0; i < n; i++)
   {
      x = mpPoint[i].GetX() + x1;
      y = mpPoint[i].GetY() + y1;
      mpPoint[i].Set(x, y);
   }
   cout << "This polygon is translated by vector v(" << x << ", " << y << ")" << endl;
   cout << "_____________________" << endl;
}

void polygon::Rotate(double r)
{
   double x, y;
   for(int i = 0; i < n; i++)
   {
      x = mpPoint[i].GetX()*cos(r) - mpPoint[i].GetY()*sin(r);
      y = mpPoint[i].GetX()*sin(r) + mpPoint[i].GetY()*cos(r);
      mpPoint[i].Set(x, y);
   }
   cout << "This polygon is rotated an angle of " << r << " rad" << endl;
   cout << "_____________________" << endl;
}

void polygon::Zoom(double z)
{
   double x, y;
   for(int i = 0; i < n; i++)
   {
      x = mpPoint[i].GetX() * z;
      y = mpPoint[i].GetY() * z;
      mpPoint[i].Set(x, y);
   }
   cout << "This polygon is enlarged with scale factor " << z << endl;
   cout << "_____________________" << endl;
}
