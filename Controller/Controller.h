#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller{
    public:
        void getMove(int*);
        bool getPlayAgain();
        int getCompDiff();
        int getNumPlayers();
        int getTurn();
        int getBoardSize();
        void getMove(Player, int*, Board*);
        void getMove(Computer, int*, Board*);
};

#endif