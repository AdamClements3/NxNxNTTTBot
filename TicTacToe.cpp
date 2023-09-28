#include "Board.cpp"
#include "Player.cpp"
#include "Computer.cpp"

int main(int argc, char* argv[]){
    bool won = false;
    int turn = 0, size = atoi(argv[2]);
    Board board(size);
    Player p1;
    Computer cpu;
    while(!won){
        //print board
        board.printBoard();
        //p1 plays
        int *moves = (int*)malloc(3*sizeof(int));
        p1.getMove(moves,&board);
        board.playMove(moves[0],moves[1],moves[2],p1.getValue());
        //check for win and tie
        //swap player
        //print board
        //p2 plays
        //check for win and tie
    }
    //print board
    //establish if it was a win or tie and print message accordingly
}