/* Define a struct Book with fields title, author, and price.
Initialize one book and print all its details. */

#include<stdio.h>
#include<string.h>

typedef struct {
	char title[100];
	char author[50];
	float price;
}Book;

// Main Function
int main(void) {
	// Initialize 1 book & print details
	Book book1 = {"DSA in C","Albert Einstein",14.90};
	
	// Print Details
	printf("- - - Book Details - - -");
	printf("\nName : %s",book1.title);
	printf("\nAuthor :  %s",book1.author);
	printf("\nPrice : %.2f",book1.price);

return 0;
}

