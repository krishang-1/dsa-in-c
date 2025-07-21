// Pointers

/* Store the memory address of a variable

int a = 5;
int* p = &a // variable p holds the address of a

'&a' returns the address of the variable
'*' -> Dereferencing Operator (Gives the value of which the address is pointed to 

printf("%d",&a) --> maps address
printf("%d",*p) --> gives value stored at address

*/

// Reversing an array using pointers

#include <stdio.h>

int main(void) {
	int main_arr[5] = {1,2,3,4,5};
	int n = 5;

	int* start = main_arr; // points to start of the array
	int* end = main_arr + n - 1; // points to arr[n-1]
	
	while(start < end){
	int temp = *start;
	*start = *end;
	*end = temp;
	
	start++;
	end--;
}

	// Output Array
	printf("Reversed Array : ");
	for(int c = 0;c<n;c++){
		printf("%d ",main_arr[c]);}
return 0;
}