/* Write a Function that takes two Student structs, compares their marks & prints their name of the student with higher marks */

#include<stdio.h>

// Struct
typedef struct {
	char name[50];
	int rollno;
	float marks;
}Student;

// Function
void compare(Student *s1,Student *s2){
	if(s1->marks>s2->marks){
	printf("%s has higher marks.",s1->name);
	}
	if(s2->marks>s1->marks){
	printf("%s has higher marks.",s2->name);
	}
}

int main(void){
	Student s1 = {"SpongeBob",1,55.50};
	Student s2 = {"Patrick",2,67.60};
	
	// Call Compare Function
	compare(&s1,&s2);
}