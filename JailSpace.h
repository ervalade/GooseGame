/*
 * JailCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef JAILSPACE_H_
#define JAILSPACE_H_

#include <HazardSpace.h>

class JailSpace: public HazardSpace {
public:
	JailSpace(const unsigned short number=52);
	virtual ~JailSpace();
private:
	bool doSomeThing(Game& game);
};

#endif /* JAILSPACE_H_ */
