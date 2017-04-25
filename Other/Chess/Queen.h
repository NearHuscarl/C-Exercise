#ifndef QUEEN_H
#define QUEEN_H

#include <string>
#include "Chessman.h"

class Queen: public Chessman
{
   public:
      Queen();
      ~Queen();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //QUEEN_H 
