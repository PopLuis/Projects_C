#include <stdio.h>

int main()
{
	int *ptr1;
	char *ptr2;

	// Finding size using sizeof()
	printf("%zu\n", sizeof(ptr1));
	printf("%zu", sizeof(ptr2));

	int var = 10;

	// // Pointer to int
	// int *ptr1 = &var;

	// // Pointer to pointer (double pointer)
	// int **ptr2 = &ptr1;

	// // Accessing values using all three
	// printf("var: %d\n", var);
	// printf("*ptr1: %d\n", *ptr1);
	// printf("**ptr2: %d", **ptr2);

	return 0;
}
