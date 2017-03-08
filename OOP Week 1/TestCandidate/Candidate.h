#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>
#include "Birthday.h"
using namespace std;

class Candidate 
{
   private:
      string mCode;
      string mName;
      Birthday mBirthday;
      short mMath;
      short mLiterature;
      short mEnglish;
   public:
      short Total();
      void Input();
      void Output();
};


#endif //CANDIDATE_H
