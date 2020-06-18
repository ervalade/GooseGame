/*
 * JailCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <PrisonSpace.h>

PrisonSpace::PrisonSpace(const unsigned short number) :
		HazardSpace(number) {
}

PrisonSpace::~PrisonSpace() {
}

#include <iostream>
bool PrisonSpace::applyRule(Game &game) {
	HazardSpace::applyRule(game);
	std::cout << "Space(" << this->number
			<< "): you are a bad guy ! go to jail\n";
	return true;
}
