#include <stdio.h>
#include <stdlib.h>
#define n 5

// Function to compare two integers
int compare(const void *a, const void *b)
{
	// Cast the pointers to int pointers
	int *x = (int*) a;
	int *y = (int*) b;

	// Compare the values pointed to by the pointers
	if (*x<*y)
		return -1;
	else if (*x > *y)
		return 1;
	else
		return 0;
}

int main()
{
	// Declare an array of integers
	int array[] = { 8, 5, 9, 2, 6 };

	// Declare an array of pointers to integers
	int *pointers[n];

	// Store the addresses of each element in the array of pointers
	for (int i = 0; i < n; i++)
		pointers[i] = &array[i];

	// Use qsort() to sort the array of pointers
	qsort(pointers, n, sizeof(int*), compare);

	// Print the sorted array
	for (int i = 0; i < n; i++)
		printf("%d ", *pointers[i]);

	return 0;
}