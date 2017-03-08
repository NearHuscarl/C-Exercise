#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student 
{
   private:
      string mName;
      double mMathScore;
      double mLiteratureScore;
      double mAverageScore;
   public:
      Student();
      void Input();
      void Output();
      void CalAverage();
};

#endif //STUDENT_H 
