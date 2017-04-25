#ifndef KNIGHT_H
#define KNIGHT_H

#include <string>
#include "Chessman.h"

class Knight: public Chessman
{
   public:
      Knight();
      ~Knight();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //KNIGHT_H
