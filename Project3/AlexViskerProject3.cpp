//Programming Project #3
//Created by Alex Visker
//Teacher: Hong Biao Zeng
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Delare my variables
	int Playercount;
	int Computercount;
	const int sticktotal = 21;
	int stickremain = sticktotal;
	int computer = (rand() % 3 + 1);
	bool runagain;
	char answer;

	do {
		//Tell computer what to input when player inputs sticks
		cout << "Lets Play the stick game. The rules are you have to choose betwen 1-3 sticks. The first one to zero loses." << endl;
		runagain = false;

		do {
			if (stickremain >= 3)
			{
				cout << "Please choose 1-3 sticks ";
				cin >> Playercount;
				while (Playercount > 3 || Playercount < 1)
				{
					cout << "Wrong number of sticks please pick a number between 1-3 " << endl;
					cout << "Please choose 1-3 sticks ";
					cin >> Playercount;
				}
			}
			else
			{
				cout << "Please choose 1-" << stickremain << " sticks ";
				cin >> Playercount;
				while (Playercount > stickremain || Playercount < 1)
				{
					cout << "Wrong number of sticks please pick a number between 1-" << stickremain << endl;
					cout << "Please choose 1-" << stickremain << " sticks ";
					cin >> Playercount;
				}
			}

			stickremain = stickremain - Playercount;
			cout << "You picked " << Playercount << " There are " << stickremain << " sticks left." << endl;

			if (stickremain > 0)
			{
				if (stickremain > 4)
				{
					//Computercount = rand() % 3 + 1;
					Computercount = 4 - Playercount;
					stickremain = stickremain - Computercount;
					cout << "The computer chose " << Computercount << " sticks." << "There are " << stickremain << " sticks left." << endl;
				}
				else if ((stickremain >= 2) && (stickremain <= 4))
				{
					Computercount = stickremain - 1;
					stickremain = stickremain - Computercount;
					cout << "The computer chose " << Computercount << " sticks." << "There are " << stickremain << " sticks left." << endl;
				}
				else if (stickremain = 1)
				{
					Computercount = stickremain;
					stickremain = 0;
					cout << "The computer chose " << Computercount << " sticks." << "There are " << stickremain << " sticks left." << endl;
					cout << "You won! You can beat a computer!!!" << endl;
				}
			}
			else
			{
				cout << "You lost to a computer!" << endl;
			}
		} while (stickremain > 0);

		/*cout << "Do you want to do the game again? Yes or No";
		cin >> answer;
		if (answer == 'Yes' || answer == 'yes' || answer == 'Y' || answer == 'y')
		{
		runagain = true;
		stickremain = sticktotal;
		}
		else
		{
		runagain = false;
		}*/
	} while (runagain);
}