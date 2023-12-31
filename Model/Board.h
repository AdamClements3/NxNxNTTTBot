#ifndef BOARD_H
#define BOARD_H

#include <vector>
class Board{
    private:
        int size;
        std::vector<std::vector<std::vector<int>>> board;
    public:
        Board(int);
        int getPos(int, int, int);
        bool isOpen(int, int, int);
        bool playMove(int, int, int, int);
        int getSize();
};

#endif