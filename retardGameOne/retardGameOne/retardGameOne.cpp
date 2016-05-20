// retardGameOne.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "World.h"
#include <iostream>

 using namespace std;
 int eingabe;
 
//Gameloop
int main()
{
	cout << "Das Retard-Game Volume 1\n";

	World* myWorld = new World();
	myWorld->print();
	cin >> eingabe;
	delete myWorld;

	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
    return 0;
}
