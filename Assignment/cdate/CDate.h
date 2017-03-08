#ifndef CDATE_H
#define CDATE_H

class CDate 
{
   private:
      int mDay;
      int mMonth;
      int mYear;
   public:
      CDate(int d=0, int m=0, int y=0);
      void Input();
      void Output();
      int MaxDayInMonth(int m = 1);
      bool IsLeapYear();
      bool IsValidDate();
      short IsGreater(CDate x);
      short IsLess(CDate x);
      void NextDay();
      void PreviousDay();
      void Add(int n);
      void Substract(int n);
      int Diff(CDate x);
};

#endif //CDATE_H 
