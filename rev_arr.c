// Reverse an Array Using Pointers

#include<stdio.h>

void reverse(int *arr, int size){
	int *start = arr; // Points to start
	int *end = arr + size -1; // Points to end

	while(start < end){
	int temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}

// Main Function
int main(void){
	int arrsize;
	printf("Enter Size of Array : ");
	scanf("%d",&arrsize);
	
	// Initialize Array
	int userarr[arrsize];
	printf("Initial Array : ");
	for(int i = 0;i<arrsize;i++){
		userarr[i] = i+1;
		printf("%d ",userarr[i]);
	}
	
	// Reverse Array
	reverse(userarr,arrsize);
	
	// Output Reversed Array
	printf("\nReversed Array : ");
	for(int j = 0;j<arrsize;j++){
		printf("%d ",userarr[j]);
	}

return 0;
}
