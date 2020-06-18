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
	MazeSpace(const unsigned short number=41);
	virtual ~MazeSpace();
private:
	bool applyRule(Game& game);
};

#endif /* MAZESPACE_H_ */
