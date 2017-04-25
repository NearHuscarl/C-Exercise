#include <iostream>
#include <string>
#include "Bishop.h"

using namespace std;

Bishop::Bishop(): Chessman(
      "Bishop",
      2,
      "Bishop can move any number of spaces on the diagonals\n as long as it's not obstructed by another chess piece")
{
}

Bishop::~Bishop()
{
}

string Bishop::GetName(void)
{
   return mName;
}

int Bishop::GetNumber(void)
{
   return mNumber;
}

void Bishop::SetColor(int color)
{
   mColor = color;
}

int Bishop::GetColor(void)
{
   return mColor;
}

string Bishop::GetMove(void)
{
   return mMove;
}
