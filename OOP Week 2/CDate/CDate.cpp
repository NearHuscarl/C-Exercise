#include <iostream>
#include <iomanip>
#include "CDate.h"

using namespace std;

CDate::CDate(int d, int m, int y):
   mDay(d),
   mMonth(m),
   mYear(y)
{
}

void CDate::Input(void)
{
   cout << "Day Input: ";
   cin >> mDay;
   cout << "Month Input: ";
   cin >> mMonth;
   cout << "Year Input: ";
   cin >> mYear;
}

void CDate::Output(void)
{
   cout << setfill('0') << ;
   cout << setw(2) << mDay << "/";
   cout << setw(2) << mMonth << "/";
   cout << setw(4) << mYear <<;
   cout << setfill(' ') << endl;
}

bool CDate::IsLeapYear(void)
{
   if(mYear % 4 == 0)
   {
      if(mYear % 100 == 0)
      {
         if(mYear % 400 == 0)
         {
            return true;
         }
      }
      return true;
   }
   return false;
}

int CDate::MaxDayInMonth(int m)
{
   int mMaxDay[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if(IsLeapYear())
   {
      mMaxDay[1]++;
   }
   return mMaxDay[m-1];
}

bool CDate::IsValidDay(void)
{
   if(1 <= mDay && mDay <= MaxDayInMonth(mMonth))
   {
      return true;
   }
   return false;
}

bool CDate::IsValidMonth(void)
{
   if(1 <= mMonth && mMonth <= 12)
   {
      return true;
   }
   return false;
}

bool CDate::IsValidDate(void)
{
   if(IsValidDay() && IsValidMonth()) 
   {
      return true;
   }
   return false;
}

bool CDate::IsGreater(CDate x)
{
   if(mYear > x.mYear)
   {
      return true;
   }
   else if(mYear == x.mYear)
   {
      if(mMonth > x.mMonth)
      {
         return true;
      }
      else if(mMonth == x.mMonth)
      {
         if(mDay > x.mDay)
         {
            return true;
         }
         else if(mDay == x.mDay)
         {
            return false;
         }
         return false;
      }
      return false;
   }
   return false;
}

bool CDate::IsLess(CDate x)
{
   if(this->IsGreater(x) == 1 || this->IsGreater(x) == -1)
   {
      return false;
   }
   return true;
}

void CDate::NextDay()
{
   mDay++;
   if(!IsValidDay())
   {
      mDay = 1;
      mMonth++;
      if(!IsValidMonth())
      {
         mMonth = 1;
         mYear++;
      }
   }
}

void CDate::PreviousDay()
{
   mDay--;
   if(!IsValidDay())
   {
      mDay = MaxDayInMonth(--mMonth);
      if(!IsValidMonth())
      {
         mMonth = 12;
         mYear--;
      }
   }
}

void CDate::Add(int n)
{
   for(int i = 0; i < n; i++)
   {
      NextDay();
   }
}

void CDate::Substract(int n)
{
   for(int i = 0; i < n; i++)
   {
      PreviousDay();
   }
}

int CDate::Diff(CDate x)
{
   int diff = 0;
   if(this->IsGreater(x))
   {
      while(this->IsGreater(x) == 1)
      {
         x.NextDay();
         diff++;
      }
   }
   else if(this->IsLess(x))
   {
      while(this->IsLess(x) == 1)
      {
         x.PreviousDay();
         diff++;
      }
   }
   else
      return 0;
   return diff;
}
