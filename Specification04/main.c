// samp - prog71990 - fall24 - assignment 3 - spec 4

// Specification 4: - First: Write a component (pair of .c & .h files) that 
//							defines a structure template with two member 
//							attributes according to the following criteria:
//								- first member is a student number as a single 
//									fixed length numeric field with a max 
//									length of 10
//								- second member is a structure with three 
//									members according to the following criteria:
//										- first member is "first name"
//										- second member is "middle name"
//										- third member is "last name"
//					- Second: Write and test a program that creates and 
//						initializes an array of 4 of these structures.
//						At least 2 students with full middle names, and 
//						one without any middle name.
//					- Third: write a single function that accepts an array of
//						thse structures as a parameter and prints the array
//						data in the follwoing format:

//						2001041234 - LastName, FirstName MiddleInitial.

//						Then use this function in your program to display your
//						student records.

//  Feedback on Specification 4:
// Question 4: Structs of Student Records
//o Specifications : 4.00 / 4.00 (The program works and meets all of the 
//	specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).
//	The code utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
//o Reusability : 3.00 / 4.00 (Most of the code could be reused in other 
//	programs or the following issues were noted : )
//—Having hard coded(magic) values in function limits reusability
//o Documentation : 4.00 / 4.00 (The documentation is well written and clearly 
//	explains what the code is accomplishing and how.)


#include "student.h"
#include "utils.h"
#include <stdio.h>

int main(void) {

	int studentNumber = 123456789;
	char firstName[] = "Jean-Luc";
	char middleName[] = " ";
	char lastName[] = "Picard";
	STUDENTNAME name = CreateStudentName(firstName, middleName, lastName);
	STUDENT student = CreateStudent(studentNumber, name);
	
	int studentNumber2 = 987654321;		//second student
	char firstName2[] = "William";
	char middleName2[] = "Thomas";
	char lastName2[] = "Riker";
	STUDENTNAME name2 = CreateStudentName(firstName2, middleName2, lastName2);
	STUDENT student2 = CreateStudent(studentNumber2, name2);

	int studentNumber3 = 1010101010;	//third student
	char firstName3[] = "Data";
	char middleName3[] = "Lore";
	char lastName3[] = "Soong";
	STUDENTNAME name3 = CreateStudentName(firstName3, middleName3, lastName3);
	STUDENT student3 = CreateStudent(studentNumber3, name3);

	int studentNumber4 = 132547698;		//fourth student
	char firstName4[] = "Natasha";
	char middleName4[] = " ";
	char lastName4[] = "Yar";
	STUDENTNAME name4 = CreateStudentName(firstName4, middleName4, lastName4);
	STUDENT student4 = CreateStudent(studentNumber4, name4);

	STUDENT studentArray[4];
	StudentArrayInitializer(studentArray, student, student2, student3, student4);

	PrintStudentArray(studentArray);

	return 0;
}