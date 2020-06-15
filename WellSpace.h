/*
 * WellCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef WELLSPACE_H_
#define WELLSPACE_H_

#include <HazardSpace.h>

class WellSpace: public HazardSpace {
	//WellCase IS A SurpriseCase which IS A Case
public:
	WellSpace(const unsigned short number=31);
	virtual ~WellSpace();
private:
	bool doSomeThing(Game& game);
};

#endif /* WELLSPACE_H_ */
