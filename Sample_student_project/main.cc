//@file Main.cc
//@author Brock Ferrell
//@breif main that plays the game

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;


int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
