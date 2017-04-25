#include <iostream>
#include <string>
#include "Pawn.h"

using namespace std;

Pawn::Pawn(): Chessman(
      "Pawn",
      8,
      "In the first move, each pawn has an option\n to move forward one space or two spaces.\n After this move, they can only move one space forward\n To capture the opposing chess piece, the pawn has to move\n diagonally one space\n Pawn can never move backward ")
{
}

Pawn::~Pawn()
{
}

string Pawn::GetName(void)
{
   return mName;
}

int Pawn::GetNumber(void)
{
   return mNumber;
}

void Pawn::SetColor(int color)
{
   mColor = color;
}

int Pawn::GetColor(void)
{
   return mColor;
}

string Pawn::GetMove(void)
{
   return mMove;
}
