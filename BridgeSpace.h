/*
 * BridgeCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef BRIDGESPACE_H_
#define BRIDGESPACE_H_

#include <HazardSpace.h>

class BridgeSpace: public HazardSpace {
public:
	BridgeSpace(const unsigned short number = 6);
	virtual ~BridgeSpace();
private:
	bool doSomeThing(Game& game);

};

#endif /* BRIDGESPACE_H_ */
