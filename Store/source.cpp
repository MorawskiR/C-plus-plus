#include <string>
#include "Nagłówek.h"
#include <windows.h>
#include <cstdlib>
#include <math.h>     
#include <ctime>
#include <iostream>
using namespace std;
int wybor;

double suma;
int menu_zakupy()
{
	cout << "your basket is empty: " << endl;
	cout << "Wybierz dzial zakupow: \n";
	cout << "1 Warzywa \n";
	cout << "2.slodycze \n";
	cout << "3.napoje \n";
	cout << "podaj opcje: "; cin >> wybor;
	return wybor;
}

void Warzywa()
{
	cout << "ogorek, pomidor: " << endl;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "podaj wage"; cin >> Tomato.weight;
		suma = Tomato.weight * Tomato.price;
	default:
		break;
	}
}
void Shop(int opcja)
{
	switch (opcja)
	{
	case 1: 
		Warzywa();
		 break;
	default:
		break;
	}
}
