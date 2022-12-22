#include <stdio.h>

int main(int argc, char* argv[])
{
  // Ask the user for a name
  printf("Enter your name: ");

  // Read the name from the user
  char name[100];
  scanf("%s", name);

  // Print the name followed by "is gay"
  printf("%s is gay\n", name);

  return 0;
}
