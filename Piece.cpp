/*
 * Piece.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Piece.h>
#include <array>
#include <Space.h>
/*
Piece::Piece():player(*(new Player())),board(*(new Board())){
};
*/
Piece::Piece() :
		piece(board.getStartSpace()) {
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
