#include "Duck.h"
Duck::Duck(std::string n) :Animal(n, "Duck", "Quack") {}
void Duck::speak() {
	Animal::speak();
	std::cout << "and I like to swim\n";
}