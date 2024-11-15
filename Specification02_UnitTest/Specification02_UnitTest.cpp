#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../Specification02/sumGreatestDifference.h"
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Specification02UnitTest
{
	TEST_CLASS(Specification02UnitTest)
	{
	public:
		
		TEST_METHOD(sumMinAndMaxPositives)	// all elements are positive
		{
			double testArr[3] = { 1,2,3 };
			double expected = 4;
			double actual = sumGreatestDifference(testArr, 3);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(largestToSmallest)	// elements ordered from largest to smallest
		{
			double testArr[5] = { 5,4,3,2,1 };
			double expected = 6;
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(allNegativeElements)	// elements are all negative
		{
			double testArr[5] = { -5,-4,-3,-2,-1 };
			double expected = -6;
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(alternatingPositiveNegative)	// elements alternate between 
		{											// negative & positive
			double testArr[5] = { -5,4,-3,2,-1 };
			double expected = -1;
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(allElementsZero)	// all elements are zero
		{
			double testArr[5] = { 0 };
			double expected = 0;
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(elementsToSumNotOnTheEnds)	// elements to be summed 
		{										// are at index 0 or -1
			double testArr[5] = { 2, -1, 42, -42, 31 };
			double expected = 0;
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(fractionInputs)			// elements include fractions
		{
			double testArr[5] = { -5.0/2,-4/2.2,-3/2,-2,-1 };
			double expected = -3.5000000000000000;	
			double actual = sumGreatestDifference(testArr, 5);
			Assert::AreEqual(expected, actual);
		}		//works as long as the fractional elements are not integers.
	};
}
