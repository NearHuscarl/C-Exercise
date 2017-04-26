#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <string>
#include "Piece.h"

class Elephant: public Piece
{
   public:
      Elephant();
      ~Elephant();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //ELEPHANT_H 
