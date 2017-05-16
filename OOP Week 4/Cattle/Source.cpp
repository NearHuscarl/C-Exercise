// ------------------------------------------------------------
//    File Name: Source.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Tuesday 2017-05-16 9:11:21 AM
// ------------------------------------------------------------

#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Farm.h"

using namespace std;

int main()
{
   Farm f;

   srand(time(nullptr));
   f.Input();

   cout << endl;
   cout << "One day, the farmer leaves his farm for a while.\n";
   cout << "All of his cattle become hungry. When each of them is hungry,\n";
   cout << "they will make some sort of noise depending on which species they are:\n";
   cout << "Cows will go Mooooo, Sheeps will go Baaa Baaa and Goats will go Maaa Maaa\n";
   cout << "For some reasons, my teacher decided that he want me to write a function\n";
   cout << "which will record all of the sound, so here it is anyway -___-\n";
   cout << "*Sound starts playing*\n\n";

   f.PrintNoise();
   cout << endl;
   f.PrintStats();

   cin.get();
   cin.get();
   return 0;
}
