#pragma once
#include "Animal.h"
class Duck :
	public Animal
{
public:
	Duck(std::string name);
	void speak() const override;
	int feed();
	void swim();
	void move() override;
private:
	int feeded=0;

};


