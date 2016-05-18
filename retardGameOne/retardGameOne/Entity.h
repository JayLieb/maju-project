#pragma once
class Entity
{
public:
	Entity();
	~Entity();
	char getSymbol();

private:
	int myPositionX;
	int myPositionY;

	char mySymbol;


};

