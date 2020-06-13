/*
 * Player_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */
/*
 g++ -o Player_test Player_test.cpp Player.cpp Dice.cpp Pawn.cpp *Case.cpp Board.cpp -I./ -std=c++14 && ./Player_test
 */
#include <Player.h>

#include <Board.h>
#include <cassert>

int main(int argc, char **argv) {
	using Dices = std::array<Dice,2>;
	Dices dices;
	Board board;
	Player player(board);
	player.play(dices);
	return 0;

}
