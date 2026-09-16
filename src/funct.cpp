#include <iostream>
using namespace std;//more easier

void clue(int guess, int answer)//actually we dont need to add extre library for this game but i wanted to learn linking libraries.
{
	if(guess > answer)//situation 1
	{
		cout << "go down" << endl;
	}
	else if(guess < answer)//situation 2
	{
		cout << "go up" << endl;// true guess
	}
	else
	{
		cout << "you have just found it!" << endl;
	}

}