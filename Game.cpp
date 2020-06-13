/*
 * Game.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: celia
 */

#include <Game.h>
#include <Player.h>
#include <utility>
#include <iostream>

Game::~Game() {
	// TODO Auto-generated destructor stub
}

Game::Game(const int playerNb) :
		dices( { Dice(), Dice() }), board() {
	//add exception if playerNb > PLAYER_MAX_NUMBER
	char c('a');
	for (int i(0); i < playerNb; i++) {
		this->players.push_back(new Player(c++));
		std::cout << players.at(i)->getName() << std::endl;
	}
	std::cout << "end of instantiation ============" << std::endl;

}
#include <map>
#include <algorithm>

void Game::doIt() {
	// TODO Auto-generated destructor stub
	std::map<int, Player*> orderedPlayers;
	int dicesValue(0);
	for (auto &player : players) {
		while (true) {
			dicesValue = -player->rollDices(dices); //minus for reverse + sort
			std::cout << player->getName() << " rolled dices : " << -dicesValue
					<< std::endl;
			if (orderedPlayers.find(dicesValue) == orderedPlayers.end()) {
				orderedPlayers.insert( { dicesValue, player });
				std::cout << player->getName()
						<< " rolled dices not duplicated : " << -dicesValue
						<< std::endl;
				break;
			}

		}
		std::cout << "end of player Ordering ==========" << std::endl;
		std::cout << " Game is starting =========" << std::endl;
	}
	for (auto &player : orderedPlayers) {
		dicesValue = player.second->rollDices(dices);
		std::cout << player.second->getName() << " rolled dice: " << dicesValue
				<< std::endl;
	}

}
