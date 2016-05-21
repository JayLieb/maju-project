#include "World.h"
#include "Entity.h"


World::World()
{
	myField = new Entity*[sizeY];
	for (int i = 0; i < sizeY; i++)
	{
		myField[i] = new Entity[sizeX];
	}
}


World::~World()
{
	for (int i = 0; i < sizeY; i++)
	{
		delete [] myField[i];
	}
	delete [] myField;
}

void World::print()
{
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			std::cout << myField[i][j].getSymbol();
		}
	std::cout << "\n";
	}
}
