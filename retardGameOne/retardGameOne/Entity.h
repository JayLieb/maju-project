#ifndef ENTITY_H
#define ENTITY_H


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

#endif
