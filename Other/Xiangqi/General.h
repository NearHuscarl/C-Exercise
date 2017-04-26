#ifndef GENERAL_H
#define GENERAL_H

#include <string>
#include "Piece.h"

class General: public Piece
{
   public:
      General();
      ~General();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //GENERAL_H 
