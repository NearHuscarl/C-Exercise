#include <iostream>
#include <string>
#include "Queen.h"

using namespace std;

Queen::Queen(): Chessman(
      "Queen",
      1,
      "Queen can move any number of spaces in any direction\n as long as she is not obstructed by another chess piece")
{
}

Queen::~Queen()
{
}

string Queen::GetName(void)
{
   return mName;
}

int Queen::GetNumber(void)
{
   return mNumber;
}

void Queen::SetColor(int color)
{
   mColor = color;
}

int Queen::GetColor(void)
{
   return mColor;
}

string Queen::GetMove(void)
{
   return mMove;
}
