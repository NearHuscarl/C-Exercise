#include <iostream>
#include "Birthday.h"
#include <iomanip>
#include <windows.h>

using namespace std;

int Birthday::wherex()
{
   CONSOLE_SCREEN_BUFFER_INFO csbi;
   if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
      return -1;
   return csbi.dwCursorPosition.X;
}

int Birthday::wherey()
{
   CONSOLE_SCREEN_BUFFER_INFO csbi;
   if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
      return -1;
   return csbi.dwCursorPosition.Y;
}

void Birthday::gotoXY(int column, int line)
{
   COORD coord;
   coord.X = column;
   coord.Y = line;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Birthday::Input(void)
{
   cout << endl;
   cout << "Day input: ";
   cin >> day;
   cout << "Month input: ";
   cin >> month;
   cout << "Year input: ";
   cin >> year;
}
void Birthday::Output(void)
{
   cout << setfill('0') << setw(2) << day << "/" << setw(2) << month << "/" << setw(4) << year << setfill(' ');
}

ostream& operator<<(ostream& x, Birthday& b)
{
   return x << setfill('0') << setw(2) << b.day << "/" << setw(2) << b.month << "/" << setw(4) << b.year << setfill(' ');
}
