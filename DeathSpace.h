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
public:
	DeathSpace(const unsigned short number=58);
	virtual ~DeathSpace();
private:
	bool applyRule(Game& game);
};

#endif /* DEATHSPACE_H_ */
