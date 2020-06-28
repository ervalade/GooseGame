/*
 * LabyrinthCase.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <MazeSpace.h>

MazeSpace::MazeSpace(const unsigned short number):HazardSpace(number) {
	// TODO Auto-generated constructor stub

}

MazeSpace::~MazeSpace() {
	// TODO Auto-generated destructor stub
}

#include <iostream>
void MazeSpace::applyRule() {
	HazardSpace::applyRule();
	std::cout << "Space(" <<this->number <<"): you are in the maze !\n";
}
