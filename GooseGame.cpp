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



