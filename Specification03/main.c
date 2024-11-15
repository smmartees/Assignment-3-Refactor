// samp - prog71990 - fall24 - assignment 3 - spec 3

// Specification 3: Write a funtion that sets each element in an array to the 
//					product of the corresponding elements in two other arrays.
//					function called: MultiplyTwoArraysIntoThird()
//					takes two array parameters.

// Feedback on Specification 3:
// Question 3: Product of corresponding elements of 2 arrays into 3rd and test
//o Specifications : 2.00 / 4.00 (The program produces correct results but does
//	not display them correctly or the following issues were noted : )
//—Test Case(s) are not verifying the proper outcome, possibly due to 
//	misunderstood specification
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).
//	The code utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
//o Reusability : 4.00 / 4.00 (The code could be reused as a whole or each 
//	routine could be reused.)
//o Documentation : 4.00 / 4.00 (The documentation is well written and clearly 
//	explains what the code is accomplishing and how.)


#include "MultiplyTwoArraysIntoThird.h"
#include <stdio.h>

int main(void) {

	int myArray[5] = { 1,2,3,4,5 };
	int myArray2[5] = { 5,4,3,2,1 };
	int newArray[5] = { 0 };

	MultiplyTwoArraysIntoThird(myArray, myArray2, &newArray, 5, 5);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", newArray[i]);
	}

	return 0;
}