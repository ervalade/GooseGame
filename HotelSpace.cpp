/*
 * HotelCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <HotelSpace.h>

HotelSpace::HotelSpace(const unsigned short number):HazardSpace(number)  {
	// TODO Auto-generated constructor stub

}

HotelSpace::~HotelSpace() {
	// TODO Auto-generated destructor stub
}


#include <iostream>
bool HotelSpace::applyRule(Game& game) {
	HazardSpace::applyRule(game);
	std::cout << "Case(" <<this->number <<"): you can sleep in the hotel\n";
	return false;
}
