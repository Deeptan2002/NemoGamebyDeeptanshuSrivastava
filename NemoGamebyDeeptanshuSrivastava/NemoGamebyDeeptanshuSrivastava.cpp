// NemoGamebyDeeptanshuSrivastava.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<windows.h>
#include<random>
using namespace std;
int target = 23;
int score;

bool oneplayer(string name)
{
	system("cls");
	int guess,userchoice;
	score = 0;
	cout << endl << endl << endl;
	cout << "\t\t\t\t Hello " << name<<endl;
	cout << "\t\t\t\t Welcome to Game of Nemo Single Player, Your target is:  " << target << endl;
	cout << "\t\t\t\t Let's See who wins get set go........."<< endl;
	cout << "\t\t\t\t You Start, Enter Your first choice between (1/2/3):  ";
	cin >> userchoice;
	score += userchoice;
	while (score < target)
	{
		if (score + 1 == 19 || score + 2 == 19 || score + 3 == 19)
		{
			guess = 19 - score;
			goto label2;
		}
		else
		{

			if (score + 1 == target || score + 2 == target || score + 3 == target)
			{
				goto label1;
			}
			else
			{
				srand((unsigned)time(NULL));
				guess = 1 + (rand() % 3);
			label2:
				cout << endl << "\t\t\t\tComputer choice is:  "<< score + guess <<endl<<endl<<endl;
				score += guess;


				if (score < target)
				{
					if (score + 3 > target)
					{

						cout << "\t\t\t\tEnter Your choice between (" << score + 1 << "/" << score + 2 << "): ";
						cin >> userchoice;

						userchoice -= score;
						score += userchoice;
					}
					else if (score + 2 > target)
					{

						cout << "\t\t\t\tEnter Your choice between (" << score + 1 << "): ";
						cin >> userchoice;

						userchoice -= score;
						score += userchoice;
					}
					else
					{

						cout << "\t\t\t\tEnter Your choice between (" << score + 1 << "/" << score + 2 << "/" << score + 3 << "): ";
						cin >> userchoice;

						userchoice -= score;
						score += userchoice;
					}

				}
				else
				{
				label1:
					cout << "\t\t\t\t Computer Won.....Better Luck Next Time.";
					Sleep(1000);
					return 0;
				}
			}
		}

		



	}
	cout << "\t\t\t\tYou Won........Congratulations.";
	Sleep(1000);
	return 1;
}

bool twoplayer(string name, string name2)
{
	system("cls");
	score = 0;
	int user1, user2,diff,diff2;
	cout <<endl<<endl<< "Enter the target:  ";
	cin >> target;
	system("cls");
	cout << endl << endl << "Your target is: "<<target;

	while (score < target)
	{
		cout << endl << endl << endl;

		if (score + 1 == target)
		{

			cout << "\t\t\t " << name << " chance (Enter the number between " << score + 1 << "):  ";
			cin >> user1;
		}
		else if (score + 2 == target)
		{

			cout << "\t\t\t " << name << " chance (Enter the number between " << score + 1 << " / " << score + 2 << "):  ";
			cin >> user1;
		}
		else
		{

			cout << "\t\t\t " << name << " chance (Enter the number between " << score + 1 << " / " << score + 2 << " / " << score + 3 << "):  ";
			cin >> user1;
		}
		diff = user1 - score;
		score += diff;
		if (score < target)
		{

			cout << endl << endl << endl;
			if (score + 1 == target)
			{

				cout << "\t\t\t " << name2 << " chance (Enter the number between " << score + 1 << "):  ";
				cin >> user2;
			}
			else if (score + 2 == target)
			{

				cout << "\t\t\t " << name2 << " chance (Enter the number between " << score + 1 << " / " << score + 2 << "):  ";
				cin >> user2;
			}
			else
			{

				cout << "\t\t\t " << name2 << " chance (Enter the number between " << score + 1 << " / " << score + 2 << " / " << score + 3 << "):  ";
				cin >> user2;
			}
			diff2 = user2 - score;
			score += diff2;
		}
		else
		{
			cout << "\t\t" << name << " Wins.";
			Sleep(1000);
			return 1;
			break;
		}
	}
	cout << "\t\t" << name2 << " Wins.";
	Sleep(1000);
	return 1;
}

