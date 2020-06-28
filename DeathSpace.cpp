/*
 * DeathCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <DeathSpace.h>
DeathSpace::DeathSpace():HazardSpace(DeathSpace::DEFAULT_NUMBER){

}
DeathSpace::~DeathSpace() {
	// TODO Auto-generated destructor stub
}

#include <iostream>
void DeathSpace::applyRule( ) {
	HazardSpace::applyRule();
	std::cout << "Space(" <<this->number <<"): you are dead\n";
}
