#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

char Referee::refGame(Human *player1,Computer *player2)
{
    char result = 'A';
    player1->makeMove();
    char hmove = player1->getMove();
    player2->makeMove();
    char cmove = player2->getMove();

    if (hmove == 'R')
    {
        result = 'T';
    }
    else if (hmove == 'P')
    {
        result = 'W';
    }
    else if(hmove == 'S')
    {
        result = 'L';
    }
    else
        result = 'L';

  return result;
}
