#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double w, double h):
   mWidth(w),
   mHeight(h)
{
   mArea = mWidth * mHeight;
   mPerimeter = 2 * (mWidth + mHeight);
}

Rectangle::~Rectangle()
{
}

void Rectangle::SetArea(void)
{
   mArea = mWidth * mHeight;
}

void Rectangle::SetPerimeter(void)
{
   mPerimeter = 2*(mWidth + mHeight);
}

void Rectangle::Input(void)
{
   cout << "Width: ";
   cin >> mWidth;
   cout << "Height: ";
   cin >> mHeight;
   cout << endl;

   SetArea();
   SetPerimeter();
}

void Rectangle::Output(void)
{
   cout << "Area of the Rectangle is: " << mArea << endl;
   cout << "Perimeter of the Rectangle is: " << mPerimeter << endl;
}
