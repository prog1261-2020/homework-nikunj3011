#include "gtest/gtest.h"
#include <vector>
#include "srtFunction.h"
#include <algorithm>
//bubble sort 1
TEST(TestCaseName, TestBSsortCallFunc01) {
	std::vector<int> v = { 113,22,414,122,256,922,1 };
	std::vector<int> vExpected = { 1,22,113,122,256,414,922 };

	auto vResult = bsort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}
//bubble sort 2
TEST(TestCaseName, TestBSsortCallFunc02) {
	std::vector<int> v = { 1,1,1,1,1,53,22,2,21,3,1 };
	std::vector<int> vExpected = { 1,1,1,1,1,1,2,3,21,22,53 };

	auto vResult = bsort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}
//selection sort 1
TEST(TestCaseName, TestSSsortCallFunc01) {
	std::vector<int> v = { 113,22,414,122,256,922,1 };
	std::vector<int> vExpected = { 1,22,113,122,256,414,922 };

	auto vResult = SelectionSort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}
//selection sort 2
TEST(TestCaseName, TestSSsortCallFunc02) {
	std::vector<int> v = { 1,1,1,1,1,53,22,2,21,3,1 };
	std::vector<int> vExpected = { 1,1,1,1,1,1,2,3,21,22,53 };

	auto vResult = SelectionSort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);
}
//bubble sort random 10k numbers
TEST(TestCaseName, TestBSortCallFunc03) {
	srand((size_t)0);
	int SIZE = 100000/3;
	std::vector<int> v;
	v.reserve(SIZE);

	for (int i = 0; i < SIZE; ++i) {
		v.push_back(rand() % SIZE);
	}

	auto vResult = bsort(v);

	bool isInOrder = true;
	for (int i = 0; i < vResult.size() - 1; ++i) {
		if (vResult[i] < vResult[i])
			isInOrder = false;
	}

	ASSERT_EQ(vResult.size(), v.size());
	ASSERT_TRUE(isInOrder);
}
//selection sort random 10k numbers
TEST(TestCaseName, TestSSortCallFunc04) {
	srand((size_t)0);
	int SIZE = 100000/3;
	std::vector<int> v;
	v.reserve(SIZE);

	for (int i = 0; i < SIZE; ++i) {
		v.push_back(rand() % SIZE);
	}

	auto vResult = SelectionSort(v);

	bool isInOrder = true;
	for (int i = 0; i < vResult.size() - 1; ++i) {
		if (vResult[i] < vResult[i])
			isInOrder = false;
	}

	ASSERT_EQ(vResult.size(), v.size());
	ASSERT_TRUE(isInOrder);
}


