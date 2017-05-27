#include <iostream>
#include "Magazine.h"

using namespace std;

Magazine::Magazine(string n, string p, int py, int pg, double pr, string pt):
   Book(n, p, py, pg, pr),
   mPeriodicalType(pt)
{
}

Magazine::~Magazine()
{
}

void Magazine::Input(void)
{
   Book::Input();
   cout << "Periodical Type: ";
   cin.ignore();
   getline(cin, mPeriodicalType);
   cout << endl;
}

void Magazine::Output(void)
{
   Book::Output();
   cout << "Periodical Type: " << mPeriodicalType << endl << endl;
}
