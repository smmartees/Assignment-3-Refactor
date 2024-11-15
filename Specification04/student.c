#define _CRT_SECURE_NO_WARNINGS

// samp - prog71990 - fall24 - assignment 3 - spec 4

// functions related to STUDENT struct

#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//C


PSTUDENT CreateStudent(int StudentNum, STUDENTNAME StudentName) {
	
	PSTUDENT newStudent = (PSTUDENT)malloc(sizeof(STUDENT));
	if (!newStudent) {
		fprintf(stderr, "error allocating memory\n");
		exit(EXIT_FAILURE);
	}
	else {
		newStudent->studentNumber = StudentNum;
		newStudent->studentName = SetStudentName(StudentName.firstName, 
			StudentName.middleName, StudentName.lastName);
	}

	//newStudent.studentNumber = StudentNum;
	////char name[] = strncpy("%s%s%s\n", StudentName.firstName, StudentName.middleName, StudentName.lastName);
	///*
	//newStudent.studentName.firstName = StudentName.firstName;
	//newStudent.studentName.middleName = StudentName.middleName;
	//newStudent.studentName.lastName = StudentName.lastName;
	//*/
	//newStudent.studentName = SetStudentName(StudentName.firstName, StudentName.middleName, StudentName.lastName);


	return newStudent;
}

//R
bool StudentArrayInitializer(PSTUDENT studentArray, PSTUDENT firstStudent,
	PSTUDENT secondStudent, PSTUDENT thirdStudent, PSTUDENT fourthStudent) {

	studentArray[0] = *firstStudent;
	studentArray[1] = *secondStudent;
	studentArray[2] = *thirdStudent;
	studentArray[3] = *fourthStudent;

}


//R
void PrintStudentArray(PSTUDENT studentArray) {

	char middleInitial;		//container for middle initial
	int studentNum;			//thought this would keep the printf formatting cleaner
	STUDENT currentStudent;

	for (int i = 0; i < STUDENT_ARRAY_SIZE; i++) {
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
	printf("%s\n%s\n%s\n", Student.studentName.firstName, 
		Student.studentName.middleName, Student.studentName.lastName);
}

void DestroyStudent(PSTUDENT* s) {
	free(s);
}

void DestroyArray(PSTUDENT* studentArr) {	//Keep getting an out of bounds on the for loop..
	/*PSTUDENT tmp = NULL;
	for (int i = 0; i < STUDENT_ARRAY_SIZE; i++) {
		tmp = studentArr[i];
		free(tmp);
	}	*/
}