#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(int x, int y):
   mRealNum(x),
   mImaginaryUnit(y)
{
}

Complex::~Complex()
{
}

double Complex::Modulus()
{
   return sqrt(mRealNum*mRealNum + mImaginaryUnit*mImaginaryUnit);
}

istream& operator>>(istream &x, Complex &c)
{
   cout << "Real Number Input: ";
   cin >> c.mRealNum;
   cout << "Imaginary Unit Input: ";
   cin >> c.mImaginaryUnit;
   return x;
}

ostream& operator<<(ostream &x, const Complex &c)
{
   return x << c.mRealNum << showpos << c.mImaginaryUnit << "i" << noshowpos; 
}

Complex Complex::operator+(const Complex &x)
{
   Complex sum;
   sum.mRealNum = mRealNum + x.mRealNum;
   sum.mImaginaryUnit = mImaginaryUnit + x.mImaginaryUnit;
   return sum;
}

Complex Complex::operator-(const Complex &x)
{
   Complex diff;
   diff.mRealNum = mRealNum - x.mRealNum;
   diff.mImaginaryUnit = mImaginaryUnit - x.mImaginaryUnit;
   return diff;
}

Complex Complex::operator*(const Complex &x)
{
   Complex product;
   product.mRealNum = mRealNum*x.mRealNum - mImaginaryUnit*x.mImaginaryUnit;
   product.mImaginaryUnit = mRealNum*x.mImaginaryUnit + mImaginaryUnit*x.mRealNum;
   return product;
}

Complex Complex::operator/(const Complex &x)
{
   Complex quotient;
   quotient.mRealNum = (mRealNum*x.mRealNum + mImaginaryUnit*x.mImaginaryUnit)/(x.mRealNum*x.mRealNum + x.mImaginaryUnit*x.mImaginaryUnit);
   quotient.mImaginaryUnit = (x.mRealNum*mImaginaryUnit - mRealNum*x.mImaginaryUnit)/(x.mRealNum*x.mRealNum + x.mImaginaryUnit*x.mImaginaryUnit);
   return quotient;
}






