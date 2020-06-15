/*
 * GooseCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <GooseSpace.h>
	const std::array<unsigned short ,GooseSpace::NB_CASES> GooseSpace::NUMBERS={9,18,27,36,45,53};
	unsigned short GooseSpace::rank=0;
//should manage out_of_range !
GooseSpace::GooseSpace():Space(GooseSpace::NUMBERS.at( GooseSpace::rank++)) {
}

GooseSpace::GooseSpace(const unsigned short number):Space(number) {
}

GooseSpace::~GooseSpace() {
	// TODO Auto-generated destructor stub
}
#include <iostream>
bool GooseSpace::doSomeThing(Game& game) {
	std::cout << "Space(" <<this->number <<"): catch the goose !\n";
	return true;//
}

