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
void BridgeSpace::applyRule() {
	HazardSpace::applyRule();
	std::cout << "Space(" <<this->number <<"): you are on the bridge\n";
}
