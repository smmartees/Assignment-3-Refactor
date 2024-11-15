#pragma once

// samp - prog71990 - fall24 - assignment 3 - spec 4

// Structure template of STUDENT

//#define STUDENT_NUM_LENGTH	10
#define NAME_LENGTH			40

typedef struct studentName {
	char firstName[NAME_LENGTH];
	char middleName[NAME_LENGTH];
	char lastName[NAME_LENGTH];
}STUDENTNAME;

typedef struct student {
	//int studentNumber[STUDENT_NUM_LENGTH];
	int studentNumber;
	STUDENTNAME studentName;
}STUDENT;

//C
STUDENTNAME CreateStudentName(char* FirstName, char* MiddleName, char* LastName);

STUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName);

//R

//U

//D
void PrintStudentName(STUDENTNAME s);

void PrintStudent(STUDENT s);
