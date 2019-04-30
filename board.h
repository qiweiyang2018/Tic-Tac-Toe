//
// Created by qiwei on 4/26/2019.
//

#ifndef TTT_BOARD_H
#define TT_BOARD_H

#include <vector>
#include "Agent.h"
using namespace std;


class Board
{

public:
    Board(): board(3, vector<int>(3,0)), player1(),player2() {} //inline default constructor
    Board(const string& level): board(3, vector<int>(3,0)), player1(), p3(level) {} //constructor for ai

	string getName1() const { return player1.name;}
	string getName2() const { return player2.name;}
	string getName3() const { return p3.name;}
	Ai getAI() { return p3;}
	//~Board(); //built-in data type does not need destructors. Only dynamic memory needs
	int play(); //two human players

    int play(Ai p3); //overloading play() function; human vs Ai

	void printBoard();

	pair<int, bool> isDone(); //(1, true) player 1 win, (-1, true) player2 win, otherwise draw

private:
    vector<vector<int>> board; //3x3 board
    Agent player1;
	Agent player2;
	Ai p3;

};
#endif //TT_BOARD_H
