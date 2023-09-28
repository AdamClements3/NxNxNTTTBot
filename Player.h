#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"
class Player{
    private:
        char token = 'X';
        int val = 1;
    public:
        void getMove(int*, Board*);
        int getValue();
        char getToken();
};

#endif