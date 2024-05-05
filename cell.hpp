#include<bits/stdc++.h>
#include "piece.hpp"
using namespace std;
class Cell {
    private: 
        Piece *piece;
        int x, y;
        
    public:
        Cell() {}
        Cell(int x, int y, Piece *piece) {
            this->setPiece(piece);
            this->setX(x);
            this->setY(y);
        }
        Piece* getPiece() {
            return this->piece;
        }
        int getX() {
            return this->x;
        }
        int getY() {
            return this->y;
        }
        void setPiece(Piece *p) {
            this->piece = p;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        }
};