#ifndef CTIMESPAN_H
#define CTIMESPAN_H

class CTimeSpan 
{
   private:
      int mHour;
      int mMin;
      int mSec;
   public:
      CTimeSpan(int h = 0, int m = 0, int s = 0);
      void Input();
      void Output();
      CTimeSpan Add(CTimeSpan x);
      CTimeSpan Substract(CTimeSpan x);
      void Standarize(void);
      bool IsEqualTo(CTimeSpan x);
      bool IsNotEqualTo(CTimeSpan x);
      bool IsGreater(CTimeSpan x);
      bool IsLess(CTimeSpan x);
      bool IsGreaterEqual(CTimeSpan x);
      bool IsLessEqual(CTimeSpan x);
};

#endif //CTIMESPAN_H 
