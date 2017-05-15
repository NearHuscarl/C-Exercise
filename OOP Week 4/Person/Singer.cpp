// ------------------------------------------------------------
//    File Name: Singer.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 12:55:09 PM
// ------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include "Singer.h"
#include "Validation.h"

using namespace std;

Singer::Singer(string n, Birthday b, string h, string s, string g, string d):
   Artist(n, b, h, s),
   mGenre(g),
   mDebutAlbum(d)
{
}

Singer::~Singer()
{
}

void Singer::Input(void)
{
   Artist::Input();

   cout << "Genre: ";
   getline(cin, mGenre);
   Validate("Genre: ", mGenre);

   cout << "Debut Album: ";
   getline(cin, mDebutAlbum);
   Validate("Debut Album: ", mDebutAlbum);
}

void Singer::Output(void)
{
   Artist::Output();

   cout << "Genre: " << mGenre << endl;
   cout << "Debut Album: " << mDebutAlbum << endl;
   cout << "______________________________________" << endl;
}
