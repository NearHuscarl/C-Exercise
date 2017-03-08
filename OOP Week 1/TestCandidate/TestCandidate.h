#ifndef TESTCANDIDATE_H
#define TESTCANDIDATE_H

class Candidate; //forward declaration

class TestCandidate
{
private:
	Candidate *mpStudentList;
	int mNumOfCandidates;
public:
	TestCandidate();
	TestCandidate(int x);
   ~TestCandidate();
	void Input();
	void PrintOver15();
};

#endif //TESTCANDIDATE_H
