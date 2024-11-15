#define _CRT_SECURE_NO_WARNINGS

// samp - prog71990 - fall24 - assignment 3 - spec 4

// functions related to STUDENT struct

#include "student.h"
#include <stdio.h>
#include <string.h>


//C
STUDENTNAME SetStudentName(char* FirstName, char* MiddleName, char* LastName) {
	STUDENTNAME newStudentName;
	
	strncpy(newStudentName.firstName, FirstName, NAME_LENGTH);
	strncpy(newStudentName.middleName, MiddleName, NAME_LENGTH);
	strncpy(newStudentName.lastName, LastName, NAME_LENGTH);

	return newStudentName;
}


STUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName) {
	STUDENT newStudent;

	newStudent.studentNumber = StudentNum;
	//char name[] = strncpy("%s%s%s\n", StudentName.firstName, StudentName.middleName, StudentName.lastName);
	/*
	newStudent.studentName.firstName = StudentName.firstName;
	newStudent.studentName.middleName = StudentName.middleName;
	newStudent.studentName.lastName = StudentName.lastName;
	*/
	newStudent.studentName = SetStudentName(StudentName.firstName, StudentName.middleName, StudentName.lastName);

	return newStudent;
}

//R


//U


//D
void PrintStudentName(STUDENTNAME Student) {
	printf("%s%s%s\n", Student.firstName, Student.middleName, Student.lastName);
}

void PrintStudent(STUDENT Student) {
	printf("%d\n", Student.studentNumber);
	printf("%s\n%s\n%s\n", Student.studentName.firstName, Student.studentName.middleName, Student.studentName.lastName);
}
