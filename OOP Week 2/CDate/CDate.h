#ifndef CDATE_H
#define CDATE_H

class CDate 
{
   private:
      int mDay;
      int mMonth;
      int mYear;

      int MaxDayInMonth(int m = 1);
      bool IsLeapYear();
      bool IsValidDay();
      bool IsValidMonth();
      bool IsValidDate();
   public:
      CDate(int d = 0, int m = 0, int y = 0);
      ~CDate();

      void Input();
      void Output();
      bool IsGreater(CDate x);
      bool IsLess(CDate x);
      void NextDay();
      void PreviousDay();
      void Add(int n);
      void Substract(int n);
      int Diff(CDate x);
};

#endif //CDATE_H 
