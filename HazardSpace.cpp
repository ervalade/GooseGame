/*
 * HazardSpace.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#include <HazardSpace.h>
#include <iostream>

HazardSpace::HazardSpace(unsigned short number):Space(number) {
	std::cout << "HazardSpace is instanciated" << std::endl;

}

HazardSpace::~HazardSpace() {
	std::cout << "HazardSpace is deleted" << std::endl;
}

void HazardSpace::applyRule() {
	std::cout << "HazardSpace space ! No luck" << std::endl;
}
