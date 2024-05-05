#include<bits/stdc++.h>
#include "move.hpp"
using namespace std;

class Game {
    public:
        bool isCurrentMoveWhite;
        Board board;
        vector<Player> players;
        Game() {
            Player p1(true); // p1 has taken white
            Player p2(false); // p2 has taken black
            players.push_back(p1);
            players.push_back(p2);
            // cout << "1" <<endl;
            board.resetBoard();
            // cout << "2" <<endl;
            // cout << board.cells.size();

            cout << board.getCell(1, 0).getPiece() << endl;
            // cout << board.getCell(1, 0).getPiece()->killed << " " << board.getCell(1, 0).getPiece()->white << endl;
            cout << board.getCell(1, 0).getX() << " " << board.getCell(1, 0).getY() << " " <<  board.getCell(1, 0).getPiece()->isKilled() << " " << board.getCell(1, 0).getPiece()->isWhite() << endl;
            cout << board.getCell(6, 0).getPiece() << endl;
            // cout << board.getCell(6, 0).getPiece()->killed << " " << board.getCell(6, 0).getPiece()->white << endl;
            cout << board.getCell(6, 0).getX() << " " << board.getCell(6, 0).getY() << " "  << board.getCell(6, 0).getPiece()->isKilled() << " " << board.getCell(6, 0).getPiece()->isWhite() << endl;
            // cout << addressof(board.getCell(1, 0).getPiece())
            // Piece *p = board.getCell(1, 0).getPiece();
            // cout << p->isKilled() << " " << p->isWhite() << endl;
            isCurrentMoveWhite = true;
            // setCurrentTurn();
        }
        void setCurrentTurn() {
            // bool isCurrentMoveWhite = this->isCurrentMoveWhite;
            // if(this->isCurrentMoveWhite)
            this->isCurrentMoveWhite = !(this->isCurrentMoveWhite);
            // else
            //     this->current
        }
        bool getCurrentTurn() {
            return this->isCurrentMoveWhite;
        }
        void PlayerMove(int startX, int startY, int endX, int endY, Player P) {
            if((getCurrentTurn() && P.isWhiteSide) || (!getCurrentTurn() && !P.isWhiteSide)) {
                setCurrentTurn();
                Cell startBox = board.getCell(startX, startY);
                Cell endBox = board.getCell(endX, endY);
                // cout << startBox.getX() << " " << startBox.getY() << endl;
                // cout << "Address of " << startX << " " << startY << " " << startBox.getPiece() << endl;
                // cout << startBox.getPiece()->isKilled() << " " << startBox.getPiece()->isWhite() << endl;
                // cout << board.getCell(startX, startY).getPiece()->isKilled() << " " << board.getCell(startX, startY).getPiece()->isWhite() << endl;
                // cout << endBox.getX() << " " << endBox.getY() << endl;
                // cout << startBox.getX() << " " << startBox.getY() << " " << startBox.getPiece()->isKilled() << " " << startBox.getPiece()->isWhite() << endl;
                // cout << &(board.getCell(1, 0));
                // Cell *ptr = &startBox;
                // cout << ptr;
                // Piece *pie(true, true);
                // pie = startBox.getPiece();
                // cout << startBox.getPiece() << endl;
                // bool isK = startBox.getPiece()->isKilled();
                // bool isW = startBox.getPiece()->isWhite();
                // cout << startBox.getPiece()->isKilled() << " " << startBox.getPiece()->isWhite();
                // cout << isK << " " << isW << endl;
                // Move move(&startBox, &endBox, P);
                // cout << endBox.getX() << " " << endBox.getY() << " " << endBox.getPiece()->isKilled() << " " << endBox.getPiece()->isWhite();
                if(!startBox.getPiece()->isKilled()) {
                    cout << "not killed" << endl;
                }
                else cout << "killed" << endl;
                if(startBox.getPiece()->isWhite()) {
                    cout << "white Piece" << endl;
                }
                else cout << "Black Piece" << endl;

            }
        }
};

int main() {
    Game game;
    game.PlayerMove(1, 0, 2, 0, game.players[0]);
    game.PlayerMove(6, 0, 2, 0, game.players[1]);
    
    // cout << "sdf";
}