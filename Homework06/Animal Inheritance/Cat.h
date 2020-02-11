#pragma once
#include "Animal.h"
#include<string>
class Cat :
	public Animal
{
	public:
		Cat(std::string name);
		int pet();
		void speak() const override;
		void move() override;
	private:
		int petted=0;
};