bool plays()
{
	system("cls");
	string name;
	int ch;
	cout <<endl<<endl<<endl<< "\t\t\t\t Hello, Enter Your Name: ";
	cin >> name;
	cout << endl <<  endl << endl;
	cout << "\t\t\t\t Hello, "<<name<<endl;
	cout << "\t\t\t\t Please select one of the options:  "<<endl;
	cout << "\t\t\t\t 1. One Player "<<endl;
	cout << "\t\t\t\t 2. Two Player"<<endl;
	cout << endl << endl;
	cout << "\t\t\t\t Your Choice:  ";
	cin >> ch;
	if (ch == 1)
	{
		oneplayer(name);
		return 1;
	}
	else
	{
		string name2;
		cout << endl << endl << "\t\t\t\t Hello Player 2, Enter Your Name: ";
		cin >> name2;
		twoplayer(name, name2);
		return 1;
	}
	
	return 1;
}



bool abouts()
{
	int key;
label:
	system("cls");
	cout << endl << endl << endl;
	cout << "\t\t This game is one of most lovable game of childhood known as NEMO where two players plays with" << endl;
	cout << "\t\t logical and strategical mindset, here both players need to play smartly to win the game." << endl;
	cout << "\t\t This game recently came to my mind, and it fascinates me to develop a game so that everyone" << endl;
	cout << "\t\t can enjoy this game and relieve their childhood memories." << endl;
	cout << "\t\t I hope everyone will love this game." << endl << endl;
	cout << "\t\t Lots of love and regards from - Deeptanshu Srivastava." << endl;
	cout << endl << endl;
	cout << "\t\t Press Key 2 to go back: ";
	cin >> key;
	if (key == 2)
		return 1;
	else
	{
		cout << "\t\t\t\t Wrong Choice";
		goto label;
	}
}

bool instruction()
{
	int key;
label:
	system("cls");
	cout << endl << endl << endl;
	cout << "\t\t Rules you need to follow:- " << endl;
	cout << "\t\t 1. User you need to enter your name and then need to select one player or two player." << endl;
	cout << "\t\t 2. One player in which it will user vs computer and in Two player it will user vs user." << endl;
	cout << "\t\t 3. In Nemo user first need to enter number and 2nd candidate need to enter the number as per sequence." << endl;
	cout << "\t\t 4. Player reaches to target first wins the game." << endl<<endl;
	cout << "\t\t All the best from - Deeptanshu Srivastava." << endl;
	cout << endl << endl;
	cout << "\t\t Press Key 2 to go back: ";
	cin >> key;
	if (key == 2)
		return 1;
	else
	{
		cout << "\t\t\t\t Wrong Choice";
		goto label;
	}
}







int main()
{
label:
	system("cls");
	int ch;
	cout << endl << endl << endl << endl;
	cout << "\t\t\t\t Welcome to the Game of NEMO"<<endl;
	cout << "\t\t\t\t 1. Play" << endl;
	cout << "\t\t\t\t 2. Instructions" << endl;
	cout << "\t\t\t\t 3. About Us" << endl;
	cout << "\t\t\t\t 4. Exit" << endl;
	cout << "\t\t\t\t Enter the Key of your choice:  ";
	cin >> ch;
	bool play, aboutus, instructions;
	switch (ch)
	{
	case 1: {play = plays();
		goto label;
		break;
	}
	case 3: {aboutus = abouts();
		goto label;
		break; }
	case 2: {instructions = instruction();
		goto label;
		break; }
	case 4: {cout << "\\t\t\t\t Bye! See You Soon ";
		exit(0);
		break; 
		}
	default: {cout << "\\t\t\t\t Wrong Choice Entered "; goto label; }
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
