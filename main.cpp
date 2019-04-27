#include <iostream>
#include "board.h"

int main() {

	vector<int> scores(3,0);

	int player;

	cout << "Choose your opponent, 1 for playing with a human and others for ai :" << endl;
	cin >> player;

	if(player == 1)
	{
		string goOn;
		while(true)
		{
			cout << endl;
			cout << "Start A new Game, \"yes\" or \"y\" to continue, otherwise quit. " << endl;
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

				cout << board.getName1() << " wins: " << scores[0] <<", " << board.getName2() << " wins: "<< scores[1];
				cout << ", draw: " << scores[2] << endl;
			}
			else
				break;
		}
	}
	else
	{
		string goOn;
		while(true)
		{
			cout << endl;
			cout << "Start A new Game, \"yes\" or \"y\" to continue, otherwise quit. " << endl;
			cout << endl;
			cin >> goOn;

			if (goOn == "yes" || goOn == "y" || goOn == "Y")
			{
				string ai;
				cout << "Choose your AI opponent level: " << endl;
				cin>> ai;

				Board board;
				int score = board.play();
				if (score == 1)
					scores[0]++;
				else if (score == -1)
					scores[1]++;
				else
					scores[2]++;

				cout << board.getName1() << " wins: " << scores[0] <<", " << board.getName2() << " wins: "<< scores[1];
				cout << ", draw: " << scores[2] << endl;
			}
			else
				break;
		}

	}



	return 0;
}