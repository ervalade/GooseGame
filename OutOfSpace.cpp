/*
 * OutOfSpace.cpp
 *
 *  Created on: 23 juin 2020
 *      Author: eric
 */

#include <OutOfSpace.h>

const std::array<unsigned short, OutOfSpace::NB_SHAPES> OutOfSpace::NUMBERS = {
		64,65,66,67,68,69,70,71,72,73,74 };
unsigned short OutOfSpace::rank = 0;
OutOfSpace::OutOfSpace():Space(OutOfSpace::NUMBERS.at( OutOfSpace::rank++ % OutOfSpace::NB_SHAPES)) {
}

OutOfSpace::~OutOfSpace() {
	// TODO Auto-generated destructor stub
}
#include <iostream>
void OutOfSpace::applyRule() {
	std::cout << "Space(" <<this->number <<"): too far, get back !\n";
}

