#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Chessman.h"

class Chessboard 
{
   private:
      Chessman *mpChessman;
   public:
      Chessboard();
      ~Chessboard();

      int Select();
      void ShowInfo();
};

#endif //CHESSBOARD_H 

