#include <string>
#include "Piece.h"

using namespace std;

Piece::Piece(string name, int number, string move):
   mName(name),
   mNumber(number),
   mMove(move)
{
}

Piece::~Piece()
{
}
