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
	void applyRule( );
};

#endif /* HOTELSPACE_H_ */
