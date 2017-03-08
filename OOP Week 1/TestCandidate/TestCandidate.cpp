#include <iostream>
#include "TestCandidate.h"
#include "Candidate.h"

using namespace std;

TestCandidate::TestCandidate():
   mpStudentList(nullptr) 
{
}

TestCandidate::TestCandidate(int x): 
   mNumOfCandidates(x),
   mpStudentList(new Candidate[x])
{
   {
      mpStudentList = new Candidate[mNumOfCandidates];
      for (int i = 0; i < mNumOfCandidates; i++)
      {
         mpStudentList[i].Candidate::Input();
      }
   }
}

TestCandidate::~TestCandidate()
{
   delete [] mpStudentList;
}

void TestCandidate::Input()
{
   cout << "Enter number of candidates: ";
   cin >> mNumOfCandidates;

   mpStudentList = new Candidate[mNumOfCandidates];
   for (int i = 0; i < mNumOfCandidates; i++)
   {
      mpStudentList[i].Candidate::Input();
   }
}

void TestCandidate::PrintOver15(void)
{
   for (int i = 0; i < mNumOfCandidates; i++)
   {
      if (mpStudentList[i].Total() > 15)
      {
         mpStudentList[i].Output();
      }
   }
   cout << "____________________________________________" << endl;
}
