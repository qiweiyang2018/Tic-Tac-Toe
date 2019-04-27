//
// Created by qiwei on 4/26/2019.
//

#include <vector>
using namespace std;

#ifndef TTT_BOARD_H
#define TT_BOARD_H

class Board
{
public:
    Board();
    void printBoard();
    bool isDone();
private:
    vector<vector<char>> board;
    vector<int> player1;
    vector<int> player2;
};
#endif //TT_BOARD_H
