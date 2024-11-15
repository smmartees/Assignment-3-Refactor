#pragma once

// samp - prog71990 - fall24 - assignment 3 - spec 4

// Structure template of STUDENT

#include "studentName.h"
#include <stdbool.h>

#define STUDENT_ARRAY_SIZE		4

typedef struct student {
	int studentNumber;
	STUDENTNAME studentName;
}STUDENT, *PSTUDENT;

//C


PSTUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName);

//R
bool StudentArrayInitializer(PSTUDENT studentArray, PSTUDENT firstStudent,
	PSTUDENT secondStudent, PSTUDENT thirdStudent, PSTUDENT fourthStudent);

void PrintStudentArray(PSTUDENT studentArray);
//U

//D

void PrintStudent(STUDENT s);

void DestroyStudent(PSTUDENT* s);

void DestroyArray(PSTUDENT* studentArr);