#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"
class Player{
    private:
        char token;
        int val;
    public:
        Player();
        Player(char, int);
        int getValue();
        char getToken();
};

#endif