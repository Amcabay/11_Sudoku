#include <iostream>
#include "GameManager.h"

int main() {
	Board board;
	Player player;
	GameManager game(&board, &player);

	int menu = 10;
	while (menu != 0)
	{
		std::cout << "\n<<- Menu ->>" << std::endl
			<< "1. Play" << std::endl
			<< "2. Continue " << std::endl
			<< "3. Set Player Name" << std::endl
			<< "0. Exit" << std::endl
			<< "Input []: "; std::cin >> menu;

		switch (menu)
		{
		case 1:
			game.play();
			break;
		case 2:
			game.continue_game();
			break;
		case 3:
			game.set_player_username();
			break;
		case 0:
			break;
		default:;
		}
	}
}