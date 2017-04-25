#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include "Chessman.h"

class Bishop: public Chessman
{
   public:
      Bishop();
      ~Bishop();

      std::string GetName();
      int GetNumber();
      void SetColor(int);
      int GetColor();
      std::string GetMove();
};

#endif //BISHOP_H 
