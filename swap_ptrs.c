// To swap two numbers using pointers in C

#include<stdio.h>

// '&a' --> points to address of pointer
// '*' --> To dereference (gets val of ptr)

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
	
// Main Function
int main(void){
	int x,y;
	int *p = &x;
	int *q = &y;

	// Get Values from User
	printf("Enter Numbers : ");
	scanf("%d %d",p,q);
	
	// Print Original
	printf("Initial Values - P : %d | Q : %d",*p,*q);

	// Swap Nums
	swap(p,q);

	// Output New
	printf("\nFinal Values - P : %d | Q : %d",*p,*q);

return 0;
}
