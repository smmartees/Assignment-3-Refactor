#pragma once

// samp - prog71990 - fall24 - assignment 3 - spec 4

// Structure template of STUDENT

#include "studentName.h"
#include <stdbool.h>

//#define STUDENT_NUM_LENGTH	10

typedef struct student {
	//int studentNumber[STUDENT_NUM_LENGTH];
	int studentNumber;
	STUDENTNAME studentName;
}STUDENT;

//C


STUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName);

//R
bool StudentArrayInitializer(STUDENT* studentArray, STUDENT firstStudent,
	STUDENT secondStudent, STUDENT thirdStudent, STUDENT fourthStudent);

void PrintStudentArray(STUDENT* studentArray);
//U

//D

void PrintStudent(STUDENT s);
