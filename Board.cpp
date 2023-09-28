#include "Board.h"
#include <iostream>

Board::Board(int size){
    this->size = size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k = 0;k<size;k++){
                board[i][j][k] = 0;
            }
        }
    }
}
void Board::printBoard(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k = 0;k<size;k++){
                switch(board[i][j][k]){
                    case -1:
                        std::cout << "X";
                        break;
                    case 1:
                        std::cout << "O";
                        break;
                    default:
                    	std::cout << " ";
                        break;
                }
            }
            std::cout << std::endl;
        }
        std::cout << "\n" << std::endl;
    }
}

char Board::getPos(int x, int y, int z){
    return board[x][y][z];
}

bool Board::isOpen(int x, int y, int z){
	return (board[x][y][z] == 0? true : false);
}

bool Board::playMove(int x, int y, int z, int player){
	if(isOpen(x,y,z)){
		board[x][y][z] = player;
		return true;
	}
	return false;
}
