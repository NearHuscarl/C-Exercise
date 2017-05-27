#include <iostream>
#include "Textbook.h"

using namespace std;

Textbook::Textbook(string n, string p, int py, int pg, double pr, int g):
   Book(n, p, py, pg, pr),
   mGrade(g)
{
}

Textbook::~Textbook()
{
}

void Textbook::Input(void)
{
   Book::Input();
   cout << "Grade: ";
   cin >> mGrade;
   cout << endl;
}

void Textbook::Output(void)
{
   Book::Output();
   cout << "Grade: " << mGrade << endl << endl;
}
