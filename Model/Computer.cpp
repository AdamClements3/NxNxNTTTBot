#include "Computer.h"
#include "Board.h"

Computer::Computer(char t, int v, int difficulty){
    diff = difficulty;
    token = t;
    val = v;
}