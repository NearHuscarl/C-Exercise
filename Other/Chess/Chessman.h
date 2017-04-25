#ifndef CHESSMAN_H
#define CHESSMAN_H

#include <string>

class Chessman 
{
   protected:
      std::string mName;
      int mNumber;
      int mColor;
      std::string mMove;
   public:
      Chessman(
            std::string name = "Chessman",
            int number = 32,
            std::string move = "none");
      ~Chessman();

      virtual std::string GetName() = 0;
      virtual int GetNumber() = 0;
      virtual void SetColor(int) = 0;
      virtual int GetColor() = 0;
      virtual std::string GetMove() = 0;
};

#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"

#endif //CHESSMAN_H 
