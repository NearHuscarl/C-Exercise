#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

student::student()
{
}

void student::Input(void)
{
   cout << "Enter student name: ";
   getline(cin, mName);
   cout << "Enter math score: ";
   cin >> mMathScore;
   cout << "Enter literature score: ";
   cin >> mLiteratureScore;
}

void student::Output(void)
{
   cout << "________________" << endl;
   cout << "Student Name: " << mName << endl;
   cout << "Math Score: " << mMathScore << endl;
   cout << "Literature Score: " << mLiteratureScore << endl;
   CalAverage();
   cout << "Average Score: " << mAverageScore << endl;
   cout << "________________" << endl;
}

void student::CalAverage(void)
{
   mAverageScore = (mMathScore + mLiteratureScore)/2;
}
