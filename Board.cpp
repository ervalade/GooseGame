/*
 * Board.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Board.h>
#include <BridgeSpace.h>
#include <DeathSpace.h>
#include <GooseSpace.h>
#include <HotelSpace.h>
#include <MazeSpace.h>
#include <PrisonSpace.h>
#include <StartSpace.h>
#include <WellSpace.h>
#include <WinningSpace.h>
std::array<unsigned short, Board::NB_CASES> Board::numbers = { 0, 1, 2, 3, 4, 5,
		6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
		25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
		43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
		61, 62, 63 };

Board::Board() {
	unsigned short rank(0);
	rank = this->addStartWinningSpaces(rank);
	rank = this->addGooseSpaces(rank);
	rank = this->addHazardSpaces(rank);
	rank = this->addRegularSpaces(rank);
}

Board::Spaces& Board::getSpaces() {
	return spaces;
}

Board::~Board() {
	for (auto &space : this->spaces) {
		delete space;
	}
}

unsigned short Board::addHazardSpaces(unsigned short rank) {
	this->spaces.at(rank++) = new WellSpace();
	this->spaces.at(rank++) = new BridgeSpace();
	this->spaces.at(rank++) = new HotelSpace();
	this->spaces.at(rank++) = new PrisonSpace();
	this->spaces.at(rank++) = new MazeSpace();
	this->spaces.at(rank++) = new DeathSpace();
	return rank;
}
unsigned short Board::addGooseSpaces(unsigned short rank) {
	for (int i(0); i < GooseSpace::NB_CASES; i++) {
		this->spaces.at(rank++) = new GooseSpace();
	}
	return rank;
}
#include <algorithm> //std::sort, std::set_difference
#include <vector>
#include <iostream>

unsigned short Board::addStartWinningSpaces(unsigned short rank) {
	this->spaces.at(rank++) = new StartSpace();
	this->spaces.at(rank++) = new WinningSpace();
	return rank;
}

unsigned short Board::addRegularSpaces(unsigned short rank) {
	//0,6,9,18,19,27,31,36,41,45,52,53,58  and 63
	//get  spaces numbers already used
	//+2 ->winning and rank spaces
	std::array<unsigned short, HazardSpace::NB_CASES + GooseSpace::NB_CASES + 2> usedSpaceNumbers;
	for (size_t i(0); i < usedSpaceNumbers.size() - 1; i++) {
		usedSpaceNumbers.at(i) = this->spaces.at(i)->getNumber();
	}

	/*
	 for (auto& n:usedSpaceNumbers){
	 std::cout << n <<' ';
	 }
	 std::cout << '\n';
	 */
	//compute unused space numbers : all space numbers - surprise space number - winning space number
	std::sort(usedSpaceNumbers.begin(), usedSpaceNumbers.end());
	std::sort(this->numbers.begin(), this->numbers.end());
	std::vector<int> unusedNumbers(
			this->numbers.size() + usedSpaceNumbers.size());
	std::vector<int>::iterator it;

	it = std::set_difference(this->numbers.begin(), this->numbers.end(),
			usedSpaceNumbers.begin(), usedSpaceNumbers.end(),
			unusedNumbers.begin());
	unusedNumbers.resize(it - unusedNumbers.begin());
	for (auto &n : unusedNumbers) {
		this->spaces.at(++rank) = new Space(n);
	}
	return rank;
}

Space* Board::getSpace(unsigned short number) {
	// je veux la space dont le numéro est number dans le array des space
	for (auto &space : this->spaces) {
		if (space->getNumber() == number)
			return space;
	}

	return nullptr;
}

Space* Board::getStartSpace() {
	return this->getSpace(0);
}
