/* Write a function that takes a struct student as input and prints their details */

#include<stdio.h>

// Struct Definition
typedef struct {
	char name[50];
	int roll;
	float marks;
}Student;

// void function
void display(Student s){
	printf("- - - Student Details - - -");
	printf("\nName : %s",s.name);
	printf("\nRoll No : %d",s.roll);
	printf("\nMarks : %.2f",s.marks);
}


// Main Function

int main(void) {
	// Initialize 1 Student
	Student s1;
	
	// Get Student details
	printf("Enter Student Details : ");
	scanf("%[^,],%d,%f",s1.name,&s1.roll,&s1.marks); // Arrays Decay into ptrs, so no need for '&'
	
	// Call Function to display data
	display(s1);
}