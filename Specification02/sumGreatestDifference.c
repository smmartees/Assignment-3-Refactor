// samp - prog71990 - fall24 - assignment 3 - spec 2.

#include "sumGreatestDifference.h"
#include <stdio.h>

double sumGreatestDifference(double* arr, int arrLength) {
	double min = arr[0];
	double max = arr[0];

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		else if (arr[i] > max) {
			max = arr[i];
		}
	}
	double sum = min + max;
	
	return sum;
}