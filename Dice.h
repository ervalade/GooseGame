/*
 * Dice.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef DICE_H_
#define DICE_H_
#include <cstdint>
class Dice {
public:
	static const uint8_t MIN_DICE_VALUE = 1;
	static const uint8_t MAX_DICE_VALUE = 6;
private:

	uint8_t value;
public:
	Dice();
	uint8_t roll();
	uint8_t getValue() const;
};

#endif /* DICE_H_ */
