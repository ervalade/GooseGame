/*
 * HazardSpace.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <HazardSpace.h>
/*
HazardSpace::HazardSpace():Space() {
	// TODO Auto-generated constructor stub
}
*/
HazardSpace::HazardSpace(Board& board,const unsigned short number):Space(board,number) {
}

HazardSpace::~HazardSpace() {
	// TODO Auto-generated destructor stub
}
#include <iostream>
bool HazardSpace::applyRule() {
	std::cout << "Space(" << this->number << "): no luck for you! \n";
	return true;
}
