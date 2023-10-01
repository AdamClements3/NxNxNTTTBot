#include "View.h"
#include "../Model/Board.h"
#include <iostream>

void View::displayBoard(Board* board){
    for(int i=0;i<board->getSize();i++){
        for(int j=0;j<board->getSize();j++){
            for(int k=0;k<board->getSize();k++){
                std::cout << board->getPos(i,j,k) << " | ";
            }
            std::cout << "\b\n-----------\n";
        }
        std::cout << "\n" << std::endl;
    }
}

void View::prompt(std::string s){
    std::cout << s;
}