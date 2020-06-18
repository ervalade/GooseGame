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
	static const unsigned short NB_CASES=64;
	static std::array<unsigned short ,Board::NB_CASES> numbers;
	using Spaces=std::array<Space*, Board::NB_CASES>;

	Spaces spaces;

public:
	Board();
	virtual ~Board();
	Spaces& getSpaces() ;
	Space* getSpace(unsigned short number);
	Space* getStartSpace();

private:
	unsigned short addStartWinningSpaces(unsigned short rank);
	unsigned short addHazardSpaces( unsigned short rank);
	unsigned short addGooseSpaces( unsigned short rank);
	unsigned short addRegularSpaces(unsigned short rank);
};

#endif /* BOARD_H_ */
