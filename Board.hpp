#include<bits/stdc++.h>
// #include "piece.hpp"
#include "cell.hpp"
using namespace std;
class Board {
    public:
        int rows = 8;
        int cols = 8;
        // vector<vector<Cell>> cells(8, vector<Cell>(8, Cell(0, 0, NULL)));
        // vector<Cell> cells;
        // Cell cells[8][9];
        vector<vector<Cell>> cells;
    public:
        // Board() {
        //     this->resetBoard();
        // }
        Cell createCell(Piece *p, int x, int y) {
            // cout << cells.size() << endl;
            Cell cell(x, y, p);
            // cout << "address of " << x << " " << y << " " << addressof(cell) << endl;  
            return cell;
        }
        Cell getCell(int x, int y) {
            if (x < 0 || x > 7 || y < 0 || y > 7) {
                cout << "Not a valid index";
            }
            // cout << "sdfsdff" << endl;
            // cout << cells.size() << endl;
            // for(int i = 0; i < 8; i++) {
            //     cout << "hereeee" << endl;
            //     cout << cells[2][0].getX() << " " << cells[2][0].getY() << endl;
            //     // cout << cells[i][0].getPiece()->isKilled() << " " << cells[i][0].getPiece()->isWhite() << endl;
            // }
            // cout << cells[1][0].getPiece()->isKilled() << " " << cells[1][0].getPiece()->isWhite() << endl;
            return cells[x][y];
        }
        void resetBoard() {
            // cells.reserve(8, vector<Cell>(8, NULL));
            // cells.reserve(8);
            
            // Pawn obj1;
            // obj1.setColor("white");
            // obj1.isAlive(false);
            // Cell obj(1, 1, &obj1);
            // cells[0][0] = obj;
            // cout << cells[0][0].getX();
            // cout << obj.getX();

            // Piece *pp = obj->getPiece();
            // cout << pp->color << " " << pp->killed;
            // cout << obj.getPiece()->color;
            // board.push_back(obj);
            // board.resize(8, vector<Cell>(8, NULL));

            cells.resize(8, vector<Cell>(8, Cell(-1, -1, NULL)));
            // Cell obj(1, 1, new Pawn(true, true));
            
            
            Pawn p1(true, false);
            Pawn p2(true, false);
            Pawn p3(true, false);
            Pawn p4(true, false);

            Pawn p9(false, false);
            Pawn p10(false, false);
            Pawn p11(false, false);
            Pawn p12(false, false);
            // cout << "address of P1 " << addressof(p1) << endl;
            // cout << 
            cells[1][0] = createCell(&p1, 1, 0);

            
            // Cell startBox = cells[1][0];
            // cout << startBox.getX() << " " << startBox.getY() << endl;
            // cout << "In board" << endl;
            // cout << "address of P1 " << getCell(1, 0).getPiece() << endl;
            // cout << getCell(1, 0).getPiece()->isKilled() << " " << getCell(1, 0).getPiece()->isWhite() << endl;
            // cout << cells[1][0].getPiece()->isKilled() << " " << cells[1][0].getPiece()->isWhite() << endl;
            // Board board;
            // cout << cells.size() << endl;
            // getCell(1, 0);
            // cout << startBox.getPiece()->isKilled() << " " << startBox.getPiece()->isWhite() << endl;
            cells[1][1] = createCell(&p2, 1, 1);
            cells[1][2] = createCell(&p3, 1, 2);
            
            cells[6][0] = createCell(&p9, 6, 0);
            for(int i = 2; i < 6; i++) {
                for(int j = 0; j < 8; j++) {
                    cells[i][j] = createCell(NULL, i, j);
                }
            }
            

            cout << getCell(1, 0).getPiece()->isKilled() << " " << getCell(1, 0).getPiece()->isWhite() << endl;
            cout << "address of P1 " << getCell(1, 0).getPiece() << endl;
            cout << getCell(6, 0).getPiece()->isKilled() << " " << getCell(6, 0).getPiece()->isWhite() << endl;
            cout << "address of P9 " << getCell(6, 0).getPiece() << endl;
            // cout << cells[1][0].getY() << " " << cells[1][0].getPiece()->isKilled();
            // cout << cells[1][1].getY();
            // cout << cells[1][2].getY();
        }
}; 
// int main() {
    // Pawn piece;
    
    // piece.setColor("white");
    // piece.isAlive(false);
    // piece.show();
    // Board b;
    // // b.resetBoard();
    // return 0;
// }