/*
 * Player.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <Game.h>
class Player {
private:
	char name;//for test purpose, change to string later
public:
	Player(char name);
	virtual ~Player();
	uint8_t rollDices(Game::Dices& dices);
	char getName() const;
};

#endif /* PLAYER_H_ */
