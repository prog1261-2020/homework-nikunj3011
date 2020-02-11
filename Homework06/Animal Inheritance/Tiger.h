#pragma once
#include "Animal.h"
class Tiger :
	public Animal
{
public:
	Tiger(std::string name);
	void speak() const override;
	int feed();
	void move() override;
private:
	int feeded = 0;
};


