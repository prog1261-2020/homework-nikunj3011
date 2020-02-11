#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog(std::string name);
	void speak() const override;
	int walk();
	void move() override;
private:
	int walked=0;
};


