// Right Pushing of Array Elements

#include<stdio.h>
int main(void) {
	int arr[100] = {};
	int rotated_arr[100] = {};
	int n = 0;
	int k = 0;

	// Size/Shifting
	printf("Enter Size of Array : ");
	scanf("%d",&n);
		
	printf("Enter Shifting of Array : ");
	scanf("%d",&k);

	// Creation of Array
	for(int i = 0;i<n;i++){
		arr[i] = 10*(i+1);
	}
	int new_index = 0;
	// Shifting of Array Elements
	for(int j = 0;j<n;j++){
		new_index = (j + k)%n;
		rotated_arr[new_index] = arr[j];
	}

	// Output New Array
	printf("Rotated Array :  ");
	for(int a = 0;a < 5;a++){
		printf("%d ",rotated_arr[a]);
	}
return 0;
}
		
		