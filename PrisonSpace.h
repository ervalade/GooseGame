/*
 * PrisonSpace.h
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#ifndef PRISONSPACE_H_
#define PRISONSPACE_H_

#include <HazardSpace.h>

class PrisonSpace: public HazardSpace {
public:
	PrisonSpace(unsigned short number);
	virtual ~PrisonSpace();
	void applyRule();
};

#endif /* PRISONSPACE_H_ */
