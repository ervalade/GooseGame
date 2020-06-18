/*
 * WellCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <WellSpace.h>

WellSpace::WellSpace(const unsigned short number):HazardSpace(number) {

}

WellSpace::~WellSpace() {
}

#include <iostream>
bool WellSpace::applyRule(Game& game) {
	HazardSpace::applyRule(game);
	std::cout << "Space(" <<this->number <<"): you fell in a well!\n";
	return true;
}

