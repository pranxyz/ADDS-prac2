#include <iostream>
#include "Computer.h"
#include "Human.h"

char HumanPlayer::getMove()
{
    return humMove;
}

void HumanPlayer::makeMove()
{
    std::cout << "Enter move: ";
    std::cin >> humMove;
}