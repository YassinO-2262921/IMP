#include <stdio.h>

void swap(int **a, int **b) {
  int *temp = *a;
  *a = *b;
  *b = temp;
}


int main() {
  int a = 10;
  int b = 20;
  int *pa = &a;
  int *pb = &b;

  printf("Before swapping: a = %d, b = %d\n", a, b);

  swap(&pa, &pb);

  printf("After swapping: a = %d, b = %d\n", *pa, *pb);

  return 0;
}
