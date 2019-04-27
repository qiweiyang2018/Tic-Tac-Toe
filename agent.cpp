//
// Created by qiwei on 4/26/2019.
//
#include <iostream>
#include <random>
#include "Agent.h"
#include "board.h"
using namespace std;

int Agent::count = 0;
Agent::Agent()
{
    count++;
    if (count%2 == 0)
    {
        symbol = "O";
        name = "player2";
    }

    else
    {
        symbol = "X";
        name = "player1";
    }
}

bool Agent::checkValidSpace(int num, const vector<vector<int>>& vec)
{
    int row = (num - 1)/3;
    int col = (num - 1)%3;

    if (vec[row][col] == 0)
        return true;
    else
        return false;
};
void Agent::move(vector<vector<int>>& vec)
{
    int num = 0;
    while(true)
    {
        cout << " Choose your position (1-9):  ";
        cin >> num;
        if (num < 1 || num > 9)
            cout << "Choose a valid integer between 1 - 9 " << endl;
        else if (!checkValidSpace(num, vec))
        {
            cout << "That slot has been taken, try again. " << endl;
        }
        else
            break;
    }

    int row = (num - 1)/3;
    int col = (num - 1)%3;

    if (symbol == "X")
        vec[row][col] = 1;
    else
        vec[row][col] = -1;
};


Ai::Ai(const string& difficulty)
{
    if (difficulty == "medium")
    {
        rand = 0.5; //medium ai;
        cout << "You chose a medium opponent, try to win. " << endl;
    }
    else if (difficulty == "easy")
    {
        rand = 0.2; //easy ai
        cout << "You chose an easy opponent, try not to lose. " << endl;
    }

    else if (difficulty == "expert")
    {
        rand = 1; //hard ai
        cout << "You chose an expert opponent, try if you can defeat him. " << endl;
    }
    else
    {
        rand = 0.5;
        cout << "You did not choose a valid opponent, a medium opponent is assigned to play with you" << endl;
    }

};

