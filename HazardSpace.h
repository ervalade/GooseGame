/*
 * HazardSpace.h
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#ifndef HAZARDSPACE_H_
#define HAZARDSPACE_H_

#include <Space.h>

class HazardSpace: public Space {
public:
	HazardSpace(unsigned short number);
	virtual ~HazardSpace();
	void applyRule();
};

#endif /* HAZARDSPACE_H_ */
