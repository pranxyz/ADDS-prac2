#include <iostream>
#include "Computer.h"
#include "Human.h"

char HumanPlayer::makeMove()
{
    char move;
    std::cout << "enter move initial (in caps): ";
    std::cin >> move;
    return move;
}