/*
 * Player.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include <Dice.h>
#include <Piece.h>
//class Piece;
class Player {
private:
	std::string name;
	Piece* piece;
public:
	Player(std::string name);
	virtual ~Player();
	unsigned short throwDices(Dices& dices);
	std::string  getName() const;
	void setName(const std::string &name);
	 Piece*& getPiece() ;
	void setPiece(const Piece *&piece);
};
#include <map>
using Players=std::map<Player*,Piece*>;

#endif /* PLAYER_H_ */
