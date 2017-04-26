#ifndef CANNON_H
#define CANNON_H

#include <string>
#include "Piece.h"

class Cannon: public Piece
{
   public:
      Cannon();
      ~Cannon();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //CANNON_H 
