/*
 * Board.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Board.h>


Board::Board() {
	.... addHazardSpaces(....);
	... addOutOfSpaces(...);
....
}

Board::Spaces& Board::getSpaces() {
	return spaces;
}

Board::~Board() {

}
