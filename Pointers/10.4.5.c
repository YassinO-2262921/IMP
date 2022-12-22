#include <stdio.h>
#include <string.h>

void replace_repetitions(char* str) {
  int length = strlen(str);
  char prev = str[0];
  int index = 1;
  for (int i = 1; i < length; i++) {
    if (str[i] == prev) {
      str[index++] = '+';
    } else {
      str[index++] = str[i];
      prev = str[i];
    }
  }
  str[index] = '\0'; //null terminator toevoegen
}

int main() {
  char word[] = "aaabbcccd";
  printf("Original string: %s\n", word);
  replace_repetitions(word);
  printf("String with repetitions replaced: %s\n", word);
  return 0;
}

/*The replace_repetitions function takes a char* (pointer to a character) as a parameter and modifies the string directly by replacing repetitions
of a preceding character with a '+' character. The function does not have a return value, but the original array is modified in place.
In the main function, we initialize a char array called word and print the original string. We then call the replace_repetitions function
and pass it word, which replaces repetitions of a preceding character with a '+' character in word in place. Finally, we print the modified string.
Note that if you pass a string literal to the replace_repetitions function, such as replace_repetitions("aaabbcccd"), you will get a compiler
error because string literals are not modifiable. You can only pass modifiable strings (i.e. char arrays) to the replace_repetitions function.*/