/*
 * Dice.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef DICE_H_
#define DICE_H_

class Dice {
public:
	static const unsigned short MIN_DICE_VALUE = 1;
	static const unsigned short  MAX_DICE_VALUE = 6;
private:

	unsigned short  value;
public:
	Dice();
	unsigned short  roll();
	unsigned short  getValue() const;
};
#include <array>
using Dices=std::array<Dice,2>;

#endif /* DICE_H_ */
