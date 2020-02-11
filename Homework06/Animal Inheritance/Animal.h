#pragma once
#include <string>
#include<iostream>
class Animal
{
private:
	///Animal() = delete;
public:
	virtual void speak() const;
	virtual void move() = 0;
	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;
	//virtual void move() = 0; //makes abstract class

protected:
	Animal(const std::string& name, const std::string& type, const std::string& sound);
	std::string name;
	std::string type;
	std::string sound;

};

