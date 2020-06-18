/*
 * JailCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef PRISONSPACE_H_
#define PRISONSPACE_H_

#include <HazardSpace.h>

class PrisonSpace: public HazardSpace {
public:
	PrisonSpace(const unsigned short number=52);
	virtual ~PrisonSpace();
private:
	bool applyRule();
};

#endif /* PRISONSPACE_H_ */
