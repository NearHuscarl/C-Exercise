#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(double b, double h, double s1, double s2):
   mBase(b),
   mHeight(h),
   mSide1(s1),
   mSide2(s2)
{
   mArea = (mBase * mHeight) / 2;
   mPerimeter = mSide1 + mSide2 + mBase;
}

Triangle::~Triangle()
{
}

void Triangle::SetArea(void)
{
   mArea = (mBase * mHeight) / 2;
}

void Triangle::SetPerimeter(void)
{
   mPerimeter = mSide1 + mSide2 + mBase;
}

void Triangle::Input(void)
{
   cout << "Base: ";
   cin >> mBase;
   cout << "Height: ";
   cin >> mHeight;
   cout << "Side 1: ";
   cin >> mSide1;
   cout << "Side 2: ";
   cin >> mSide2;
   cout << endl;

   SetArea();
   SetPerimeter();
}

void Triangle::Output(void)
{
   cout << "Area of the Triangle is: " << mArea << endl;
   cout << "Perimeter of the Triangle is: " << mPerimeter << endl;
}
