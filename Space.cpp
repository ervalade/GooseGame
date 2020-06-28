/*
 * Space.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#include <Space.h>
#include <iostream>
Space::Space(unsigned short number):number(number) {
	std::cout << "Space is instanciated" << std::endl;

}

unsigned short Space::getNumber() const {
	return number;
}
void Space::applyRule() {
	std::cout << "Regular space("<< this->number<<") is applying rule" << std::endl;
}

void Space::setNumber(unsigned short number) {
	this->number = number;
}

Space::~Space() {
	std::cout << "Space is deleted" << std::endl;
}

