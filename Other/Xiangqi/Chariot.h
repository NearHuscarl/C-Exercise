#ifndef CHARIOT_H
#define CHARIOT_H

#include <string>
#include "Piece.h"

class Chariot: public Piece
{
   public:
      Chariot();
      ~Chariot();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //CHARIOT_H 
