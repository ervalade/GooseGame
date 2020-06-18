/*
 * Space.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef SPACE_H_
#define SPACE_H_
class Piece;
class Board;
#include<vector>
class Space {
protected:
	Board& board;
protected: //attribut, property
	unsigned short number;
private: //association
	std::vector<Piece*> pieces;
public:
//	Space(Board& board);
	Space(Board& board,const unsigned short number);
	void addPiece(Piece *piece);
	void removePiece(Piece *piece);
	virtual ~Space();
	unsigned short getNumber() const;
	bool isFree();
	bool check();
private:
	virtual bool applyRule();
};
#endif /* SPACE_H_ */
