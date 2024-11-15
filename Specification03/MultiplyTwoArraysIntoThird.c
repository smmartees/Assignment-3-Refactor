// samp - prog71990 - fall24 - assignment 3 - spec 3

#include "MultiplyTwoArraysIntoThird.h"
#include <stdio.h>

void MultiplyTwoArraysIntoThird(int arr1[], int arr2[], int arr3[], 
	int arr1Length, int arr2Length) {
	// take index values from arr1 & arr2 and assign them to *arr3 index

	int a;
	int b;
	int c;

	int length = 0;

	if (arr1Length < arr2Length) {
		length = arr1Length;
	}
	else {
		length = arr2Length;
	}

	for (int i = 0; i < length; i++) {
		a = arr1[i];
		b = arr2[i];
		c = a * b;
		arr3[i] = c;
	}
	
}