#pragma once

// samp - prog71990 - fall24 - assignment 3 - spec 4

// Structure template of STUDENT

#include "studentName.h"

//#define STUDENT_NUM_LENGTH	10

typedef struct student {
	//int studentNumber[STUDENT_NUM_LENGTH];
	int studentNumber;
	STUDENTNAME studentName;
}STUDENT;

//C


STUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName);

//R

//U

//D

void PrintStudent(STUDENT s);
