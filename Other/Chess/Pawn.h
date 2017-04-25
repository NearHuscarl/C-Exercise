#ifndef PAWN_H
#define PAWN_H

#include <string>
#include "Chessman.h"

class Pawn: public Chessman
{
   public:
      Pawn();
      ~Pawn();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //PAWN_H 
