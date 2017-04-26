#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>
#include "Piece.h"

class Soldier: public Piece
{
   public:
      Soldier();
      ~Soldier();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //SOLDIER_H 
