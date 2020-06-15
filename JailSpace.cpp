/*
 * JailCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <JailSpace.h>

JailSpace::JailSpace(const unsigned short number) :
		HazardSpace(number) {
}

JailSpace::~JailSpace() {
}

#include <iostream>
bool JailSpace::doSomeThing(Game &game) {
	HazardSpace::doSomeThing(game);
	std::cout << "Space(" << this->number
			<< "): you are a bad guy ! go to jail\n";
	return true;
}
