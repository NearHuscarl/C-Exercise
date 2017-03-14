#ifndef STRING_H
#define STRING_H

#include <cstring>

class String 
{
   private:
      int mLength;
      char * mpString;
   public:
      String(const char * x = "");
      String(const String &x);
      ~String();
      char* Output();
      int GetLength();
      bool Compare(String x);
      void Inverse();
      void Append(String x);

};

#endif //STRING_H 
