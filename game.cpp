#include<bits/stdc++.h>
#include "board.hpp"
using namespace std;

class Game {
    public:
        bool isCurrentMoveWhite;
        Board board;
        Game() {
            board.resetBoard();
            cout << board.getCell(1, 0).getPiece() << endl;
            cout << board.getCell(1, 0).getPiece()->isKilled() << " " << board.getCell(1, 0).getPiece()->isWhite() << endl;
            cout << board.getCell(6, 0).getPiece() << endl;
            cout << board.getCell(6, 0).getPiece()->isKilled() << " " << board.getCell(6, 0).getPiece()->isWhite() << endl;
            isCurrentMoveWhite = true;
            // setCurrentTurn();
        }
};

int main() {
    Game game;
}