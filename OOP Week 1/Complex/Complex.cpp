#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

void Complex::Input(void)
{
   cout << "Real Number Input: ";
   cin >> mRealNum;
   cout << "Imaginary Unit Input: ";
   cin >> mIUnit;
}

void Complex::Output(void)
{
   cout << mRealNum << showpos << mIUnit << "i" << endl << noshowpos;
}

double Complex::Modulus()
{
   return sqrt(mRealNum*mRealNum + mIUnit*mIUnit);
}

ostream& operator<<(ostream& x, const Complex& c)
{
   return x << c.mRealNum << showpos << c.mIUnit << "i" << noshowpos; 
}

Complex Complex::Add(Complex &x)
{
   Complex sum;
   sum.mRealNum = mRealNum + x.mRealNum;
   sum.mIUnit = mIUnit + x.mIUnit;
   return sum;
}

Complex Complex::Subtract(Complex &x)
{
   Complex diff;
   diff.mRealNum = mRealNum - x.mRealNum;
   diff.mIUnit = mIUnit - x.mIUnit;
   return diff;
}

Complex Complex::Multiply(Complex &x)
{
   Complex product;
   product.mRealNum = mRealNum*x.mRealNum - mIUnit*x.mIUnit;
   product.mIUnit = mRealNum*x.mIUnit + mIUnit*x.mRealNum;
   return product;
}

Complex Complex::Divide(Complex &x)
{
   Complex quotient;
   quotient.mRealNum = (mRealNum*x.mRealNum + mIUnit*x.mIUnit)/(x.mRealNum*x.mRealNum + x.mIUnit*x.mIUnit);
   quotient.mIUnit = (x.mRealNum*mIUnit - mRealNum*x.mIUnit)/(x.mRealNum*x.mRealNum + x.mIUnit*x.mIUnit);
   return quotient;
}






