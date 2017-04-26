#include <iostream>
#include <string>
#include "Piece.h"
#include "Chariot.h"

using namespace std;

Chariot::Chariot(): Piece(
      "Chariot",
      2,
      "The Chariot moves exactly like the rook in western chess:\n as many spaces as it wishes horizontally or vertically,\n until it meets another piece or the edge of the board.")
{
}

Chariot::~Chariot()
{
}

string Chariot::GetName(void)
{
   return mName;
}

int Chariot::GetNumber(void)
{
   return mNumber;
}

void Chariot::SetColor(int color)
{
   mColor = color;
}

int Chariot::GetColor(void)
{
   return mColor;
}

string Chariot::GetMove(void)
{
   return mMove;
}
