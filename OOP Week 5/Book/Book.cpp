#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string n, string p, int py, int pg, double pr):
   mTitle(n),
   mPublisher(p),
   mPublishingYear(py),
   mNumOfPages(pg),
   mPrice(pr)
{
}

Book::~Book()
{
}

void Book::Input(void)
{
   cout << "Title: ";
   cin.ignore();
   getline(cin, mTitle);
   cout << "Publisher: ";
   getline(cin, mPublisher);
   cout << "Publishing Year: ";
   cin >> mPublishingYear;
   cout << "Price: ";
   cin >> mPrice;
}

void Book::Output(void)
{
   cout << "Title: " << mTitle << endl;
   cout << "Publisher: " << mPublisher << endl;
   cout << "Publishing Year: " << mPublishingYear << endl;
   cout << "Price: " << mPrice << endl;
}
