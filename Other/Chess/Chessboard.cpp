#include <iostream>
#include "Chessman.h"
#include "Chessboard.h"

using namespace std;

enum ChessmanEnum {
   KING = 1,
   QUEEN,
   BISHOP,
   KNIGHT,
   ROOK,
   PAWN
};

Chessboard::Chessboard():
   mpChessman(nullptr)
{
}

Chessboard::~Chessboard()
{
   delete mpChessman;
}

int Chessboard::Select()
{
   int choice;
   cout << "Choose one type of chess piece: " << endl;
   cout << "0: Exit" << endl;
   cout << "1: King" << endl;
   cout << "2: Queen" << endl;
   cout << "3: Bishop" << endl;
   cout << "4: Knight" << endl;
   cout << "5: Rook" << endl;
   cout << "6: Pawn" << endl;
   cout << "Choice: ";
   cin >> choice;

   switch(choice)
   {
      case 0:
         return 0;
      case KING:
         mpChessman = new King;
         cout << "King has been selected" << endl;
         break;
      case QUEEN:
         mpChessman = new Queen;
         cout << "Queen has been selected" << endl;
         break;
      case BISHOP:
         mpChessman = new Bishop;
         cout << "Bishop has been selected" << endl;
         break;
      case KNIGHT:
         mpChessman = new Knight;
         cout << "Knight has been selected" << endl;
         break;
      case ROOK:
         mpChessman = new Rook;
         cout << "Rook has been selected" << endl;
         break;
      case PAWN:
         mpChessman = new Pawn;
         cout << "Pawn has been selected" << endl;
         break;
   }
}

void Chessboard::ShowInfo()
{
   if(mpChessman == nullptr)
   {
      cout << "Please select a type of chess piece first" << endl;
      return;
   }
   cout << "Name: "                      << mpChessman->GetName()   << endl;
   cout << "Total number on each side: " << mpChessman->GetNumber() << endl;
   cout << "Move rule: "                 << mpChessman->GetMove()   << endl;
}
