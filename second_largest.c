// Write a program to find the second largest element in an integer array

#include <stdio.h>
int main(void) {
	int arr1[5] = {4,2,9,1,7};
	// To find second largest
	int largest = arr1[0];
	int second_largest = arr1[0];
	
	for(int c1 = 0;c1 < 5;c1++){
		if(arr1[c1] > largest){largest = arr1[c1];}
		if(arr1[c1] < largest && arr1[c1] > second_largest){second_largest = arr1[c1];}

	}
	
	// Output Second Largest
	printf("Second Largest Number is : %d",second_largest);

return 0;
}