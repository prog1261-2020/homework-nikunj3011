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
*  Copyright 2019
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
#include "Vector2D.h"



//ALL THe functionality that has been asked to be done are implemented
TEST(Vector2DTestSuite, constructorTest01) {
	Vector2D v1(1, 1);



	std::string expectedResult = "(1,1)";
	std::string result = v1.toString();

	EXPECT_EQ(expectedResult, result);

}

TEST(Vector2DTestSuite, equalsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	std::string expectedResult = "(1,1)";
	std::string result = v1.toString();

	EXPECT_FALSE(v1 == v2);

}

TEST(Vector2DTestSuite, biggerThanTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	EXPECT_FALSE(v1 > v2);

}

TEST(Vector2DTestSuite, lessThanTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	EXPECT_TRUE(v1 < v2);

}
TEST(Vector2DTestSuite, notEqualThanTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	EXPECT_TRUE(v1 != v2);

}

TEST(Vector2DTestSuite, LessThanOrEqualTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	EXPECT_TRUE(v1 <= v2);

}
TEST(Vector2DTestSuite, BiggerThanOrEqualTest01) {
	Vector2D v1(5, 8);
	Vector2D v2(3, 1);
	EXPECT_TRUE(v1 >= v2);

}
TEST(Vector2DTestSuite, BiggerThanOrEqualTest02) {
	Vector2D v1(5, 8);
	Vector2D v2(3, 1);
	EXPECT_FALSE(v1 <= v2);

}

TEST(Vector2DTestSuite, LessThanOrEqualTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(3, 1);

	EXPECT_FALSE(v1 >= v2);

}