/*
 * StartCase.cpp
 *
 *  Created on: 9 juin 2020
 *      Author: eric
 */

#include <StartSpace.h>

StartSpace::StartSpace(const unsigned short number):Space(number) {
	// TODO Auto-generated constructor stub

}

StartSpace::~StartSpace() {
	// TODO Auto-generated destructor stub
}
#include <iostream>
bool StartSpace::doSomeThing(Game& game) {
	std::cout << "Space(" <<this->number <<"): you are on start, ready to play\n";
	return false;
}
