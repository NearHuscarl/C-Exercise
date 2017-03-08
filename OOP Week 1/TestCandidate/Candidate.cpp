#include "Candidate.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Candidate::Input(void)
{
   cin.ignore();
   cout << "Enter student code: ";
   getline(cin, mCode);
   cout << "Enter student name: ";
   getline(cin, mName);
   cout << "Enter student birthday: ";
   mBirthday.Input();
   cout << "Enter math score: ";
   cin >> mMath;
   cout << "Enter literature score: ";
   cin >> mLiterature;
   cout << "Enter english score: ";
   cin >> mEnglish;
   cout << endl;
}

short Candidate::Total(void)
{
   return mMath + mLiterature + mEnglish;
}

void Candidate::Output(void)
{
   cout << "____________________________________________" << endl << endl;
   cout << "Student: " << mCode << endl;
   cout << "Name: " << mName << endl;
   cout << "Date of birth: " << mBirthday << endl;
   cout << "Math score: " << mMath << endl;
   cout << "Literature score: " << mLiterature << endl;
   cout << "English score: " << mEnglish << endl;
   cout << "Total score: " << Total() << endl;
}
