/*
 * Game.h
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#ifndef GAME_H_
#define GAME_H_

#include <Board.h>
#include <Dice.h>
#include <vector>
class Player;
class Game {
public:
	using Dices = std::array<Dice,2>;
private:
	static const int PLAYER_MAX_NUMBER=4;
	std::vector<Player*> players;
	// c'est des pointeurs -> pointeur contient une adresse
	//à l'initialisation une pointeur contient une adresse aléatoire
	Game::Dices dices;//instances -> créé à instanciation ==> il faut un construteur sans argument
	Board board;

public:
	Game(const int playerNb=2);
	void doIt();
	virtual ~Game();
};

#endif /* GAME_H_ */
