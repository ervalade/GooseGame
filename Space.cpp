/*
 * Space.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Space.h>
#include <Board.h>
#include<Piece.h>
/*
Space::Space(Board& board):board(board),
		number(0) {
}
*/
Space::Space(Board& board,  const unsigned short number) :
board(board),number(number) {
}
Space::~Space() {
	// TODO Auto-generated destructor stub
}

unsigned short Space::getNumber() const {
	return this->number;

}

void Space::addPiece(Piece *piece) {
	this->pieces.push_back(piece);
}

bool Space::isFree() {
	return (this->pieces.size() == 0);
}
bool Space::check() {
	if (!this->isFree())
		return this->applyRule();
	return false;
}
#include <algorithm>
void Space::removePiece(Piece *piece) {
	this->pieces.erase(std::remove(this->pieces.begin(), this->pieces.end(), piece),
			this->pieces.end());
}
#include <iostream>

bool Space::applyRule() {
	//change space of the piece(s) on the board
	//this->pieces.back()->moveToSpace(10, this->board);
	//this->removePiece(this->pieces.back());
	std::cout << "Space(" << this->number << "): no thing special to do\n";
	return false;// true is some thing done
}
