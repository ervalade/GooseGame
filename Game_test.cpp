/*
 * Game_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Game.h>

/*
g++ -o Game_test Game_test.cpp Game.cpp Player.cpp Dice.cpp Case.cpp Board.cpp -I./ -std=c++14 && ./Game_test
 */
#include <Board.h>
#include <cassert>


int main(int argc, char **argv) {
	try{
Game game(3);
	}catch (std::out_of_range){
		std::cerr << "erreir"
	}
game.doIt();
}
