/*
 * BridgeCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <BridgeSpace.h>

BridgeSpace::~BridgeSpace() {
}

BridgeSpace::BridgeSpace(const unsigned short number) : HazardSpace(number) {
}
#include <iostream>
bool BridgeSpace::applyRule(Game& game) {
	HazardSpace::applyRule(game);
	std::cout << "Space(" <<this->number <<"): you are on the bridge\n";
	return true;
}
