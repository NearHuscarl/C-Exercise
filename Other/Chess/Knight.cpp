#include <iostream>
#include <string>
#include "Chessman.h"
#include "Knight.h"

using namespace std;

Knight::Knight(): Chessman(
      "Knight",
      2,
      "Knight can move in a \"L\" shape")
{
}

Knight::~Knight()
{
}

string Knight::GetName(void)
{
   return mName;
}

int Knight::GetNumber(void)
{
   return mNumber;
}

void Knight::SetColor(int color)
{
   mColor = color;
}

int Knight::GetColor(void)
{
   return mColor;
}

string Knight::GetMove(void)
{
   return mMove;
}
