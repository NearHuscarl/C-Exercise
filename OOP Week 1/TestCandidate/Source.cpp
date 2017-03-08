#include "Candidate.h"
#include <iostream>
#include <cstring>
#include "TestCandidate.h"

using namespace std;

int main()
{
   TestCandidate tcA(2), tcB;
   tcA.PrintOver15();

   cout << endl;

   tcB.Input();
   tcB.PrintOver15();

   system("pause");
   return 0;
}
