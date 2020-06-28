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
void WellSpace::applyRule() {
	HazardSpace::applyRule();
	std::cout << "Space(" <<this->number <<"): you fell in a well!\n";
}

