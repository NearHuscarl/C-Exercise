#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

class Board 
{
   private:
      Piece *mpPiece;
   public:
      Board();
      ~Board();

      int Select();
      void ShowInfo();
};

#endif //BOARD_H 

