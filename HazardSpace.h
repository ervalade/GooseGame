/*
 * SurpriseCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef HAZARDSPACE_H_
#define HAZARDSPACE_H_

#include <Space.h>
#include  <array>
class HazardSpace: public Space {//inheritance : generalization or specialization
	//HazardSpace IS A Space
	//Space is named Base class (mother Class)
	//HazardSpace is named derived class (daughter class)

public:
	static const int NB_CASES=6;
	HazardSpace();
	HazardSpace(const unsigned short number);

	virtual ~HazardSpace();
protected:
	bool doSomeThing(Game& game);
};

#endif /* HAZARDSPACE_H_ */
