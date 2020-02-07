#include"gtest/gtest.h"
#include"Animal.h"
#include"Cat.h"
#include"Dog.h"
#include"Duck.h"
#include<iostream>

TEST(TestCaseName, TestName) {
    //Animal cat("sabrina", "cat", "meow");
    //Animal dog("Fido", "dog", "Gav");
    //Animal duck("Donald J Duck", "duck", "Quack");
    std::cout<<"\n\n";
    Cat cat("Sabrina");
    Dog dog("Fido");
    Duck duck("Donald J Duck");
    cat.speak();
    dog.speak();
    duck.speak();

}