#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include <vector>

struct Coords
{
   int x;
   int y;
};

struct Target
{
   Coords pos;
   std::string type;
};

class Controller
{
   private:
      int mTargetCount;
      int mChoice;
      std::vector<Target> targetList;

      void RefreshTarget();
      void ShowTarget();
      void ShowTarget(int);
   public:
      Controller();
      ~Controller();

      void ActivateButton();
      void ChooseTarget();
};

#endif //CONTROLLER_H 
