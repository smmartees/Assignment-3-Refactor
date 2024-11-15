#pragma once

// samp - prog71990 - fall24 - assignment 3 Refactor - spec 4

#define NAME_LENGTH			40

typedef struct studentName {
	char firstName[NAME_LENGTH];
	char middleName[NAME_LENGTH];
	char lastName[NAME_LENGTH];
}STUDENTNAME, *PSTUDENTNAME;


STUDENTNAME SetStudentName(char* FirstName, char* MiddleName, char* LastName);


void GetStudentName(STUDENTNAME s);

