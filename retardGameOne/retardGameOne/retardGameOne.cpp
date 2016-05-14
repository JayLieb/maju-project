// retardGameOne.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "World.h"
#include <iostream>

 using namespace std;
 
//Gameloop
int main()
{
	cout << "fick dich du fotze\n";

	World* myWorld = new World();
	myWorld->print();
	delete myWorld;

	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
    return 0;
}
