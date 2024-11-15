// samp - prog71990 - fall24 - Assignment 3

// Function body of SmallerOf()

#include "SmallerOf.h"
#include <stdio.h>

bool SmallerOf(double* x, double* y) {	//now returns true if a switch
	if (*x < *y) {						//has occured. returns false otherwise
		*y = *x;
		return true;
	}
	else if (*y < *x) {
		*x = *y;
		return true;
	}
	return false;
}