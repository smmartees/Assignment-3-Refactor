// samp - prog71990 - fall24 - assignment 3 - spec 4

#include "utils.h"
#include "student.h"
#include <stdio.h>


//C
void StudentArrayInitializer(STUDENT* studentArray, STUDENT firstStudent,
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