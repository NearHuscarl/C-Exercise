#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date 
{
   private:
      int mDay;
      int mMonth;
      int mYear;
   public:
      Date(int d = 0, int m = 0, int y = 0);
      ~Date();

      friend istream& operator>>(istream&, Date&);
      friend ostream& operator<<(ostream&, const Date&);
      int MaxDayInMonth(int m = 1);
      bool IsLeapYear();
      bool IsValidDate();
      bool operator>(const Date);
      bool operator<(const Date);
      Date operator++(int);
      Date operator++();
      Date operator--(int);
      Date operator--();
      Date operator+(const int);
      Date operator-(const int);
      int operator-(Date);
};

#endif //DATE_H 
