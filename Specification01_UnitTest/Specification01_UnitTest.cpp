#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../Specification01/SmallerOf.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Specification01UnitTest
{
	TEST_CLASS(Specification01UnitTest)
	{
	public:
		
		TEST_METHOD(smallerOf1and2)		// easy test between 1 & 2
		{
			double smallerValue = 1.000;
			double biggerValue = 2.000;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);	//biggerValue should be equal to the smaller value to pass.
		}
		TEST_METHOD(equalValues)		// testing equal values
		{
			double smallerValue = 4.000;
			double biggerValue = 4.000;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(negativeAndPositive)	// checking between negative & positive
		{
			double smallerValue = -1.000;
			double biggerValue = 2.000;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(bothNegative)		// testing two negative values
		{
			double smallerValue = -2.000;
			double biggerValue = -1.000;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(differenceAtFirstDecimalPlace)		// testing with 1 decimal place difference
		{
			double smallerValue = 2.2;
			double biggerValue = 2.3;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(differenceAtFifteenthDecimalPlace)		// testing two negative values
		{
			double smallerValue = 2.000000000000002;
			double biggerValue = 2.000000000000003;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(largeDifference)		// testing two values with a large difference
		{
			double smallerValue = 200000000002.20002;
			double biggerValue = 200000000003.20002;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(nearZeroValues)		// testing two values near 0
		{
			double smallerValue = 0.0002;
			double biggerValue = 0.0002;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
		TEST_METHOD(negativeNearZeroValues)		// testing two values near 0
		{
			double smallerValue = -0.0002;
			double biggerValue = -0.00002;
			double expected = smallerValue;
			SmallerOf(&smallerValue, &biggerValue);
			Assert::AreEqual(expected, biggerValue);
		}
	};
}
