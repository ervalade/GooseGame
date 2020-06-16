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
#include <map>

//class Piece;
class Player {
private:
	std::string name;
public:
	Player(std::string name);
	virtual ~Player();
	unsigned short throwDices(Dices& dices);
	std::string  getName() const;
	void setName(const std::string &name);
public:
	using Players=std::map<Piece*,Player*>;
	static Players players;
	static void add(Piece* piece,Player* player);
};

#endif /* PLAYER_H_ */
