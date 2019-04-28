//
// Created by qiwei on 4/26/2019.
//


#ifndef TTT_AGENT_H
#define TTT_AGENT_H


#include <string>
using namespace std;

class Board;

class Agent
{
	friend class Board;
public:
	Agent();
	static int count;
    void move(vector<vector<int>>& );
	bool checkValidSpace(int, const vector<vector<int>>&);

private:
	string symbol;
	string name;
};


class Ai : Agent
{
	friend class Board;
public:
    Ai(const string& name = "AI-player");

    bool checkWinLose(vector<vector<int>>&);
    void autoMove(vector<vector<int>>&);

private:
	string symbol;
	string name;
    int step;
};
#endif //TTT_AGENT_H
