#include <iostream>
#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

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