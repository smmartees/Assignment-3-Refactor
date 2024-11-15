#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../Specification03/MultiplyTwoArraysIntoThird.h"
}

// The tests were not actually checking anything, so there was nothing to 
// trigger a fail.
// Tests now iterate through each element of the expected array values and
// compare them against the actual array values of the new array.

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Specification03UnitTest
{
	TEST_CLASS(Specification03UnitTest)
	{
	public:
		
		TEST_METHOD(twoEqualLengthArrays)	// easy-peasy same length arrays.
		{
			int testArr1[5] = { 1,2,3,4,5 };
			int testArr2[5] = { 5,4,3,2,1 };
			int newArr[5] = { 0 };
			int expected[] = { 5,8,9,8,5 };
			MultiplyTwoArraysIntoThird(testArr1, testArr2, newArr, 5, 5);
			for (int i = 0; i < 5; i++)
				Assert::AreEqual(expected[i], newArr[i]);	
		}
		TEST_METHOD(twoDifferentLengthArrays)	// first array is longer
		{
			int testArr1[6] = { 0,1,2,3,4,5 };
			int testArr2[5] = { 5,4,3,2,1 };
			int newArr[5] = { 0 };
			int expected[] = { 0,4,6,6,4 };
			MultiplyTwoArraysIntoThird(testArr1, testArr2, newArr, 6, 5);
			for (int i = 0; i < 5; i++)
				Assert::AreEqual(expected[i], newArr[i]);
		}
		TEST_METHOD(flipTwoDifferentLengthArrays)	// Second array is longer
		{
			int testArr1[6] = { 0,1,2,3,4,5 };
			int testArr2[7] = { 9,5,4,3,2,1,6 };
			int newArr[6] = { 0 };
			int expected[] = { 0,5,8,9,8,5 };
			MultiplyTwoArraysIntoThird(testArr1, testArr2, newArr, 6, 7);
			for (int i = 0; i < 6; i++)
				Assert::AreEqual(expected[i], newArr[i]);
		}
		TEST_METHOD(negativesAndPositives)	// some values are negative
		{
			int testArr1[6] = { -0,1,-2,3,-4,5 };
			int testArr2[5] = { 5,-4,3,2,-1 };
			int newArr[5] = { 0 };
			int expected[] = { 0,-4,-6,6,4 };
			MultiplyTwoArraysIntoThird(testArr1, testArr2, newArr, 6, 5);
			for (int i = 0; i < 5; i++)
				Assert::AreEqual(expected[i], newArr[i]);
		}
		TEST_METHOD(oneArrayInitializedToZero)	// one array is empty
		{
			int testArr1[5] = { 0 };
			int testArr2[5] = { 5,-4,3,2,-1 };
			int newArr[5] = { 0 };
			int expected[] = { 0,0,0,0,0 };
			MultiplyTwoArraysIntoThird(testArr1, testArr2, newArr, 5, 5);
			for (int i = 0; i < 5; i++)
				Assert::AreEqual(expected[i], newArr[i]);
		}
	};
}
