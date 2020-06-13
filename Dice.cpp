/*
 * Dice.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Dice.h>
#include <cstdlib> //srand, rand
#include <ctime> //time()

Dice::Dice() {
	srand(time(NULL));
	this->roll();
}

uint8_t Dice::getValue() const {
	return value;
}

uint8_t Dice::roll() {
	this->value= (rand() % (Dice::MAX_DICE_VALUE - Dice::MIN_DICE_VALUE + 1))
			+ Dice::MIN_DICE_VALUE;
	return this->value;
}

