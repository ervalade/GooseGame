/*
 * Case.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef SPACE_H_
#define SPACE_H_
class Piece;
#include<vector>
class Space {
protected: //attribut, property
	unsigned short number;
public:
	Space();
	Space(const unsigned short number);
	virtual ~Space();
	unsigned short getNumber() const;
};

#endif /* SPACE_H_ */
