/* Return Structure from Function */

// Write a function that reads a student's name, roll & marks & returns a struct Student

#include<stdio.h>

// Struct

typedef struct{
	char name[100];
	int roll;
	float marks;
}Student;

// Get Input Function

Student get_input(){
	Student s;
	printf("Enter Student Details : ");
	scanf("%[^,],%d,%f",s.name,&s.roll,&s.marks);
	
	return s;
}

int main(void) {
	// Initialize & Call Function
	Student s1 = get_input();
	
	// Output Info
	printf("\nStudent's Name : %s",s1.name);
	printf("\nStudent's Roll No : %d",s1.roll);
	printf("\nStudent's Marks : %.2f",s1.marks);

return 0;
}
																									


