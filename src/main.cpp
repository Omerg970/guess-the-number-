#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kutuphane.h"
using namespace std;

int main()
{
	/*for different randoms*/ //if we didnt put this it would give us the same number always
	srand(std::time(0));
	/*variables*/
	int exit_game = 0;
	int min_n;
	int max_n;
	int game;
	int answer;
	int menu;
	int guess;
	int ctrl = 1;
	/*main loop*/ //menu selection(exit or play)
	do 
	{
		/*prints*/
		cout << "what do you want?" << endl;
		cout << "1. play" << endl << "2. exit" << endl;
		cin >> menu;
		/*our switch cases*/
		switch(menu)
		{
		case 1:

			/*playing*/ 
			game = 1; 
			answer = rand();//our secret random
			
			do {
				ctrl = 1;//if the guess true then we will make its 0
				cout << "enter the minimum number" << endl;
				cin >> min_n;
				cout << "enter the max number" << endl;
				cin >> max_n;
				answer = rand() % (max_n - min_n + 1) + min_n;//random has long border like [0, 2147483647], so we need to use operations for making borders small 

				if (max_n <= min_n) // dummy posibilities
				{
					cout << "you entered wrong, try again" << endl;
					ctrl = 0;
				}
			} while (ctrl == 0);
			
			do {
				cout << "guess the number" << endl;
				cin >> guess;
				clue(guess, answer);
				if (guess == answer) { break; }
			} while (game == 1);
			
			break;
			
		case 2: // exit case
			
			exit_game = 1;
			break;
			
		default: // for dumb posibilities
			
			cout << "you have just given wrong inut. please try again." << endl;
			break;
			
		}
	} while (exit_game == 0);
}