#include "Tiger.h"
Tiger::Tiger(std::string n) :Animal(n, "Tiger", "Roar") {}
void Tiger::speak() const
{
	//Animal::speak();
	std::cout << "Hello I'm " << getName() << " and I like to go on a walk and I say " << getSound() << std::endl;

}

int Tiger::feed()
{
	return ++feeded;
}

void Tiger::move()
{
	std::cout << "Im running towards my prey\n";
}

