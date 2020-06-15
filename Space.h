/*
 * Space.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef SPACE_H_
#define SPACE_H_
class Piece;
class Game;
#include<vector>
class Space {
protected: //attribut, property
	unsigned short number;
private: //association
	std::vector<Piece*> pieces;
public:
	Space();
	Space(const unsigned short number);
	void addPiece(Piece *piece);
	void removePiece(Piece *piece);
	virtual ~Space();
	unsigned short getNumber() const;
	bool isFree();
	bool check(Game& game);
private:
	virtual bool doSomeThing(Game& game);
};
#endif /* SPACE_H_ */
