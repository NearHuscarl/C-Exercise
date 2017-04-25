#ifndef ROOK_H
#define ROOK_H

#include <string>
#include "Chessman.h"

class Rook: public Chessman
{
   public:
      Rook();
      ~Rook();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //ROOK_H 
