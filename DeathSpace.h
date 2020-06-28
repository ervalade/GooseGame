/*
 * DeathCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef DEATHSPACE_H_
#define DEATHSPACE_H_

#include <HazardSpace.h>

class DeathSpace: public HazardSpace {
private:
	const static unsigned short DEFAULT_NUMBER = 58;
public:
	DeathSpace();
	virtual ~DeathSpace();
private:
	void applyRule();
};

#endif /* DEATHSPACE_H_ */
