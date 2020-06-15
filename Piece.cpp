/*
 * Piece.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Board.h>
#include <Piece.h>
#include <array>
#include <Player.h>
/*
Piece::Piece():player(*(new Player())),board(*(new Board())){
};
*/
Piece::Piece(Player &player, Board &board) :
		player(player), board(board), piece(board.getStartSpace()) {
	this->piece->addPiece(this);
}

Piece::~Piece() {
}

Space* Piece::getSpace() const {
	return space;
}

const Player& Piece::getPlayer() const {
	return player;
}

void Piece::setSpace(Space *space) {
	this->space = space;
}
void Piece::move(int steps) {
//	if (this->piece != nullptr) { // test if first turn pawn is on start area
		this->space->removePiece(this);
//	}
	this->space = this->board.getSpace(this->space->getNumber() + steps); //new case number
	this->space->addPiece(this);
}
