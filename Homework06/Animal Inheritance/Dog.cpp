#include "Dog.h"
Dog::Dog(std::string n) :Animal(n, "Dog", "Gav") {}
void Dog::speak() const
{
	//Animal::speak();
	std::cout << "Hello I'm " << getName() << " and I like to go on a walk and I say " << getSound() << std::endl;
}
int Dog::walk()
{
	return ++walked;
}

void Dog::move()
{
	std::cout << "Im flying\n";
}
