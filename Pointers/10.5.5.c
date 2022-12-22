#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante voor het maximum aantal woorden
#define N 5

// Functie die wordt gebruikt door qsort() om de woorden op lengte te sorteren
int compare_length(const void *a, const void *b) {
  // Cast de void pointers naar char pointers
  const char *s1 = *(const char **)a;
  const char *s2 = *(const char **)b;

  // Bepaal de lengte van de twee woorden
  int len1 = strlen(s1);
  int len2 = strlen(s2);

  // Als de woorden dezelfde lengte hebben, sorteer ze alfabetisch
  if (len1 == len2) {
    return strcmp(s1, s2);
  }

  // Anders, sorteer ze op lengte
  return len1 - len2;
}

// Functie om de array van woorden te sorteren op lengte
void sort_words(char **words, int n) {
  qsort(words, n, sizeof(char *), compare_length);
}

int main() {
  // Array van woorden
  const char *words[N] = {"abc", "ab", "abcd", "a", "abcde"};

  // Sorteer de woorden op lengte
  sort_words(words, N);

  // Schrijf de gesorteerde woorden naar het scherm
  for (int i = 0; i < N; i++) {
    printf("%s\n", words[i]);
  }

  return 0;
}
