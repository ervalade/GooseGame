/*
 * Space.h
 *
 *  Created on: 18 juin 2020
 *      Author: eric
 */

#ifndef SPACE_H_
#define SPACE_H_

class Space {
protected:
	unsigned short number;
public:
	Space(unsigned short number);
	virtual ~Space();
	virtual void applyRule();
	unsigned short getNumber() const;
	void setNumber(unsigned short number);
};

#endif /* SPACE_H_ */
