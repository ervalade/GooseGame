/*
 * Game.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

#include <Game.h>
#include <Player.h>

Game::~Game() {
	// TODO Auto-generated destructor stub
}
#include <iostream>
Game::Game(const int playerNb) :
		dices( { Dice(), Dice() }), board() {
	//add exception if playerNb > PLAYER_MAX_NUMBER
	char c('a');
	for (int i(0); i < playerNb; i++) {
		this->players.push_back(new Player(c++));
	}
}
void Game::doIt() {
}

