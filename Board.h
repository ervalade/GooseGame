/*
 * Board.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <Space.h>
#include <array>

class Board {
private://associations
	static const unsigned short NB_SPACES=64;
	using Spaces=std::array<Space*, Board::NB_SPACES>;
	Spaces spaces;

public:
	Board();
	virtual ~Board();
	Spaces& getSpaces() ;
};

#endif /* BOARD_H_ */
