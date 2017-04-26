#include <iostream>
#include <string>
#include "Piece.h"
#include "Soldier.h"

using namespace std;

Soldier::Soldier(): Piece(
      "Soldier",
      5,
      "The Foot Soldier moves one point forward. After it crosses the river,\n it may also move to the right and left, but never backward.\n Unlike the pawn in western chess, this piece captures just as\n it moves normally. It does not promote upon reaching the far end of the board")
{
}

Soldier::~Soldier()
{
}

string Soldier::GetName(void)
{
   return mName;
}

int Soldier::GetNumber(void)
{
   return mNumber;
}

void Soldier::SetColor(int color)
{
   mColor = color;
}

int Soldier::GetColor(void)
{
   return mColor;
}

string Soldier::GetMove(void)
{
   return mMove;
}
