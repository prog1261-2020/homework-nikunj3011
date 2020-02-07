#include "Dog.h"
Dog::Dog(std::string n) :Animal(n, "Dog", "Gav") {}
void Dog::speak() {
	Animal::speak();
	std::cout << "and I like to go on a walk\n";
}