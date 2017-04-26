#include <iostream>
#include <string>
#include "Piece.h"
#include "Cannon.h"

using namespace std;

Cannon::Cannon(): Piece(
      "Cannon",
      2,
      "The Cannon/Catapult is a peculiar piece. It moves exactly like\n the Chariot (or rook) when not capturing. But to capture,\n it must have a piece, friend or foe, in line to jump over.")
{
}

Cannon::~Cannon()
{
}

string Cannon::GetName(void)
{
   return mName;
}

int Cannon::GetNumber(void)
{
   return mNumber;
}

void Cannon::SetColor(int color)
{
   mColor = color;
}

int Cannon::GetColor(void)
{
   return mColor;
}

string Cannon::GetMove(void)
{
   return mMove;
}
