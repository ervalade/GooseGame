/*
 * WinningCase.cpp
 *
 *  Created on: 6 juin 2020
 *      Author: eric
 */

#include <WinningSpace.h>

WinningSpace::WinningSpace(const unsigned short number):Space(number) {
	// TODO Auto-generated constructor stub

}

WinningSpace::~WinningSpace() {
	// TODO Auto-generated destructor stub
}

#include <iostream>
void WinningSpace::applyRule( ) {
	std::cout << "Space(" <<this->number <<"): you are the winner ! Congratulation \n";
}
