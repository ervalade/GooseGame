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
	static const unsigned short NB_SPACES=75;
	using Spaces=std::array<Space*, Board::NB_SPACES>;
	Spaces spaces;

public:
	Board();//build the board => add the various spaces
	virtual ~Board();
	Spaces& getSpaces() ;
private:
	.... addHazardSpaces(....);//instanciation
	.... addOutOfSpaces(...);//loop
	.... addGooseSpaces(...);//loop
	.... addRegularSpaces(...);//not so easy
	.... addStartWinningSpaces(...);//instanciation




};

#endif /* BOARD_H_ */
