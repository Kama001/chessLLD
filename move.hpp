#include<bits/stdc++.h>
#include "Board.hpp"
#include "player.hpp"
// #include "game.cpp"
using namespace std;

class Move {
    // int startX, startY, endX, endY;
    Cell *startCell, *endCell;
    // Board board;
    Player player;
    public:
        Move() {}
        Move(Cell *startCell, Cell *endCell, Player p) {
        // Move(int startX, int startY, int endX, int endY, Player p) {
            // this->startX = startX;
            // this->startY = startY;
            this->startCell = startCell;
            this->endCell = endCell;
            // this->endX = endX;
            // this->endY = endY;
            this->player = p;
            makeMove();
            // Cell cell(endX, endY, p);
        }
        void makeMove() {
            if(isValidPlayer() && isValidPawn()) {
                // Cell cell(endX, endY, startCell.getPiece());
                // cout << startCell->getPiece()->isKilled() << " " << startCell->getPiece()->isWhite() << endl;
                // if(!endCell->getPiece()) {
                //     cout << "empty" << endl;
                // } 
                // else {
                //     cout << "something present" << endl;
                // }
        
                endCell->setPiece(startCell->getPiece());

                // if(!endCell->getPiece()) {
                //     cout << "empty" << endl;
                // } 
                // else {
                //     cout << "something presents" << endl;
                // }
                // cout << endCell->getPiece()->isKilled() << " " << endCell->getPiece()->isWhite() << endl;
                // Board board[endCell.getX()][end]
            }
        }
        bool isValidPlayer() {
            return true;
        }
        bool isValidPawn() {
            return true;
        }
};

// int main() {
//     Player p(true);
//     Move m(1, 1, 2, 1, p);
// }
