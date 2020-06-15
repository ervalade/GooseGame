/*
 * Player.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Player.h>
Player::Player(std::string name):name(name),piece(nullptr){
}


unsigned short Player::throwDices(Dices &dices) {
	unsigned short steps(0);
	for (auto &dice : dices) {
		steps += dice.roll();
	}
	return steps;
}

Player::~Player() {
}

void Player::setName(const std::string &name) {
	this->name = name;
}

 Piece*& Player::getPiece()  {
	return piece;
}

void Player::setPiece(const Piece *&piece) {
	this->piece = piece;
}

std::string  Player::getName() const {
	return name;
}
