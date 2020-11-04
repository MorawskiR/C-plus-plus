
#include "stock00.h"
#include <iostream>

int main()
{
	{
		using std::cout;
		using std::ios_base;
		cout << "Tworzenie nowych obiektow przy uzyciu konstruktorow ";
		Stock stock1("Nano smart", 20, 12.50);
		stock1.show();

		Stock stock2 = Stock("Burakpol", 2, 2.0);
		stock2.show();

		cout << "przypisanie stock1 do stock2" << std::endl;
		stock2 = stock1;

		cout << "Wypis ze stock1 i stock2: \n";
		cout << "Wyzerowanie obiektu konstruktorem";
		stock1 = Stock("Futropol", 10, 50.0);
		cout << "Nowa wersja stock1: \n";
		stock1.show();
		cout << "Gotowe" << std::endl;
	}
	return 0;

}

