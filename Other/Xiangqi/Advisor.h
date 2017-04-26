#ifndef ADVISOR_H
#define ADVISOR_H

#include <string>
#include "Piece.h"

class Advisor: public Piece
{
   public:
      Advisor();
      ~Advisor();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //ADVISOR_H 
