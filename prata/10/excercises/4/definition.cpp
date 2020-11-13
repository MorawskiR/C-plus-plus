#include "Sales.h"
#include <iostream>

using namespace std;
void SALES::Sales::display()
{
	for (int i = 0; i < QUATERS; i++)
	{
		std::cout << sales[i] << ", ";
	}
	cout << endl;
	cout << average << endl;
	cout << min << endl;
	cout << max << endl;
	
}
