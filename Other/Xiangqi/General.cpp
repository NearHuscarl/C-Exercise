#include <iostream>
#include <string>
#include "Piece.h"
#include "General.h"

using namespace std;

General::General(): Piece(
      "General",
      1,
      "The General moves one space at a time left, right, forward or backward.\n He is confined to the nine point fortress, on his side of the board.")
{
}

General::~General()
{
}

string General::GetName(void)
{
   return mName;
}

int General::GetNumber(void)
{
   return mNumber;
}

void General::SetColor(int color)
{
   mColor = color;
}

int General::GetColor(void)
{
   return mColor;
}

string General::GetMove(void)
{
   return mMove;
}
