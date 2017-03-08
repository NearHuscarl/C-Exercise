#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class student 
{
   private:
      string mName;
      double mMathScore;
      double mLiteratureScore;
      double mAverageScore;
   public:
      student();
      void Input();
      void Output();
      void CalAverage();
};

#endif //STUDENT_H 
