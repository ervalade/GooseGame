/*
 * Piece.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Piece.h>
#include <array>
#include <Space.h>
Piece::Piece():space(nullptr) {
}

Piece::~Piece() {
}

Space* Piece::getSpace() const {
	return space;
}

void Piece::setSpace(Space *space) {
	this->space = space;
}

void Piece::moveToSpace(int steps, Board& board) {
//	if (this->piece != nullptr) { // test if first turn pawn is on start area
		this->space->removePiece(this);
//	}
	this->space = board.getSpace(this->space->getNumber() + steps); //new case number
	this->space->addPiece(this);
}
