#pragma once
#include "Animal.h"
class Racoon :
	public Animal
{
public:
	Racoon(std::string name);
	void speak() const override;
	int feed();
	void move() override;
private:
	int feeded = 0;
};


