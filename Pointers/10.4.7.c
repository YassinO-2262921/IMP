#include <stdio.h>
#include <string.h>

int count_words(char* str) {
  char delimiters[] = " ,."; // space, comma, period
  int count = 0;

  char* word = strtok(str, delimiters);
  while (word != NULL) {
    count++;
    word = strtok(NULL, delimiters);
  }

  return count;
}

int main() {
  char sentence[] = "This is a sentence with 7 words.";
  printf("Original string: %s\n", sentence);
  printf("Number of words: %d\n", count_words(sentence));
  return 0;
}

/*The count_words function takes a char* (pointer to a character) as a parameter and returns the number of words in the string. 
It uses the strtok function to split the string into individual words, and then counts the number of words.
In the main function, we initialize a char array called sentence and print the original string. We then call the count_words function and pass it sentence, 
which counts the number of words in the string and returns the result. Finally, we print the number of words in the string.
Note that the strtok function modifies the original string by replacing the delimiters with null characters, so make sure to use a modifiable string 
(i.e. char array) as the input to the count_words function. If you pass a string literal to the function, such as count_words("This is a sentence with 7 words."), you will 
get a compiler error.*/