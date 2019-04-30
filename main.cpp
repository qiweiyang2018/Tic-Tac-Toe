#include <iostream>
#include "board.h"

int main() {

	vector<int> scores(3,0); //to store scores for games

	int player;

	cout << "Choose your opponent, 1 for playing with a human and 2 for ai :" << endl;
	cin >> player;

//	play with a human
	if(player == 1)
	{
		string goOn;
		while(true)
		{
			cout << endl;
			cout << "Start A new Game? \"yes\" or \"y\" to continue, otherwise quit. " << endl;
			cout << endl;
			cin >> goOn;

			if (goOn == "yes" || goOn == "y" || goOn == "Y")
			{
				Board board;
				int score = board.play();
				if (score == 1)
					scores[0]++;
				else if (score == -1)
					scores[1]++;
				else
					scores[2]++;

				cout << "* * * * * * * * " << endl;
				if (score == 1)
					cout << board.getName1() << " Won! "<< endl;
				else if (score == -1)
					cout << board.getName2() << " Won! "<< endl;
				else
					cout <<"It is a draw! " << endl;
				cout << board.getName1() << "\'s total wins: " << scores[0] <<", " << board.getName2() << "\'s total wins: "<< scores[1];
				cout << ", draws: " << scores[2] << endl;
				cout << "* * * * * * * * " << endl;
			}
			else
				break;
		}
	}
	else
	{
		//	play with a AI
		string goOn;
		while(true)
		{
			cout << endl;
			cout << "Start A new Game? \"yes\" or \"y\" to continue, otherwise quit. " << endl;
			cout << endl;
			cin >> goOn;

			if (goOn == "yes" || goOn == "y" || goOn == "Y")
			{
				string ai{"AI"};

				Board board(ai);
				int score = board.play(board.getAI());
				if (score == 1)
					scores[0]++;
				else if (score == -1)
					scores[1]++;
				else
					scores[2]++;

				cout << endl;
				cout << "* * * * * * * * " << endl;
				if (score == 1)
					cout << board.getName1() << " Won! "<< endl;
				else if (score == -1)
					cout << board.getName3() << " Won! "<< endl;
				else
					cout <<"It is a draw! " << endl;
				cout << board.getName1() << "\'s total wins: " << scores[0] <<", " << board.getName3() << "\'s total wins: "<< scores[1];
				cout << ", draws: " << scores[2] << endl;
				cout << "* * * * * * * * " << endl;
			}
			else
				break;
		}

	}



	return 0;
}