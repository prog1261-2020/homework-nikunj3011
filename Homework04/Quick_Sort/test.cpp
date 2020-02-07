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

#include "gtest/gtest.h"
#include <vector>
#include "srtFunction.h"
//Quick sort 1
TEST(TestCaseName, TestQsortCallFunc01) {
	std::vector<int> v = { 113,22,414,122,256,922,1 };
	std::vector<int> vExpected = { 1,22,113,122,256,414,922 };

	auto vResult = qSort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}
//Quick sort 2
TEST(TestCaseName, TestQsortCallFunc02) {
	std::vector<int> v = { 1,1,1,1,1,53,22,2,21,3,1 };
	std::vector<int> vExpected = { 1,1,1,1,1,1,2,3,21,22,53 };

	auto vResult = qSort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}

//Quick sort random 1m numbers
TEST(TestCaseName, TestQSortCallFunc04) {
	srand((size_t)0);
	int SIZE = 1000000;
	std::vector<int> v;
	v.reserve(SIZE);

	for (int i = 0; i < SIZE; ++i) {
		v.push_back(rand() % SIZE);
	}

	auto vResult = qSort(v);

	bool isInOrder = true;
	for (int i = 0; i < vResult.size() - 1; ++i) {
		if (vResult[i] < vResult[i])
			isInOrder = false;
	}

	ASSERT_EQ(vResult.size(), v.size());
	ASSERT_TRUE(isInOrder);
}


