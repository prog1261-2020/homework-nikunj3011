#include "Cat.h"
Cat::Cat(std::string n) :Animal(n, "Cat", "meow") {}
void Cat::speak() const {
	//Animal::speak();
	std::cout << "Hello I'm " <<getName() << " and I like mice and I say " << getSound() << std::endl;
}

void Cat::move()
{
	std::cout << "I feel like sleeping more\n"<< getSound() <<  std::endl;
}

int Cat::pet() {
	return ++petted;
}