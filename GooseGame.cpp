/*
 * GooseGame.cpp
 *
 *  Created on: 11 juin 2020
 *      Author: eric
 */
/*
g++ -o GooseGame GooseGame.cpp Game.cpp Player.cpp Dice.cpp Space.cpp Board.cpp -I./ -std=c++14 && ./GooseGame
 */

#include <Board.h>
#include <Dice.h>
#include <Piece.h>
#include <Player.h>

#include <Game.h>

int main(int argc, char **argv) {
	Board board;
	Dices dices;
	//Pieces piece;



	/*
	Players players={
	new Player("Pierre"),
	new Player("Paul"),
	new Player("Martine")};
	*/
	Pieces pieces={
			{Piece::Color::red,new Piece()},
			{Piece::Color::blue,new Piece()},
			{Piece::Color::green,new Piece()},
			{Piece::Color::yellow,new Piece()},
	};
	for (auto& piece:pi)
	Players players={
	{new Player("Pierre"),pieces.at(Piece::Color::red)} ,
	{new Player("Paul"),pieces.at(Piece::Color::blue)},
	{new Player("Martine"),pieces.at(Piece::Color::green)}};
	for (auto& piece:pieces){
		piece->second.setSpace(board.getStartSpace());
	}

	Game game(board,dices,players);
	game.doIt();
}

/*
a turn : for each active players
	game duplicate current board to a brand new one
	current player throws dices
	current player moves HIS piece from CURRENT space to new SPACE according to throw's result
	on the duplicated board
	game asks the duplicated board to apply rules
		board asks each space to its apply rule
		rule consists of :
		 - moving ONE piece forward to another space, if space was free
		 	 piece state = active
		 - moving ONE piece backward, to another space,
		 	 piece state = active
		 - swap spaces of two pieces (2 pieces on a regular space) :
		 	 piece states  = changed
		 - put a player in waiting state for one turn :
		 	 piece state = outOfNextTurn
		 - put a player in waiting state until another piece moves to same space
		 	 piece state = waiting

	game asks all pieces of the duplicated board for their state :
 	- outOfNextTurn
 	- waiting
	- moveForward
	- moveBackward
	- swapped (current piece moves forward, previous piece moves backward)
		game informs players about their piece state

may be I need 2 boards :the current and the next
recursive move for goose space : run turn again without throw dices, uses same dices result
 */

