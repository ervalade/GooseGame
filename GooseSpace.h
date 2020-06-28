/*
 * GooseCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef GOOSESPACE_H_
#define GOOSESPACE_H_

#include <Space.h>
#include <array>
class GooseSpace: public Space{
public:
	static const unsigned short NB_CASES=6;
private:
	static const std::array<unsigned short ,GooseSpace::NB_CASES> NUMBERS;
	static unsigned short rank;
public:
	GooseSpace();
	virtual ~GooseSpace();
private:
	void applyRule();
};

#endif /* GOOSESPACE_H_ */
