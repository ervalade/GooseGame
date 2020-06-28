/*
 * LabyrinthCase.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef MAZESPACE_H_
#define MAZESPACE_H_

#include <HazardSpace.h>

class MazeSpace: public HazardSpace {
public:
	MazeSpace(const unsigned short number=42);
	virtual ~MazeSpace();
private:
	void applyRule( );
};

#endif /* MAZESPACE_H_ */
