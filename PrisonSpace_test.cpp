/*
 * PrisonSpace_test.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */
/*
g++ -o  PrisonSpace_test  PrisonSpace_test.cpp PrisonSpace.cpp HazardSpace.cpp Space.cpp -std=c++14 -I ./ && ./PrisonSpace_test
 */

#include <PrisonSpace.h>
#include <vector>

int main(int argc, char **argv) {

	PrisonSpace prisonSpace(5);
	prisonSpace.applyRule();

	std::vector<Space*> spaces;
	spaces.push_back(new Space(2)); // constructor Space
	spaces.push_back(new HazardSpace(3)); //constructors Space, et HazardSpace
	spaces.push_back(new PrisonSpace(4)); //constructors Space, et HazardSpace et PrisonSpace

	for (auto &space : spaces) {
		space->applyRule(); // the message of the type of objet
	}
	return 0;
}
