/*
 * Piece.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef PIECE_H_
#define PIECE_H_
#include <map>
#include <Board.h>
class Space;
class Piece {
public:
	enum class Color{
		red,
		blue,
		green,
		yellow
	};
private:
	Space* space;
public:
	Piece();
	void moveToSpace(int steps, Board& board);
	virtual ~Piece();
	Space* getSpace() const;
	void setSpace(Space *aSpace);
	using Pieces=std::map<Piece::Color,Piece*>;
	static Pieces pieces;
};
#endif /* PIECE_H_ */
