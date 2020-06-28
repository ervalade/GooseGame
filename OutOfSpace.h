/*
 * OutOfSpace.h
 *
 *  Created on: 23 juin 2020
 *      Author: eric
 */

#ifndef OUTOFSPACE_H_
#define OUTOFSPACE_H_

#include <Space.h>
#include <array>

class OutOfSpace: public Space {
	public:
	static const unsigned short NB_SHAPES=11;
private:
	static const std::array<unsigned short ,OutOfSpace::NB_SHAPES> NUMBERS;
	static unsigned short rank;
public:
	OutOfSpace();
	void applyRule();
	virtual ~OutOfSpace();
};

#endif /* OUTOFSPACE_H_ */
