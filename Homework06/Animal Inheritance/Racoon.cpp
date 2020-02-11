#include "Racoon.h"
Racoon::Racoon(std::string n) :Animal(n, "Racoon", "Say something") {}
void Racoon::speak() const{
	//Animal::speak();
	std::cout << "Hello I'm " << getName() << " and I like to be in memes and I say " << getSound() << std::endl;

}
int Racoon::feed()
{
	return ++feeded;
}

void Racoon::move()
{
	std::cout << "Im searching for food\n";
}

