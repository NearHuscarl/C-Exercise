#include <iostream>
#include "Piece.h"
#include "Board.h"

using namespace std;

enum PieceEnum {
   GENERAL = 1,
   ADVISOR,
   ELEPHANT,
   HORSE,
   CHARIOT,
   CANNON,
   SOLDIER
};

Board::Board():
   mpPiece(nullptr)
{
}

Board::~Board()
{
   delete mpPiece;
}

int Board::Select()
{
   int choice;
   cout << "Choose one type of chess piece: " << endl;
   cout << "0: Exit" << endl;
   cout << "1: General" << endl;
   cout << "2: Advisor" << endl;
   cout << "3: Elephant" << endl;
   cout << "4: Horse" << endl;
   cout << "5: Chariot" << endl;
   cout << "6: Cannon" << endl;
   cout << "7: Soldier" << endl;
   cout << "Choice: ";
   cin >> choice;

   switch(choice)
   {
      case 0:
         return 0;
      case GENERAL:
         mpPiece = new General;
         cout << "General has been selected" << endl;
         break;
      case ADVISOR:
         mpPiece = new Advisor;
         cout << "Advisor has been selected" << endl;
         break;
      case ELEPHANT:
         mpPiece = new Elephant;
         cout << "Elephant has been selected" << endl;
         break;
      case HORSE:
         mpPiece = new Horse;
         cout << "Horse has been selected" << endl;
         break;
      case CHARIOT:
         mpPiece = new Chariot;
         cout << "Chariot has been selected" << endl;
         break;
      case CANNON:
         mpPiece = new Cannon;
         cout << "Cannon has been selected" << endl;
         break;
      case SOLDIER:
         mpPiece = new Soldier;
         cout << "Soldier has been selected" << endl;
         break;
   }
}

void Board::ShowInfo()
{
   if(mpPiece == nullptr)
   {
      cout << "Please select a type of chess piece first" << endl;
      return;
   }
   cout << "Name: "                      << mpPiece->GetName()   << endl;
   cout << "Total number on each side: " << mpPiece->GetNumber() << endl;
   cout << "Move rule: "                 << mpPiece->GetMove()   << endl;
}
