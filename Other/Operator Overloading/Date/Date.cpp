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
   x >> d.mDay;
   cout << "Month: ";
   x >> d.mMonth;
   cout << "Year: ";
   x >> d.mYear;
   return x;
}

ostream& operator<<(ostream &x, const Date &d)
{
   x << setfill('0');
   x << setw(2) << d.mDay << "/";
   x << setw(2) << d.mMonth << "/";
   x << setw(4) << d.mYear;
   x << setfill(' ') << endl;
   return x;
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

int Date::MaxDayInMonth(int month)
{
   int mMaxDay[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if(IsLeapYear())
   {
      mMaxDay[1]++;
   }
   return mMaxDay[month-1];
}

bool Date::IsValidDay(void)
{
   if(1 <= mDay && mDay <= MaxDayInMonth(mMonth))
   {
      return true;
   }
   return false;
}

bool Date::IsValidMonth(void)
{
   if(1 <= mMonth && mMonth <= 12)
   {
      return true;
   }
   return false;
}

bool Date::IsValidDate(void)
{
   if(IsValidDay() && IsValidMonth()) 
   {
      return true;
   }
   return false;
}

bool Date::operator>(const Date &x)
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

bool Date::operator<(const Date &x)
{
   if(*this > x)
   {
      return false;
   }
   return true;
}

Date Date::operator++()
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

   if(!IsValidDay())
   {
      mDay = MaxDayInMonth(--mMonth);
      if(!IsValidMonth())
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

   --*this;
   return x;
}

Date Date::operator+(const int n)
{
   Date x(*this);

   for(int i = 0; i < n; i++)
   {
      x++;
   }
   return x;
}

Date Date::operator-(const int n)
{
   Date x(*this);

   for(int i = 0; i < n; i++)
   {
      x--;
   }
   return x;
}

// False when two date at 2 different year
int Date::operator-(const Date &x)
{
   Date rightOperand(x);
   int diff = 0;

   if(*this > rightOperand)
   {
      while(*this > rightOperand)
      {
         rightOperand++;
         diff++;
      }
   }
   else if(*this < rightOperand)
   {
      while(*this < rightOperand)
      {
         rightOperand--;
         diff++;
      }
   }
   else
   {
      return 0;
   }
   return diff;
}
