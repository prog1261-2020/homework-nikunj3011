#include "Duck.h"
Duck::Duck(std::string n) :Animal(n, "Duck", "Quack") {}
void Duck::speak() const
{
	//Animal::speak();
	std::cout << "Hello I'm " << getName() << " and I like fish and I say " << getSound() << std::endl;

}

int Duck::feed()
{
	return ++feeded;
}

void Duck::swim()
{
	std::cout << "Im swimming :)";
}

void Duck::move()
{
	std::cout << "Im swimming more and more\n";
}

