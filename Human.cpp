#include <iostream>
#include "Computer.h"
#include "Human.h"

char Human::getMove()
{
    return humMove;
}

void Human::makeMove()
{
    std::cout << "Enter move: ";
    std::cin >> humMove;
}
