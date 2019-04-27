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

	friend class Agent;
	friend class Ai;
public:
    Board(): board(3, vector<int>(3,0)), player1(),player2() {} //inline default constructor
//    bool checkValidMove(int);

	string getName1() { return player1.name;}
	string getName2() { return player2.name;}
	//~Board(); //built-in data type does not need destructors. Only dynamic memory needs
	int play();
	void printBoard();
	pair<int, bool> isDone(); //(1, true) player 1 win, (-1, true) player2 win, otherwise draw

private:
    vector<vector<int>> board; //3x3 board
    Agent player1; //mark the slots that player1 holds
	Agent player2; //mark the slots that player2 holds

};
#endif //TT_BOARD_H
