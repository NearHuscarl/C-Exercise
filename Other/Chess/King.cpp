#include <iostream>
#include <string>
#include "Chessman.h"
#include "King.h"

using namespace std;

King::King(): Chessman(
      "King",
      1,
      "King can move one space in any direction.\n But he can never move into the \"check\"\n (where he's threatened by another piece\)")
{
}

King::~King()
{
}

string King::GetName(void)
{
   return mName;
}

int King::GetNumber(void)
{
   return mNumber;
}

void King::SetColor(int color)
{
   mColor = color;
}

int King::GetColor(void)
{
   return mColor;
}

string King::GetMove(void)
{
   return mMove;
}
