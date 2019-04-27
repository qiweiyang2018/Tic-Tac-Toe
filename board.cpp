//
// Created by qiwei on 4/27/19.
//

#include "board.h"
#include <iostream>


void Board::printBoard()
{
	string token;
	for (int i = 0; i < board.size(); ++i)
	{
		string row;
		if (i != 0)
		{
			cout << "----------" << endl;
		}
		for (int j = 0; j < board[0].size(); ++j)
		{
			if (board[i][j] == 1)
				token = "X";
			else if (board[i][j] == -1)
				token = "O";
			else
				token = " ";

			if (j == 2)
			{
				row += token;
			}
			else
				row += token + " | ";
		}
		cout << row << endl;
	}
}

pair<int, bool> Board::isDone()
{
	pair<int, bool> result;
//	check rows
	for (int i = 0; i < board.size(); ++i)
	{
		int sum = 0;
		sum = board[i][0] + board[i][1] + board[i][2];
		if(sum == 3)
		{
			result.first = 1;
			result.second = true;
			return result;
		}
		else if (sum == -3)
		{
			result.first = -1;
			result.second = true;
			return result;
		}
	}

//	check columns
	for (int j = 0; j < board.size(); ++j)
	{
		int sum = 0;
		sum = board[0][j] + board[1][j] + board[2][j];
		if(sum == 3)
		{
			result.first = 1;
			result.second = true;
			return result;
		}
		else if (sum == -3)
		{
			result.first = -1;
			result.second = true;
			return result;
		}
	}
//	check diagonals
	int sum1 = board[0][0] + board[1][1] + board[2][2];
	int sum2 = board[0][2] + board[1][1] + board[2][0];

	if(sum1 == 3 || sum2 == 3)
	{
		result.first = 1;
		result.second = true;
		return result;
	}
	else if (sum2 == -3 || sum1 == -3)
	{
		result.first = -1;
		result.second = true;
		return result;
	}

//	check if all spaces taken
	for (int i = 0; i < board.size(); ++i)
	{
		for (int j = 0; j < board[0].size(); ++j)
		{
			if (board[i][j] == 0)
			{
				result.first = 0;
				result.second = false;
				return result;
			}
		}

	}

	result.first = 0;
	result.second = true;
	return result;
}

int Board::play()
{
	while(!isDone().second)
	{
		printBoard();
		cout << player1.name << ":";
		player1.move(board);
		if (isDone().second)
			break;
		printBoard();
		cout << player2.name << ":";
		player2.move(board);
	}

	return isDone().first;

//	cout << "Who won? " << isDone().first <<" done: " << isDone().second << endl;
}

