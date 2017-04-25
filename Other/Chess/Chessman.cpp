#include <string>
#include "Chessman.h"

using namespace std;

Chessman::Chessman(string name, int number, string move):
   mName(name),
   mNumber(number),
   mMove(move)
{
}

Chessman::~Chessman()
{
}
