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


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <map>


int main()
{
    std::ifstream file;
    file.open("fox.txt");
    if (file.fail()) {
        std::cout << "Could not open input file.";
        exit(1);
    }

    std::string next;
    std::map <std::string, int> words;
	while (file >> next) {

		
		for (int i = 0; i < next.size(); i++) {
			int len = next.size();
			if (ispunct(next[i])) {
				next.erase(i--, 1);
				len = next.size();
			}
			if (next == " ") {
				next.erase(i--, 1);
				len = next.size();
			}

		}
		for (int i = 0; i < next.size(); i++) {
			next[i] = tolower(next[i]);
		}

		
		if (words.count(next) == 0) {
			words[next];
			words[next]++;
		}
		else {
			words[next]++;
		}

	}
    std::cout << "\n\n" << "Number of words: " << words[next] << std::endl;

    for (const auto& i : words)
    {
        std::cout << i.first << " : " << i.second << std::endl;
    }
    file.close();
    return 0;
}