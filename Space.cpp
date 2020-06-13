/*
 * Case.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Space.h>
Space::Space() :
		number(0) {
}

Space::Space(const unsigned short number) :
		number(number) {
}

Space::~Space() {
}

unsigned short Space::getNumber() const {
	return this->number;

}
