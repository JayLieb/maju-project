// retardGameOne.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

 using namespace std;


 void drawField(int x, int y)
 {
	 for (int i = 0; i < y; i++)
	 {
		 for (int j = 0; j < x; j++)
		 {
			 cout << "0";
		 }
		 cout << "\n";
	 }
 }


int main()
{
	cout << "fick dich du fotze\n";

	drawField(10, 10);
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
    return 0;
}
