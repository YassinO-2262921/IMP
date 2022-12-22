#include <stdlib.h>

#include <stdio.h>

// Function to extract all possible combinations of three numbers
// from an array of numbers. The order of the numbers does not matter,
// so '123' is considered the same as '321'.
void extract_combinations(int nums[], int size) {
  // Check for invalid input
  if (size < 3) {
    printf("Error: array must have at least 3 elements\n");
    return;
  }

  // Declare three pointers to move through the array
  int * p1, * p2, * p3;

  // Loop through the array and use the pointers to select
  // three different numbers for each combination
  for (p1 = nums; p1 < nums + size - 2; p1++) {
    for (p2 = p1 + 1; p2 < nums + size - 1; p2++) {
      for (p3 = p2 + 1; p3 < nums + size; p3++) {
        // Print the combination
        printf("%d %d %d\n", * p1, * p2, * p3);
      }
    }
  }
}

int main() {
  // Initialize the array of numbers
  int nums[] = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
  };

  // Extract all combinations of three numbers
  extract_combinations(nums, 9);

  return 0;
}
