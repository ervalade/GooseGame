/*
 * DeathCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <DeathSpace.h>

DeathSpace::DeathSpace(const unsigned short number):HazardSpace(number)  {
	// TODO Auto-generated constructor stub

}

DeathSpace::~DeathSpace() {
	// TODO Auto-generated destructor stub
}

#include <iostream>
bool DeathSpace::doSomeThing(Game& game) {
	HazardSpace::doSomeThing(game);
	std::cout << "Space(" <<this->number <<"): you are dead\n";
	return true;
}
