#define _CRT_SECURE_NO_WARNINGS
// samp - prog71990 - fall24 - Assignment 3

// Specification 1: Write a function call SmallerOf(double, double) that 
//					replaces the contents of two double variables with the 
//					smaller of the two values.

// Feedback on Secification 1:
//Question 1: SmallerOf() function and tests
//o Specifications : 4.00 / 4.00 (The program works and meets all of the 
//  specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data
//	and function structure(demonstrating SRP, coupling and /or cohesion).
//	The code utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
//o Reusability : 4.00 / 4.00 (The code could be reused as a whole or 
//	each routine could be reused.)
//o Documentation : 4.00 / 4.00 (The documentation is well written and clearly 
//	explains what the code is accomplishing and how.)

// I didn't want to hand in the same exact code, so I changed the function from
// void to bool.

#include "SmallerOf.h"
#include <stdio.h>

//#define INVALID_INPUT	2		commented out because the function
								// does not check input data type.

int main(void) {


	/*double firstInput = 3.1415;
	double secondInput = 42.42424242;
	bool didItSwitch = false;

	printf("First input: %lf\nSecond input: %lf\n Did it switch? %d\n",
		firstInput, secondInput, didItSwitch);

	didItSwitch = SmallerOf(&firstInput, &secondInput);

	printf("\nFirst input: %lf\nSecond input: %lf\nDid it switch? %d\n",
		firstInput, secondInput, didItSwitch);*/


	/*  Q 1
	double firstVal;
	int scanChecker1;
	printf("Input first value: ");
	scanChecker1 = scanf("%lf", &firstVal);
	if (scanChecker1 != 1) {							// 1 is what scanf returns
		printf("\nInvalid input. Please try again.\n");	// when correct datatype
		return INVALID_INPUT;							// is revieved as input
	}									// No magic here. Not these droids.
	double secondVal;
	int scanChecker2;
	printf("Input second value: ");
	scanChecker2 = scanf("%lf", &secondVal);
	if (scanChecker2 != 1) {
		printf("\nInvalid input. Please try again.\n");
		return INVALID_INPUT;
	}

	printf("%f & %f\n", firstVal, secondVal);
	SmallerOf(&firstVal, &secondVal);
	printf("%f & %f\n", firstVal, secondVal);
	*/

	return 0;
}