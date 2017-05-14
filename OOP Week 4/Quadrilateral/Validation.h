// ------------------------------------------------------------
//    File Name: Validation.h
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Wednesday 2017-05-03 5:50:18 PM
// ------------------------------------------------------------

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

   template <typename T>
void Validate(string redoMsg, T &reassignVar)
{
   while(true)
   {
      if(cin.fail())
      {
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         cout << "Wrong input. Enter again" << endl;
         cout << redoMsg;
         cin >> reassignVar;
      }
      else
      {
         break;
      }
   }
}

inline bool IsValidName(string str)
{
   for(int i = 0; str[i]; i++)
   {
      if(!isalpha(str[i]) && !isspace(str[i]))
      {
         return 0;
      }
   }
   return 1;
}

inline void Validate(string redoMsg, string &reassignVar)
{
   while(true)
   {
      if(cin.fail())
      {
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         cout << "Wrong input. Enter again" << endl;
         cout << redoMsg;
         getline(cin, reassignVar);
      }
      else if(!IsValidName(reassignVar))
      {
         cout << "Wrong input. Enter again" << endl;
         cout << redoMsg;
         getline(cin, reassignVar);
      }
      else if(reassignVar.empty())
      {
         cout << "Input is empty. Please Enter again" << endl;
         cout << redoMsg;
         getline(cin, reassignVar);
      }
      else
      {
         break;
      }
   }
}
