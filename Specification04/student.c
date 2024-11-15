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
bool StudentArrayInitializer(STUDENT* studentArray, STUDENT firstStudent,
	STUDENT secondStudent, STUDENT thirdStudent, STUDENT fourthStudent) {

	studentArray[0] = firstStudent;
	studentArray[1] = secondStudent;
	studentArray[2] = thirdStudent;
	studentArray[3] = fourthStudent;

}


//R
void PrintStudentArray(STUDENT* studentArray) {

	char middleInitial;		//container for middle initial
	int studentNum;			//thought this would keep the printf formatting cleaner
	STUDENT currentStudent;

	for (int i = 0; i < 4; i++) {
		currentStudent = studentArray[i];
		studentNum = currentStudent.studentNumber;
		middleInitial = currentStudent.studentName.middleName[0];
		if (middleInitial == ' ') {
			printf("%d - %s, %s %c\n",
				studentNum, currentStudent.studentName.lastName,
				currentStudent.studentName.firstName, middleInitial);
		}
		else {
			printf("%d - %s, %s %c.\n",
				studentNum, currentStudent.studentName.lastName,
				currentStudent.studentName.firstName, middleInitial);
		}
	}
}


//U


//D

void PrintStudent(STUDENT Student) {
	printf("%d\n", Student.studentNumber);
	printf("%s\n%s\n%s\n", Student.studentName.firstName, Student.studentName.middleName, Student.studentName.lastName);
}
