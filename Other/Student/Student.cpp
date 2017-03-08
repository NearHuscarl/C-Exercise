#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student()
{
}

void Student::Input(void)
{
   cout << "Enter student name: ";
   getline(cin, mName);
   cout << "Enter math score: ";
   cin >> mMathScore;
   cout << "Enter literature score: ";
   cin >> mLiteratureScore;
}

void Student::Output(void)
{
   cout << "________________" << endl;
   cout << "Student Name: " << mName << endl;
   cout << "Math Score: " << mMathScore << endl;
   cout << "Literature Score: " << mLiteratureScore << endl;
   CalAverage();
   cout << "Average Score: " << mAverageScore << endl;
   cout << "________________" << endl;
}

void Student::CalAverage(void)
{
   mAverageScore = (mMathScore + mLiteratureScore)/2;
}
