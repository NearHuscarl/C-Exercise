#ifndef HORSE_H
#define HORSE_H

#include <string>
#include "Piece.h"

class Horse: public Piece
{
   public:
      Horse();
      ~Horse();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //HORSE_H 
