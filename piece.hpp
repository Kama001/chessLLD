#include<bits/stdc++.h>
using namespace std;
class Piece {
    public: 
        bool white = false;
        bool killed = false;
        bool isWhite() {
            return white;
        }
        void setWhite(bool white) {
            this->white = white;
        }
        bool isKilled() {
            return killed;
        }
        void setKilled(bool killed) {
            this->killed = killed;
        }
        virtual bool validMove() = 0;
};

class Pawn: public Piece {
    bool validMove() {
        return true;
    }
    public:
        // void show() {
        //     cout << this->white << " " << this->killed; 
        // }
        Pawn(bool white, bool killed) {
            setWhite(white);
            setKilled(killed);
        }
};
