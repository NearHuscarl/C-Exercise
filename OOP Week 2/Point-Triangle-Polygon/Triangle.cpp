#include "Triangle.h"
#include <iostream>
#include "Point.h"
#include <cmath>

using namespace std;

Triangle::Triangle()
{
}

void Triangle::Input(void)
{
   for(int i = 0; i < 3; i++)
   {
      cout << "Enter coordinate " << i+1 << " :" << endl;
      mPoint[i].Point::Input();
      cout << "_____________________" << endl;
   }
}

void Triangle::Output(void)
{
   cout << "This Triangle is made up of " << 3 << " point(s): " << endl;
   for(int i = 0; i < 3; i++)
   {
      mPoint[i].Point::Output();
   }
   cout << "_____________________" << endl;
}

void Triangle::Translate(double x1, double y1)
{
   double x, y;
   for(int i = 0; i < 3; i++)
   {
      x = mPoint[i].GetX() + x1;
      y = mPoint[i].GetY() + y1;
      mPoint[i].Set(x, y);
   }
   cout << "This Triangle is translated by vector v(" << x1 << ", " << y1 << ")" << endl;
   cout << "_____________________" << endl;
}

void Triangle::Rotate(double r)
{
   double x, y;
   for(int i = 0; i < 3; i++)
   {
      x = mPoint[i].GetX()*cos(r) - mPoint[i].GetY()*sin(r);
      y = mPoint[i].GetX()*sin(r) + mPoint[i].GetY()*cos(r);
      mPoint[i].Set(x, y);
   }
   cout << "This Triangle is rotated an angle of " << r << " rad" << endl;
   cout << "_____________________" << endl;
}

void Triangle::Zoom(double z)
{
   double x, y;
   for(int i = 0; i < 3; i++)
   {
      x = mPoint[i].GetX() * z;
      y = mPoint[i].GetY() * z;
      mPoint[i].Set(x, y);
   }
   cout << "This Triangle is enlarged with scale factor " << z << endl;
   cout << "_____________________" << endl;
}
