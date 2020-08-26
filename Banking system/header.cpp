#include "Nagłówek.h"
using namespace std;
#include <stdlib.h>
#include "windows.h" 
#include <vector>
#include <list>
char wybor;
int key;
int liczba_rekordow;
string NewName; 
double NewSaldo;

struct Rekord {
	int AccNo;
	string name;
	double saldo;
};

Rekord rekord1 = { 1,"Marian", 100.90 };
Rekord rekord2 = { 2,"Kokos", 500.50 };

vector<Rekord> Rekordy = { rekord1,rekord2 };
void MainMenu()
{
	cout << "=== MENU BANK SYSTEM === " << endl;
	cout << "       === List ===" << endl;
	cout << "No.\t Name\tBalance\n";
	if (Rekordy.size() > 0 )
	{
		int k = Rekordy.size();
		for (int i = 0; i < k; i++)
		{
			cout << Rekordy[i].AccNo << "\t"<< Rekordy[i].name << "\t"<<Rekordy[i].saldo << "\n";
		}
		cout << endl;
	}
	cout << "1. Edit Name " << endl;
	cout << "2. Withdraw " << endl;
	cout << "3. Deposit" << endl;
	cout << "4. Remove account  " << endl;
	cout << "5. Add Record " << endl;
	cout << "6. Exit " << endl;
}
void DisplayList()
{
	cout << "       === List ===" << endl;
	cout << "No.\t Name\tBalance\n";
	if (Rekordy.size() > 0)
	{
		int k = Rekordy.size();
		for (int i = 0; i < k; i++)
		{
			cout << Rekordy[i].AccNo << "\t" << Rekordy[i].name << "\t" << Rekordy[i].saldo << "\n";
		}
		cout << endl;
	}
}
void Withdraw()
{
	DisplayList();
	cout << "Which account whould you like to withdraw ? " << endl;
	int size = Rekordy.size();
	cout << "choose from 1 to " << size << "." << endl;
	cin >> wybor;
	switch (wybor)
	{
	case '1':
		cout << "Balance is " << Rekordy[0].saldo << ", write how much to withdraw: " << endl;
		cin >> NewSaldo; 
		while (NewSaldo > Rekordy[0].saldo)
		{
			cout << "Za duza wartosc, nie ma tyle środkow. Podaj ponownie: " << endl;
			cin >> NewSaldo;
		}
		Rekordy[0].saldo = Rekordy[0].saldo - NewSaldo;
		break;
	case '2':
		cout << "Balance is " << Rekordy[1].saldo << ", write how much to withdraw " << endl;

		cin >> NewSaldo; 
		while (NewSaldo > Rekordy[1].saldo)
		{
			cout << "Za duza wartosc, nie ma tyle środkow. Podaj ponownie: " << endl;
			cin >> NewSaldo;
		}
		Rekordy[1].saldo = Rekordy[1].saldo - NewSaldo;
		break;
	default:
		break;
	}
	cout << "Rekord " << wybor << " updated. Choose next step. Back to menu now.  \n";
	Sleep(1000);
	system("cls");
	
}
void EditName()
{
	DisplayList();
	cout << "Which name whould you like to edit ? "<<endl;
	int size = Rekordy.size();
	cout << "choose from 1 to " << size << "." << endl;
	cin >> wybor;
	switch (wybor)
	{
	case '1':
		cout << "Old name was " << Rekordy[0].name << ", write new name: " << endl;
		cin >> NewName; Rekordy[0].name = NewName;
		break;
	case '2':
		cout << "Old name was " << Rekordy[1].name << ", write new name: " << endl;
		cin >> NewName; Rekordy[1].name = NewName;
		break;
	default:
		break;
	}
	cout << "Rekord " << wybor << " updated. Choose next step. \n";
	Sleep(1000);
	system("cls");
}
void Deposit() {
	DisplayList();
	
	cout << "Which rekord whould you like to deposit ? " << endl;
	int size = Rekordy.size();
	cout << "choose from 1 to " << size << "." << endl;
	cin >> wybor;
	switch (wybor)
	{
	case '1':
		cout << "Balance is " << Rekordy[0].saldo << ", write adding sum: " << endl;
		cin >> NewSaldo; 
		Rekordy[0].saldo = Rekordy[0].saldo + NewSaldo;
		break;
	case '2':
		cout << "Balance is " << Rekordy[1].saldo << ", write adding sum: " << endl;
		cin >> NewSaldo; 
		Rekordy[1].saldo = Rekordy[1].saldo + NewSaldo;
		break;
	default:
		break;
	}
	cout << "Rekord " << wybor << " updated. Choose next step. \n";
}
void RemoveAccount() {
	cout << "remove account";
	
}
void AddRecord() {
	cout << "Add record";
	MainMenu();
}
void menuwybor(char wybor2) {
	switch (wybor2)
	{
	case '1':
		EditName();
		break;
	
	case '2':
		Withdraw();
		break;
	case '3':
		Deposit();
		break;
	case '4':
		RemoveAccount();
		break;
	case '5':
		AddRecord();
		break;
	case '6' :
		exit(0);
		break;
	default:
		break;
	}
}
