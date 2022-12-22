#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct StringCount {
  char *string;
  int count;
};
int compare_string_counts(const void *a, const void *b) {
  const struct StringCount *sa = a;
  const struct StringCount *sb = b;
  return strcmp(sa , sb);
}
int fill_string_counts(char *strings[N], struct StringCount *string_counts) {
  int num_unique_strings = 0;

  for (int i = 0; i < N; i++) {
    int found = 0;
    for (int j = 0; j < num_unique_strings; j++) {
      if (strcmp(strings[i], string_counts[j].string) == 0) {
        string_counts[j].count++;
        found = 1;
        break;
      }
    }
    if (!found) {
      string_counts[num_unique_strings].string = strings[i];
      string_counts[num_unique_strings].count = 1;
      num_unique_strings++;
    }
  }

  return num_unique_strings;
}
int main() {
  char *strings[N] = {"apple", "banana", "orange", "apple", "apple"};
  struct StringCount string_counts[N];
  int num_unique_strings = fill_string_counts(strings, string_counts); 
  qsort(string_counts, num_unique_strings, sizeof(struct StringCount), compare_string_counts);
  for (int i = 0; i < num_unique_strings; i++) {
    printf("%s appears %d times\n", string_counts[i].string, string_counts[i].count);
  }
  return 0;
}