#include <iostream>
#include <string>
#include "Piece.h"
#include "Elephant.h"

using namespace std;

Elephant::Elephant(): Piece(
      "Elephant",
      2,
      "The Minister/Elephant moves exactly two points in any diagonal direction.\n This piece can be blocked by another piece on the intervening square and\n is not allowed to cross the river, which runs between the two sides\n of the board.")
{
}

Elephant::~Elephant()
{
}

string Elephant::GetName(void)
{
   return mName;
}

int Elephant::GetNumber(void)
{
   return mNumber;
}

void Elephant::SetColor(int color)
{
   mColor = color;
}

int Elephant::GetColor(void)
{
   return mColor;
}

string Elephant::GetMove(void)
{
   return mMove;
}
