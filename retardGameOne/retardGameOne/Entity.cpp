#include "stdafx.h"
#include "Entity.h"


Entity::Entity()
{
	myPositionX = 0;
	myPositionY = 0;
	mySymbol = '0';

}

char Entity::getSymbol() {
	return mySymbol;
}


Entity::~Entity()
{
}
