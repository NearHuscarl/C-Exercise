#include <iostream>
#include <string>
#include "Piece.h"
#include "Horse.h"

using namespace std;

Horse::Horse(): Piece(
      "Horse",
      2,
      "The Horse moves first one point along the horizontal/vertical lines,\n and then one point diagonally. Similar to the knight in western chess,\n but this horse can be blocked by an intervening piece.")
{
}

Horse::~Horse()
{
}

string Horse::GetName(void)
{
   return mName;
}

int Horse::GetNumber(void)
{
   return mNumber;
}

void Horse::SetColor(int color)
{
   mColor = color;
}

int Horse::GetColor(void)
{
   return mColor;
}

string Horse::GetMove(void)
{
   return mMove;
}
