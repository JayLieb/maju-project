#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <iostream>
#include "Entity.h"
#pragma once
class World
{
static const int sizeX = 10;
static const int sizeY = 10;

public:
	World();
	~World();
	void print();

private:
	Entity** myField;

};



#endif

