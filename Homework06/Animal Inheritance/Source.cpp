/**
* @file <test.cpp>
*
* @author  <Nikunj Rathod>
* @version <1.0>
*
* change log
* name      date
*
*
* (file, auther, version, and change log are depricated with modern source code management system)
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < Date in format >
*
*
* @section LICENSE
*  <Public>
*
*  Copyright 2020
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/


#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "Tiger.h"
#include "Racoon.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {
	//polymorphism
	std::vector<std::unique_ptr<Animal> > zoo;
	zoo.push_back(std::make_unique<Cat>("sabrina"));
	zoo.push_back(std::make_unique<Dog>("Fido"));
	zoo.push_back(std::make_unique<Duck>("Donald J Duck"));
	zoo.push_back(std::make_unique<Tiger>("Tiberius"));
	zoo.push_back(std::make_unique<Racoon>("Pip"));

	for (auto& a : zoo) {
		a->speak();
		a->move();
		
	}

}