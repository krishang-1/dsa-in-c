// find_first.c

/* int find_first(int arr[], int size, int key); */

#include<stdio.h>

// Define a generic function
int exists = 0; // To return (-1) if num not found in array
int findex = 0; // found index
int find_first(int arr[], int size, int key){
	for(int i = 0;i < size;i++){
	if(arr[i] == key){
		exists = 1;
		findex = i;
	}
	}
	if(exists==1){
		return findex;
	}
	if(exists==0){
		return -1;
	}
}

int main(void) {
	int arrsize;
	int ntbf; // (num to be found)

	// Get Array Size
	printf("Enter Size of Array : ");
	scanf("%d",&arrsize);
	
	// Initialize an array starting from 1 all the way to 'arrsize'
	int main_arr[arrsize];
	int s = 1; // start of array = 1
	for(int j = 0;j<arrsize;j++){
		main_arr[j] = s;
		s++;
	}
	
	// Get NTBF
	printf("Enter Number to be found : ");
	scanf("%d",&ntbf);

	// Call Function
	int result = find_first(main_arr,arrsize,ntbf);

	// Output Result
	printf("Result of Indexing : %d\n|| If Output = -1, Num isn't present!",result);

return 0;
}

