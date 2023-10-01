//includes
#include "Model/Model.h"
#include "View/View.h"
#include "Controller/Controller.h"
#include <variant>

int main(int argc, char* argv[]){
    View view; Controller controller;
    bool playing = true;
    while(playing){
    //start game loop

        //vars and board setup
        std::variant<Player,Computer> p1, p2;
        int diff, turn, players;
        int size = controller.getBoardSize();
        Board board(size);
        bool won = false;
        int turns = 0;
        int turnsToTie = size*size*size;
        int* move = (int*)malloc(3*sizeof(int));
        //ask for 1 or 2 players
        players = controller.getNumPlayers();
        if(players == 1){
            //if 1 player
            //ask for computer difficulty (easy or hard for now)
            //ask if the player wants to go first or second
            //set up player and computer accordingly
            diff = controller.getCompDiff();
            turn = controller.getTurn();
            if(turn == 1){
                p1 = Player('X', 1);
                p2 = Computer('O', -1, diff);
            }
            else{
                p1 = Computer('X', 1, diff);
                p2 = Player('O', -1);
            }
        }
        else{
            //else
            //set up both players
            p1 = Player('X', 1);
            p2 = Player('O', -1);
        }
        //individual game loop
        while(!won && turns != turnsToTie)
            //first player's turn
            //check for win and tie
            //swap player
            //second player's turn
            //check for win and tie
            //swap player
        
        //ask to play again
        playing = controller.getPlayAgain();
    }
    view.prompt("Thanks for playing!\n");
    return 0;
}