#include <iostream>
#include <string>
#include "Piece.h"
#include "Advisor.h"

using namespace std;

Advisor::Advisor(): Piece(
      "Advisor",
      2,
      "The Advisor moves one point diagonally.\n He is confined to the nine point fortress.")
{
}

Advisor::~Advisor()
{
}

string Advisor::GetName(void)
{
   return mName;
}

int Advisor::GetNumber(void)
{
   return mNumber;
}

void Advisor::SetColor(int color)
{
   mColor = color;
}

int Advisor::GetColor(void)
{
   return mColor;
}

string Advisor::GetMove(void)
{
   return mMove;
}
