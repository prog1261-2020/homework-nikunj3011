#pragma once
#include "Animal.h"
class Duck :
	public Animal
{
public:
	Duck(std::string name);
	void speak();
};


