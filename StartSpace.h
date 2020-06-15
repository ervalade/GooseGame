/*
 * StartCase.h
 *
 *  Created on: 9 juin 2020
 *      Author: eric
 */

#ifndef STARTSPACE_H_
#define STARTSPACE_H_

#include <Space.h>

class StartSpace: public Space {
public:
	StartSpace(const unsigned short number = 0);
	virtual ~StartSpace();
private:
	bool doSomeThing(Game& game);
};

#endif /* STARTSPACE_H_ */
