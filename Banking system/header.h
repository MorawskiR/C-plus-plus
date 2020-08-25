#pragma once
#include <string>
#include <iostream>
using namespace std;
#include <vector>

extern char wybor;
struct Rekord;
extern Rekord rekord1;
extern Rekord rekord2;
extern vector<Rekord> Rekordy;
extern int key;
extern int liczba_rekordow;
extern string NewName;
extern double NewSaldo;
void MainMenu();
void menuwybor(char wybor2);
void Withdraw();
void EditName();
void Deposit();
void DisplayList();


