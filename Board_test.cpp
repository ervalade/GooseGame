/*
 * Board_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */
/*
g++ -o Board_test Board_test.cpp *Space.cpp Dice.cpp Player.cpp Game.cpp Board.cpp -I./ -std=c++14 && ./Board_test
 */
#include <Game.h>
#include <cassert>


int main(int argc, char **argv) {
	Game game;
	Board& board=game.getBoard();
	/*
	 try{
	 for (auto& player:players)
	 player.play();
	 for (auto aSpace:board.getSpaces())
	 aSpace->check();
	 }catch (std::stinf& e){
	 std::cout << "GameOver";
	 }
	 */

	for (auto &space : board.getSpaces())
		space->check(game);
	board.getSpace(0);
	return 0;
	/*
	 WinningSpace c;

	 Space& aSpace=(WinningSpace());
	 aSpace.doSomeThing();
	 */
}
