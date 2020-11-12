
#include "Person.h"
#include <iostream>

int main()
{
	Person one;
	Person two("staszek");
	Person three("jacek", "placek");

	//one.FormalShow();
	cout << "pierwszy obiekt: " << endl;
	one.Show();
	one.FormalShow();
	cout << "drugi obiekt: " << endl;
	two.Show();
	two.FormalShow();
	cout << "trzeci obiekt: " << endl;
	three.Show();
	three.FormalShow();

	
}

