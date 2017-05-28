#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date(int d, int m, int y):
   mDay(d),
   mMonth(m),
   mYear(y)
{
}

Date::~Date()
{
}

istream& operator>>(istream &x, Date &d)
{
   cout << "Day: ";
   cin >> d.mDay;
   cout << "Month: ";
   cin >> d.mMonth;
   cout << "Year: ";
   cin >> d.mYear;
   return x;
}

ostream& operator<<(ostream &x, const Date &d)
{
   return x << setfill('0') << setw(2) << d.mDay << "/" << setw(2) << d.mMonth << "/" << setw(4) << d.mYear << setfill(' ') << endl;
}

bool Date::IsLeapYear(void)
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

int Date::MaxDayInMonth(int m)
{
   int mMaxDay[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if(IsLeapYear())
   {
      mMaxDay[1]++;
   }
   return mMaxDay[m-1];
}

bool Date::IsValidDate(void)
{
   if(1 <= mDay && mDay <= MaxDayInMonth(mMonth) && 1 <= mMonth && mMonth <= 12) 
   {
      return true;
   }
   return false;
}

bool Date::operator>(const Date x)
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

bool Date::operator<(const Date x)
{
   if((*this).operator>(x))
   {
      return false;
   }
   return true;
}

Date Date::operator++()
{
   mDay++;
   if(!IsValidDate())
   {
      mDay = 1;
      mMonth++;
      if(!IsValidDate())
      {
         mMonth = 1;
         mYear++;
      }
   }
   return *this;
}

Date Date::operator++(int)
{
   Date x(*this);

   ++(*this);
   return x;
}

Date Date::operator--()
{
   mDay--;
   if(!IsValidDate())
   {
      mDay = MaxDayInMonth(mMonth);
      mMonth--;
      if(!IsValidDate())
      {
         mMonth = 12;
         mYear--;
      }
   }
   return *this;
}

Date Date::operator--(int)
{
   Date x(*this);

   --(*this);
   return x;
}

Date Date::operator+(const int n)
{
   Date x(*this);

   for(int i = 0; i < n; i++)
   {
      x.operator++();
   }
   return x;
}

Date Date::operator-(const int n)
{
   Date x(*this);

   for(int i = 0; i < n; i++)
   {
      x.operator--();
   }
   return x;
}

// False when two date at 2 different year
int Date::operator-(Date x)
{
   int diff = 0;
   if((*this).operator>(x))
   {
      while((*this).operator>(x))
      {
         x.operator++();
         diff++;
      }
   }
   else if((*this).operator<(x))
   {
      while((*this).operator<(x))
      {
         x.operator--();
         diff++;
      }
   }
   else
   {
      return 0;
   }
   return diff;
}
