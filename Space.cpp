/*
 * Space.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Space.h>
Space::Space() :
		number(0) {
}

Space::Space(const unsigned short number) :
		number(number) {
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
bool Space::check(Game& game) {
	if (!this->isFree())
		return this->doSomeThing(game);
	return false;
}
#include <algorithm>
void Space::removePiece(Piece *piece) {
	this->pieces.erase(std::remove(this->pieces.begin(), this->pieces.end(), piece),
			this->pieces.end());
}
#include <iostream>

bool Space::doSomeThing(Game& game) {
	std::cout << "Space(" << this->number << "): no thing special to do\n";
	return false;// true is some thing done
}
