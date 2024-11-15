// samp - prog71990 - fall 24 - assignment 3 - spec 2

// Specification 2: Write a function that sums the largest & the smallest
//					elements of an array of doubles. 

// Feedback on Specification 2:
// Question 2: Sum(addition) of largest and smallest within array and test
//o Specifications : 4.00 / 4.00 (The program works and meets all of 
//	the specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).
//	The code utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
//o Reusability : 4.00 / 4.00 (The code could be reused as a whole or 
//	each routine could be reused.)
//o Documentation : 4.00 / 4.00 (The documentation is well written and 
//	clearly explains what the code is accomplishing and how.)

#include "sumGreatestDifference.h"
#include <stdio.h>

int main(void) {

	double myArray[3] = { 1,2,3 };
	double sum = sumGreatestDifference(myArray, 3);
	printf("%lf\n", sum);

	return 0;
}