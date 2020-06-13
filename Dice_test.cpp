/*
 * Dice_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */
/*
 g++ -o Dice_test Dice_test.cpp Dice.cpp -I./ -std=c++14 && ./Dice_test

 */
#include <Dice.h>
#include <cassert>
//hard to test but test not usefull  because codeis KISS
int main(int argc, char **argv) {
	Dice dice;
	for (int i(0); i < 100; i++)
		assert(
				dice.roll() <= Dice::MAX_DICE_VALUE
						&& dice.roll() >= Dice::MIN_DICE_VALUE);
	return 0;
}
