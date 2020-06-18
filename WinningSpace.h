/*
 * WinningCase.h
 *
 *  Created on: 6 juin 2020
 *      Author: eric
 */

#ifndef WINNINGSPACE_H_
#define WINNINGSPACE_H_

#include <Space.h>

class WinningSpace: public Space {
public:
	WinningSpace(const unsigned short number=63);
	virtual ~WinningSpace();
private:
	bool applyRule(Game& game);
};

#endif /* WINNINGSPACE_H_ */
