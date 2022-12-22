#include <stdio.h>
#include <stdbool.h>

// Function that checks whether two vectors are orthogonal
bool is_orthogonal(const double *a, const double *b, int n)
{
	double dot_product = 0;
	for (int i = 0; i < n; i++)
	{
		dot_product += a[i] *b[i];
	}

	return dot_product == 0;
}

int main(void)
{
	// Define the vectors
	double a[] = { 1, -1, 0 };

	double b[] = { 1, 0, 0 };

	// Check if the vectors are orthogonal
	if (is_orthogonal(a, b, 3))
	{
		printf("The vectors are orthogonal.\n");
	}
	else
	{
		printf("The vectors are not orthogonal.\n");
	}

	return 0;
}