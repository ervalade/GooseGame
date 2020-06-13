/*
 * Space_test.cpp
 *
 *  Created on: 4 juin 2020
 *      Author: eric
 */

/* Command to build Space_test executable
 What Space_test does ? what is its main purpose ?
 It has to test Space class
 Space class ; where the code is ?Space.h + Space.cpp

 g++ -c Space.cpp -I./ -std=c++14 => Space.o
 g++ -o Space_test Space_test.cpp Space.o -I./ -std=c++14

g++ -o Space_test Space_test.cpp *Space.cpp Player.cpp Dice.cpp Board.cpp Piece.cpp -I./ -std=c++14 && ./Space_test

 */

#include <Pawn.h>
#include <cassert>
#include <Board.h>
#include <Player.h>
#include <Space.h>
int main(int argc, char **argv) {
	{ //default constructor , getters
		Space space; //Why I wrote this ?
		//Space ? une classe -> un type (d'objet) -> allouer espace mémoire/semantique
		// on crée une instance, aSpace, de la classe Space, le contructeur
		// par défaut est invoqué (exécuté)
		//Toujours initialisé l'espace mémoire
		assert(space.getNumber() == 0);
	}

	{	//constructor with number, getters
		Space space(1);
		assert(space.getNumber() == 1);
	}
	{//case with a pawn
		Board board;
		Player player(board);
		Space space(2);
		assert(space.getNumber() == 2);
		assert(space.isFree());
		Piece* pawn=player.getPawn();
		space.addPawn(pawn);
		assert(!space.isFree());
		space.removePawn(pawn);
		assert(space.isFree());
	}
	return 0;
}
