/*
 * HotelCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef HOTELSPACE_H_
#define HOTELSPACE_H_

#include <HazardSpace.h>

class HotelSpace: public HazardSpace {
public:
	HotelSpace(const unsigned short number=19);
	virtual ~HotelSpace();
private:
	bool applyRule(Game& game);
};

#endif /* HOTELSPACE_H_ */
