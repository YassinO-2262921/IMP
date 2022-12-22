#include <stdio.h>
#include <string.h>

void count_words(char * sentence, int * nums) {
  // initialize all elements in nums array to 0
  memset(nums, 0, sizeof(int) * 9);

  int i = 0;
  int length = 0;
  while (sentence[i] != '\0') {
    // if the current character is a space or newline,
    // increment the length counter and reset length to 0
    if (sentence[i] == ' ' || sentence[i] == '\n') {
      if (length > 0) {
        // increment the corresponding element in nums array
        if (length < 9) {
          nums[length - 1]++;
        } else {
          nums[8]++;
        }
        length = 0;
      }
    } else {
      length++;
    }
    i++;
  }

  // if the sentence ends without a space or newline,
  // increment the corresponding element in nums array
  if (length > 0) {
    if (length < 9) {
      nums[length - 1]++;
    } else {
      nums[8]++;
    }
  }
}

void print_bar_graph(int * nums) {
  for (int i = 0; i < 9; i++) {
    if (i < 8) {
      printf("%d: ", i + 1);
    } else {
      printf("9+: ");
    }
    for (int j = 0; j < nums[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  char * sentence = "hahahaha lol hauhezvb r ijozefije ef";
  int nums[9];

  count_words(sentence, nums);
  print_bar_graph(nums);

  return 0;
}