#include <stdio.h> 
#include <vector>
#include <iostream>
#include <stdlib.h>
#include "Nagłówek.h"
using namespace std;
#include "windows.h" 
int main()
{

	
	do
	{
		MainMenu();
		cout << "\nChoose your Option : ";
		cin >> wybor;
		Sleep(1000);
		system("cls");
		menuwybor(wybor);
	}	while (wybor);
}
