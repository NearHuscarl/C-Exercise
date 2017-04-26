#ifndef PIECE_H
#define PIECE_H

#include <string>

class Piece 
{
   protected:
      std::string mName;
      int mNumber;
      int mColor;
      std::string mMove;
   public:
      Piece(
            std::string name = "Piece",
            int number = 32,
            std::string move = "none");
      ~Piece();

      virtual std::string GetName() = 0;
      virtual int GetNumber() = 0;
      virtual void SetColor(int) = 0;
      virtual int GetColor() = 0;
      virtual std::string GetMove() = 0;
};

#include "General.h"
#include "Advisor.h"
#include "Elephant.h"
#include "Horse.h"
#include "Chariot.h"
#include "Cannon.h"
#include "Soldier.h"

#endif //PIECE_H 
