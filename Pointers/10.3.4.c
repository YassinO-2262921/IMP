#include <stdio.h>
#define N 3	// Length of the vectors

// Function prototype
void vector_multiplication(float *vec1, float *vec2, float *result);

int main()
{
	// Define the input vectors
	float vec1[N] = { 1.0, 2.0, 6.0};

	float vec2[N] = { 4.0, 5.0, 6.0 };

	// Define the result vector
	float result[N];

	// Multiply the vectors
	vector_multiplication(vec1, vec2, result);

	// Print the result vector
	for (int i = 0; i < N; i++)
	{
		printf("%.1f ", result[i]);
	}

	return 0;
}

// Function definition
void vector_multiplication(float *vec1, float *vec2, float *result)
{

	// Multiply the vectors element-wise
	for (int i = 0; i < N; i++)
	{
		*(result + i) = *(vec1 + i) * *(vec2 + i);
	}
}