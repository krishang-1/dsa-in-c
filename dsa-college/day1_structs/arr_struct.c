/* Define a struct Student with name, roll, and marks.
Read and store data for 3 students using a loop.
Print their details. */

#include<stdio.h>

typedef struct {
	char name[50];
	int roll;
	float marks;
}Student;


int main(void) {
	// Initialize 3 students
	Student s1;
	Student s2;
	Student s3;
	
	// Initialize Array of Structs
	Student s_arr[] = {s1,s2,s3};
	
	// Loop Through Array and Store Names for 3 Students

	/* Get Elements in Array */
	int count = sizeof(s_arr)/sizeof(s_arr[0]);
	
	// Get Names, Roll No & Marks
	for(int i = 0;i<count;i++){
		// Get Data
		printf("Enter data in following format : Name,RollNo,Marks");
		printf("\nData (Student %d) : ",i+1);
		scanf("%[^,],%d,%f",s_arr[i].name,&s_arr[i].roll,&s_arr[i].marks);
	}

	// Output Data
	for(int j = 0;j<count;j++){
	printf("\nStudent Name : %s",s_arr[j].name);
	printf("\nRoll No : %d",s_arr[j].roll);
	printf("\nMarks : %.2f",s_arr[j].marks);
	}
return 0;
}