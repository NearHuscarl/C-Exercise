#ifndef KING_H
#define KING_H

#include <string>
#include "Chessman.h"

class King: public Chessman
{
   public:
      King();
      ~King();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //KING_H 
