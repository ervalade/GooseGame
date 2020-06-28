/*
 * Board_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */
/*
g++ -o Board_test Board_test.cpp *Case.cpp Board.cpp -I./ -std=c++14 && ./Board_test
 */
#include <Board.h>
#include <cassert>
#include <WinningCase.h>
#include <SurpriseCase.h>

int main(int argc, char **argv) {

	Board board;
	/*
	try{
	for (auto& player:players)
		player.play();
	for (auto aCase:board.getCases())
		aCase->check();
}catch (std::stinf& e){
	std::cout << "GameOver";
}
*/

	for (auto& space:board.getSpaces())
		space->applyRule();
	return 0;
	/*
	WinningCase c;

 Case& aCase=(WinningCase());
	aCase.doSomeThing();
*/
}
