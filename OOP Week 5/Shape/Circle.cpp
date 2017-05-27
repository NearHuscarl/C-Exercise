#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double r):
   mRadius(r),
   mPi(3.14)
{
   mArea = mPi * mRadius * mRadius;
   mPerimeter = 2 * mPi * mRadius;
}

Circle::~Circle()
{
}

void Circle::SetArea(void)
{
   mArea = mPi * mRadius * mRadius;
}

void Circle::SetPerimeter(void)
{
   mPerimeter = 2 * mPi * mRadius;
}

void Circle::Input(void)
{
   cout << "Radius: ";
   cin >> mRadius;
   cout << endl;

   SetArea();
   SetPerimeter();
}

void Circle::Output(void)
{
   cout << "Area of the Circle is: " << mArea << endl;
   cout << "Perimeter of the Circle is: " << mPerimeter << endl;
}
