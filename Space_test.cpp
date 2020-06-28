/*
 * Space_test.cpp
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */
/*
g++ -o  Space_test  Space_test.cpp Space.cpp -std=c++14 -I ./ && ./Space_test
 */
#include <Space.h>

int main(int argc, char **argv) {
	Space space(5);
	space.applyRule();
	return 0;
}
