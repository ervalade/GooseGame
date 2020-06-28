/*
 * PrisonSpace.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#include <PrisonSpace.h>
#include <iostream>

PrisonSpace::PrisonSpace(unsigned short number):HazardSpace(number) {
	std::cout << "PrisonSpace is instanciated" << std::endl;

}

PrisonSpace::~PrisonSpace() {
	std::cout << "PrisonSpace is deleted" << std::endl;
}

void PrisonSpace::applyRule() {
	HazardSpace::applyRule();
	std::cout << "PrisonSpace space("<< this->number<<") is applying rule: bad guy" << std::endl;
}
