#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <iostream>
#include <windows.h>

using namespace std;

class Birthday 
{
   private:
      short day;
      short month;
      short year;
      void gotoXY(int x, int y); 
      int wherex();
      int wherey();
   public:
      friend ostream& operator<<(ostream& x, Birthday& b);
      void Input();
      void Output();
};

#endif //BIRTHDAY_H 
