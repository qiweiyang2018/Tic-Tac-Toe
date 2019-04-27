//
// Created by qiwei on 4/26/2019.
//
#include <random>
#include "Agent.h"

AI::AI(const string& difficulty)
{
    if (difficulty == "medium")
    {
        rand = 0.6; //medium ai;
        cout << "You chose a medium opponent, try to win. " << endl;
    }
    else if (difficulty == "easy")
    {
        rand = 1.0; //easy ai
        cout << "You chose an easy opponent, try not to lose. " << endl;
    }

    else if (difficulty == "expert")
    {
        rand = 0.0; //hard ai
        cout << "You chose an expert opponent, try to draw. " << endl;
    }
    else
    {
        rand = 0.6;
        cout << "You did not choose a valid opponent, a medium opponent is assigned to play with you" << endl;
    }

};

void AI::autoMove(shared_ptr<Board>& board)
{

};