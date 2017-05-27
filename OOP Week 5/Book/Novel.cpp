#include <iostream>
#include "Novel.h"

using namespace std;

Novel::Novel(string n, string p, int py, int pg, double pr, string t):
   Book(n, p, py, pg, pr),
   mType(t)
{
}

Novel::~Novel()
{
}

void Novel::Input(void)
{
   Book::Input();
   cout << "Type: ";
   cin.ignore();
   getline(cin, mType);
   cout << endl;
}

void Novel::Output(void)
{
   Book::Output();
   cout << "Type: " << mType << endl << endl;
}
