/**
* @file <Source.cpp>
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

#include <fstream>
#include <iostream>
#include <memory>
#include "Quiz.h"
int get_Number() 
{
	int a;
	std::cin >> a;
	while (std::cin.fail() || a <= 0 || a >= 5) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}
int main()
{
	int input;
	int number = 0;
	std::ifstream inFile;
	std::vector<Quiz> question;
	inFile.open("quiz.txt");
	if (inFile.fail())
	{
		std::cerr << "file not opened\n";
		exit(1);
	}
	while (!inFile.eof())
	{
		++number;
		Quiz temp(inFile);
		question.push_back(temp);
	} 
	for (int i{ 0 }; i < question.size(); ++i)
	{
		question[i].show_Question();
		std::cout << "What is your answer: ";
		input = get_Number();
		if (input == question[i].get_Answer())
		{
			std::cout << "Correct" << std::endl;
		}
		else
		{
			std::cout << "Incorrect" << std::endl;
		}
		system("pause");
		system("cls");
	}
}