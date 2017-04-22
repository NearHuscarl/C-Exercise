#include <iostream>
#include "Birthday.h"
#include <iomanip>

using namespace std;

Birthday::Birthday(int d, int m, int y):
   day(d),
   month(m),
   year(y)
{
}

void Birthday::Input()
{
   cout << "Day: ";
   cin >> day;
   while(!IsValidDay())
   {
      cout << "Invalid Day. Enter again" << endl;
      cout << "Day: ";
      cin >> day;
   }
   cout << "Month: ";
   cin >> month;
   while(!IsValidMonth())
   {
      cout << "Invalid Month. Enter again" << endl;
      cout << "Month: ";
      cin >> month;
   }
   cout << "Year: ";
   cin >> year;
   while(!IsValidYear())
   {
      cout << "Invalid Year. Enter again" << endl;
      cout << "Year: ";
      cin >> year;
   }
   while(!IsValidDate())
   {
      cout << "Invalid Date. Enter again" << endl;
      Input();
   }
}

int Birthday::GetDay()
{
   return day;
}

int Birthday::GetMonth()
{
   return month;
}

int Birthday::GetYear()
{
   return year;
}

void Birthday::SetDay(int x)
{
   day = x;
}

void Birthday::SetMonth(int x)
{
   month = x;
}

void Birthday::SetYear(int x)
{
   year = x;
}

ostream& operator<<(ostream& x, Birthday& b)
{
   return x << setfill('0') << setw(2) << b.day << "/" << setw(2) << b.month << "/" << setw(4) << b.year << setfill(' ');
}


bool Birthday::IsValidDay(void)
{
   if(day > 31 || day < 1)
   {
      return false;
   }
   else
   {
      return true;
   }
}

bool Birthday::IsValidMonth(void)
{
   if(month > 12|| month < 1)
   {
      return false;
   }
   else
   {
      return true;
   }
}

bool Birthday::IsValidYear(void)
{
   if(year < 0)
   {
      return false;
   }
   else
   {
      return true;
   }
}

bool Birthday::IsLeapYear(void)
{
   if(year % 4 == 0)
   {
      if(year % 100 == 0)
      {
         if(year % 400 == 0)
         {
            return true;
         }
      }
      return true;
   }
   return false;
}

int Birthday::MaxDayInMonth(int x)
{
   int mMaxDay[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if(IsLeapYear())
   {
      mMaxDay[1]++;
   }
   return mMaxDay[x-1];
}

bool Birthday::IsValidDate()
{
   if(IsValidDay() && IsValidMonth() && IsValidYear() && day <= MaxDayInMonth(month))
   {
      return 1;
   }
   return 0;
}
