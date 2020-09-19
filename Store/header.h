#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//przeciazenie, domyslne, wskzniki, referencja, 
int menu_zakupy();
extern int wybor;
extern double suma;
struct Vegatable{
	double price;
	int weight;
};
Vegatable Tomato = { 3.59 };
Vegatable Potato;
Vegatable Cocumber;

struct Sweet {
	char name[20];
	double price;
};
struct Drinks {
	char name[20];
	double price;
};

void Shop(int opcja);

void Warzywa();
void Sweets();
void Drinks();

