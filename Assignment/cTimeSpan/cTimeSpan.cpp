#include <iostream>
#include "cTimeSpan.h"
#include <iomanip>

using namespace std;

CTimeSpan::CTimeSpan(int h, int m, int s):
   mHour(h),
   mMin(m),
   mSec(s)
{
}

void CTimeSpan::Input(void)
{
   cout << "Time Input: " << endl;
   cout << "Hour: ";
   cin >> mHour;
   cout << "Minute: ";
   cin >> mMin;
   cout << "Second: ";
   cin >> mSec;
}

void CTimeSpan::Output(void)
{
   if(mSec < 0)
   {
      cout << setfill('0') << setw(2) << mHour << ":" << mMin << ":" << mSec << setfill(' ') << endl;
   }
}

void CTimeSpan::Standarize(void)
{
   int flag = 0;
   if(3600*mHour + 60*mMin + mSec < 0)
   {
      flag = 1;
      mHour = abs(mHour);
      mMin = abs(mMin);
      mSec = abs(mSec);
   }
   if(mSec >= 60)
   {
      for( ; mSec >= 60; )
      {
         mSec-=60;
         mMin++;
      }
   }
   if(mMin >= 60)
   {
      for( ; mMin >= 60; )
      {
         mMin-=60;
         mHour++;
      }
   }
   if(flag)
   {
      mHour = -mHour;
      mMin = -mMin;
      mSec = -mSec;
   }
}
CTimeSpan CTimeSpan::Add(CTimeSpan x)
{
   CTimeSpan sum;
   int temp = 3600*(mHour + x.mHour) + 60*(mMin + x.mMin) + (mSec + x.mSec);
   sum.mHour =  temp / 3600;
   sum.mMin  = (temp % 3600) / 60;
   sum.mSec  = (temp % 3600 % 60);
   sum.Standarize();
   return sum;
}

CTimeSpan CTimeSpan::Substract(CTimeSpan x)
{
   CTimeSpan diff;
   int temp = 3600*(mHour - x.mHour) + 60*(mMin - x.mMin) + (mSec - x.mSec);
   diff.mHour =  temp / 3600;
   diff.mMin  = (temp % 3600) / 60;
   diff.mSec  = (temp % 3600 % 60);
   diff.Standarize();
   return diff;
}

bool CTimeSpan::IsEqualTo(CTimeSpan x)
{
   if(x.mHour == mHour && x.mMin == mMin && x.mSec == mSec)
      return true;
   return false;
}

bool CTimeSpan::IsNotEqualTo(CTimeSpan x)
{
   if(!this->IsEqualTo(x))
      return true;
   return false;
}

bool CTimeSpan::IsGreater(CTimeSpan x)
{
   long long tempx = 3600*x.mHour + 60*x.mMin + x.mSec;
   long long temp = 3600*mHour + 60*mMin + mSec;
   if(temp > tempx)
      return true;
   return false;
}

bool CTimeSpan::IsLess(CTimeSpan x)
{
   long long tempx = 3600*x.mHour + 60*x.mMin + x.mSec;
   long long temp = 3600*mHour + 60*mMin + mSec;
   if(temp < tempx)
      return true;
   return false;
}

bool CTimeSpan::IsGreaterEqual(CTimeSpan x)
{
   long long tempx = 3600*x.mHour + 60*x.mMin + x.mSec;
   long long temp = 3600*mHour + 60*mMin + mSec;
   if(temp >= tempx)
      return true;
   return false;
}

bool CTimeSpan::IsLessEqual(CTimeSpan x)
{
   long long tempx = 3600*x.mHour + 60*x.mMin + x.mSec;
   long long temp = 3600*mHour + 60*mMin + mSec;
   if(temp <= tempx)
      return true;
   return false;
}
