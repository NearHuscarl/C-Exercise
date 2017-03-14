#include <iostream>
#include <cstring>
#include "String.h"

using namespace std;

String::String(const char* x)
{
   mLength = strlen(x) + 1;
   mpString = new char[mLength];
   strcpy_s(mpString, mLength, x);
}

String::String(const String &x)
{
   mLength = strlen(x.mpString) + 1; //strlen + Null-terminator
   mpString = new char[mLength];
   strcpy_s(mpString, mLength, x.mpString);
}

String::~String()
{
   delete [] mpString;
}

void String::Append(String x)
{
   String temp;
   temp.mLength = strlen(mpString) + 1;
   temp.mpString = new char[temp.mLength];
   strcpy(temp.mpString, mpString);

   mLength = strlen(mpString) + strlen(x.mpString) + 1;
   delete [] mpString;
   mpString = new char[mLength];

   strcpy(mpString, temp.mpString);
   strcat(mpString, x.mpString);
}

void String::Inverse(void)
{
   char temp;
   for(int i = 0, j = mLength-2;; i++, j--)
   {
      if(j >= i)
      {
         break;
      }
      temp = mpString[i];
      mpString[i] = mpString[j];
      mpString[j] = temp;
   }
}

bool String::Compare(String x)
{
   if(!strcmp(mpString, x.mpString))
   {
      return true;
   }
   return false;
}

int String::GetLength(void)
{
   return mLength;
}

char* String::Output(void)
{
   char *temp;
   temp = new char[mLength];
   strcpy(temp, mpString);
   return temp;
}
