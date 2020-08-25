#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Nagłówek.h"
using namespace std;
#include "windows.h" 
int main()
{
	int a;
	
	do
	{
		MainMenu();
		cout << "\nChoose your Option : "; cin >> wybor;
		Sleep(1000);
		
		system("cls");
		menuwybor(wybor);
		MainMenu();
		cin >> a;
	}	while (a !=0);
}
