/*
 * HazardSpace_test.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */
/*
g++ -o  HazardSpace_test  HazardSpace_test.cpp HazardSpace.cpp Space.cpp -std=c++14 -I ./ && ./HazardSpace_test
 */
#include <HazardSpace.h>

int main(int argc, char **argv) {
	HazardSpace hazardSpace(5);
	hazardSpace.applyRule();
	return 0;
}
