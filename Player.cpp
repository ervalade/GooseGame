/*
 * Player.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Player.h>
Player::Player(char name):name(name){
}


uint8_t Player::rollDices(Game::Dices &dices) {
	uint8_t steps(0);
	for (auto &dice : dices) {
		steps += dice.roll();
	}
	return steps;
}

Player::~Player() {
}

char Player::getName() const {
	return name;
}
