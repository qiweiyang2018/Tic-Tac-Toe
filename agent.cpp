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

//check the slot if taken or not
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


Ai::Ai(const string& n)
{
    count++;
    step = 0;
    name = n;
    symbol = "O";
};

bool Ai::checkWinLose(vector<vector<int>>& vec)
{

//    check row
    for (int i = 0; i < vec.size(); ++i)
    {
        int sum = 0;
        sum = vec[i][0] + vec[i][1] + vec[i][2];
        if (sum == -2)
        {
            if(vec[i][0]==0) vec[i][0] = -1;
            if(vec[i][1]==0) vec[i][1] = -1;
            if(vec[i][2]==0) vec[i][2] = -1;
            return true;
        }
    }

//	check columns
    for (int j = 0; j < vec.size(); ++j)
    {
        int sum = 0;
        sum = vec[0][j] + vec[1][j] + vec[2][j];
        if (sum == -2)
        {
            if(vec[0][j]==0) vec[0][j] = -1;
            if(vec[1][j]==0) vec[1][j] = -1;
            if(vec[2][j]==0) vec[2][j] = -1;
            return true;
        }
    }
//	check diagonals
    int sum1 = vec[0][0] + vec[1][1] + vec[2][2];
    int sum2 = vec[0][2] + vec[1][1] + vec[2][0];

    if(sum1 == -2)
    {
        if(vec[0][0]==0) vec[0][0] = -1;
        if(vec[1][1]==0) vec[1][1] = -1;
        if(vec[2][2]==0) vec[2][2] = -1;
        return true;
    }

    if(sum2 == -2)
    {
        if(vec[0][2]==0) vec[0][2] = -1;
        if(vec[1][1]==0) vec[1][1] = -1;
        if(vec[2][0]==0) vec[2][0] = -1;
        return true;
    }

    for (int i = 0; i < vec.size(); ++i)
    {
        int sum = 0;
        sum = vec[i][0] + vec[i][1] + vec[i][2];
        if (sum == 2)
        {
            if(vec[i][0]==0) vec[i][0] = -1;
            if(vec[i][1]==0) vec[i][1] = -1;
            if(vec[i][2]==0) vec[i][2] = -1;
            return true;
        }
    }

    for (int j = 0; j < vec.size(); ++j)
    {
        int sum = 0;
        sum = vec[0][j] + vec[1][j] + vec[2][j];
        if (sum == 2)
        {
            if(vec[0][j]==0) vec[0][j] = -1;
            if(vec[1][j]==0) vec[1][j] = -1;
            if(vec[2][j]==0) vec[2][j] = -1;
            return true;
        }
    }
    if(sum1 == 2)
    {
        if(vec[0][0]==0) vec[0][0] = -1;
        if(vec[1][1]==0) vec[1][1] = -1;
        if(vec[2][2]==0) vec[2][2] = -1;
        return true;
    }

    if(sum2 == 2)
    {
        if(vec[0][2]==0) vec[0][2] = -1;
        if(vec[1][1]==0) vec[1][1] = -1;
        if(vec[2][0]==0) vec[2][0] = -1;
        return true;
    }
    return false;
}
void Ai::autoMove(vector<vector<int>>& vec)
{
    ++step;
    bool moved;
    if (vec[1][1] == 0 && step == 1) //if center not taken, take it
    {
        vec[1][1] = -1;
        return;
    }

    else if (vec[1][1] != 0 && step == 1) //if center taken, take a corner
    {
        vec[0][0] = -1;
        return;
    }

    moved = checkWinLose(vec);

    if (step == 2 && !moved)
    {
        if ((vec[0][0] + vec[2][2] == 2) ||  (vec[2][0] + vec[0][2] == 2))
            vec[0][1] = -1;

        else if(vec[2][2] == 1)
            vec[2][0] = -1;
        else
        {
            for (int i = 0; i < vec.size(); ++i) {
                for (int j = 0; j < vec[0].size(); ++j)
                {
                    if (vec[i][j] == 0)
                    {
                        vec[i][j] = -1;
                        return;
                    }
                }
            }
        }
    }
    else if (!moved)
    {
        for (int i = 0; i < vec.size(); ++i) {
            for (int j = 0; j < vec[0].size(); ++j)
            {
                if (vec[i][j] == 0)
                {
                    vec[i][j] = -1;
                    return;
                }
            }
        }
    }
}