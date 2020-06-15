/*
 * Piece.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef PIECE_H_
#define PIECE_H_

class Board;
class Space;
class Player;
class Piece {
public:
	enum class Color{
		red,
		blue,
		green,
		yellow
	};
private:
	Player& player;
	Board& board;
	Space* space;
public:
	Piece(Player& player,Board& board);
	Piece();//for test purpose
	void move(int steps);
	virtual ~Piece();
	Space* getSpace() const;
	void setSpace(Space *aSpace);
	const Player& getPlayer() const;
};
#include <map>
using Pieces=std::map<Piece::color,Piece*>;
#endif /* PIECE_H_ */
