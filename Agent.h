//
// Created by qiwei on 4/26/2019.
//

#include "board.h"
#include <memory>

#ifndef TTT_AGENT_H
#define TTT_AGENT_H

class Agent
{
public:

    shared_ptr<Board> move(int);
    shared_ptr<Board> checkStatus(const shared_ptr<Board> &status) {return status;}
	bool checkWin();
    bool checkOppoWin();

private:

    shared_ptr<Board> status;
};


class AI : Agent
{
public:
    AI(const string& difficulty = "medium");

    void autoMove(shared_ptr<Board>&);
private:
    shared_ptr<Board> status;
    double rand;
};
#endif //TTT_AGENT_H
