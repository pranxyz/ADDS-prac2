#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

char Referee::refGame(HumanPlayer *player1,ComputerPlayer *player2)
{
    char result = 'A';
    char hmove = player1->makeMove();
    char cmove = player2->makeMove();
    if (hmove == cmove)
    {
        result = 'T';
    }
    else if (hmove == 'P' && cmove == 'R')
    {
        result = 'W';
    }
    else
    {
        result = 'L';
    }
    return result;
}

int main()
{
  HumanPlayer *player1 = new HumanPlayer();
  ComputerPlayer *player2 = new ComputerPlayer();
  Referee referee;

  char result;
  int i, t;
  std::cout << "how many times will you play?: ";
  std::cin >> t;
  for (i = 0; i < t; i++) {
  result = referee.refGame(player1, player2);
  std::cout << "result: " << result << std::endl;
  }
  return 0;
}
