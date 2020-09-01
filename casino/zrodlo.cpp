
#include <string>
#include "Nagłówek.h"
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
std::string name;
double deposit;
double newDeposit;
int random;
double bet;
int wybor;
int Usernumber;

void intro() {
	cout << "=================" << endl;
	cout << "        Menu     " << endl;
	cout << "=================" << endl;
}
void payment() {
	cout << "HOW MUCH YOU WANT TO DEPOSIT : " ;
	cin >> newDeposit;
	deposit += newDeposit;
	cout << endl << "your balance now: " << deposit << endl;
	menu();
}
void pobierzWartosci()
{
	//tu przydałby sie konstruktor 
	cout << "podaj nick : ";
	cin >> name;
	cout << "podaj depozyt : ";

cin >> deposit;
}
void trafienie()
{
	cout << "win: " << 10 * bet;
	deposit = deposit + 10 * bet;
	cout << ", deposit now: " << deposit << endl;
	

}
void nietrafienie() {
	cout << "lost " << bet;
	deposit = deposit - bet;
	cout << ", deposit now: " << deposit << endl;
	

}
void dice()
{
	system("cls");
	cout << "=================" << endl;
	cout << " The Game Rules :\n - place your bet\n - if match you won 10x bet \n - if no guess, lost your bet" << endl;
	cout << "=================" << endl;

	cout << "1.  you have :" << deposit  << ", place your bet : ";
	if (deposit == 0)
	{
		cout << "To play, please  place deposit. " << endl;
		menu();
	}
	cin >> bet;
	while (bet > deposit)
	{
		cout << "brak odpowiedniej sumy w depozycie, podaj ponownie: ";
		cin >> bet;
	}
	cout << "2. choose number from 1 - 10 : " ;
	cin >> Usernumber;

	cout << "3. wait for number : ";
	srand(time(0));
	random = (rand() % 10 + 1);
	std::cout << random << std::endl;
	if (Usernumber == random)
	{
		trafienie();
	}
	else
	{
		nietrafienie();
	}
	menu();
}
void menu()
{
	cout << " === Main menu === " << endl;
	cout << "1. play the game. (Deposit = "<<deposit<<")\n";
	cout << "2. wyjsc z gry \n";
	cout << "3. place deposit \n\n what next : ";
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		dice();
		break;
	case 2:
		cout << "do widzenia , dzieki za gre " << name << " :)" << endl;;
		Sleep(2000);
		exit(0);
		break;
	case 3:
		payment();
		break;
	default:
		break;
	}
}


