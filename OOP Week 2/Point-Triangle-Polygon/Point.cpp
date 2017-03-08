#include <iostream>
#include "Point.h"
#include "graphics.h"

using namespace std;

Point::Point(double x, double y):
   mX(x), 
   mY(y)
{
}

double Point::GetX(void)
{
   return mX;
}

double Point::GetY(void)
{
   return mY;
}

void Point::Set(double x, double y)
{
   mX = x;
   mY = y;
}
void Point::Input()
{
   cout << "Enter x: ";
   cin >> mX;
   cout << "Enter y: ";
   cin >> mY;
}

void Point::Output(void)
{
   cout << "(" << mX << ", " << mY << ")" << endl;
}

void Point::Move(double x, double y)
{
   mX+= x;
   mY+= y;
}

void Point::Draw(int col)
{
   putpixel(mX, mY, col);
}
