//
// Created by qiwei on 4/26/2019.
//


#ifndef TTT_AGENT_H
#define TTT_AGENT_H


#include <string>
using namespace std;

class Agent
{
	friend class Board; //in order to change the board class member
public:
	Agent(); //default constructor

	static int count; //static variable to record how many instance objects have been created

    void move(vector<vector<int>>&); //Agent can change the board status through "move" method

	bool checkValidSpace(int, const vector<vector<int>>&); //Before making any moves, we must check if that space is taken.

private:
	string symbol; //one for "X", and other "O"

	string name; //customize the name of the agent instances
};


class Ai : Agent //inherit from Agent base class
{
	friend class Board;
public:
    Ai(const string& name = "AI-player");

    bool checkWinLose(vector<vector<int>>&); //if two "X" or "O" are in a line, go to the third to win or prevent losing

    void autoMove(vector<vector<int>>&); //algorithm for AI to choose the optimal move

private:
	string symbol;
	string name;
    int step;
};
#endif //TTT_AGENT_H
