#include "Player.h"
#include "Board.h"

Player::Player(char t, int v){
    token = t;
    val = v;
}
char Player::getToken(){
    return token;
}
