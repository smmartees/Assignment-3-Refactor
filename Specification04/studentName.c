// samp - prog71990 - fall24 - assignment 3 Refactor - spec 4

#include "studentName.h"





STUDENTNAME SetStudentName(char* FirstName, char* MiddleName, char* LastName) {
	STUDENTNAME newStudentName;

	strncpy(newStudentName.firstName, FirstName, NAME_LENGTH);
	strncpy(newStudentName.middleName, MiddleName, NAME_LENGTH);
	strncpy(newStudentName.lastName, LastName, NAME_LENGTH);

	return newStudentName;
}

void GetStudentName(STUDENTNAME s) {
	printf("%s%s%s\n", s.firstName, s.middleName, s.lastName);
}

