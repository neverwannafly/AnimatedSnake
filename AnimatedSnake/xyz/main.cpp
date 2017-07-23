#include "Shubham's secret.hpp"
int makeSnakeBody();
void makeSnakeHead();

//Who said you cant animate with C fukin ++ ?

int main(){

    makeSnakeHead();
    return makeSnakeBody();
}
int makeSnakeBody(){
    makeSB();
    return makeSnakeBody();
}
void makeSnakeHead(){
    makeSH();
}
