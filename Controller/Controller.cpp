#include "Controller.h"
#include "../View/View.h"
#include "../Model/Board.h"
#include "../Model/Player.h"
#include "../Model/Computer.h"
#include <iostream>

View view;

bool Controller::getPlayAgain(){
    char in;
    while(true){
        view.prompt("Would you like to play again? (Y/N): ");
        std::cin >> in;
        if(in == 'Y' || in == 'y'){
            return true;
        }
        else if(in == 'N' || in == 'n'){
            return false;
        }
        else{
            std::cout << "Invalid input" << std::endl;
        }
    }
    
}

int Controller::getNumPlayers(){
    int players = 0;
    while(players != 1 && players != 2){
        view.prompt("Please enter the number of human players (1 or 2): ");
        std::cin >> players;
        if(players == 1 || players == 2){
            return players;
        }
        else{
            view.prompt("Invalid number. Number of players must be 1 or 2\n");
        }
    }
}

int Controller::getCompDiff(){
    int diff = 0;
    while(diff != 1 && diff != 2){
        view.prompt("Please enter the difficulty for the computer player (1 = Easy, 2 = Hard): ");
        std::cin >> diff;
        if(diff == 1 || diff == 2){
            return diff;
        }
        else{
            view.prompt("Invalid difficulty. Difficulty must be 1 or 2\n");
        }
    }
}

int Controller::getTurn(){
    int turn = 0;
    while(turn != 1 && turn != 2){
        view.prompt("Would you like to go first or second? (1 = first, 2 = second): ");
        std::cin >> turn;
        if(turn == 1 || turn == 2){
            return turn;
        }
        else{
            view.prompt("Invalid turn number. Turn must be 1 or 2\n");
        }
    }
}

int Controller::getBoardSize(){
    int size = 0;
    while(size < 3 || size > 5){
        view.prompt("Enter a board size (3, 4, or 5): ");
        std::cin >> size;
        if(size >= 3 && size <= 5){
            return size;
        }
        else{
            view.prompt("Invalid size. Size must be 3, 4, or 5");
        }
    }
}

void Controller::getMove(Player p, int* move, Board* board){
    view.prompt("Player " + std::to_string(p.getToken()) + ", Make your move (x y z, zero-indexed): ");
    std::cin >> move[0] >> move[1] >> move[2];
    if(move[0] >= 0 && move[0] < board->getSize() &&
       move[1] >= 0 && move[1] < board->getSize() &&
       move[2] >= 0 && move[2] < board->getSize()){
        if(board->getPos(move[0],move[1],move[2]) == 0){
            board->playMove(move[0],move[1],move[2],p.getValue());
            return;
        }
        else{
            view.prompt("Position is already occupied");
        }
    }
    else{
        view.prompt("Position is out of bounds.");
    }
}

void Controller::getMove(Computer c, int* move, Board* board){

}