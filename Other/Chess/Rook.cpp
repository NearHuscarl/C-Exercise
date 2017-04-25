#include <iostream>
#include <string>
#include "Rook.h"

using namespace std;

Rook::Rook(): Chessman(
      "Rook",
      2,
      "Rook can move any number of spaces\n up and down the rank and file of the chessboard\n as long as they are not obstructed by another chess piece")
{
}

Rook::~Rook()
{
}

string Rook::GetName(void)
{
   return mName;
}

int Rook::GetNumber(void)
{
   return mNumber;
}

void Rook::SetColor(int color)
{
   mColor = color;
}

int Rook::GetColor(void)
{
   return mColor;
}

string Rook::GetMove(void)
{
   return mMove;
}
