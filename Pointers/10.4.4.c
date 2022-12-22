#include <stdio.h>
#include <string.h>

// Gebruik met de subscript operator

void reverse_string(char* str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}

int main() {
  char word[] = "hello";
  printf("Original string: %s\n", word);
  reverse_string(word);
  printf("Reversed string: %s\n", word);
  return 0;
}

// zonder subscript

#include <stdio.h>
#include <string.h>

void reverse_string(char* str) {
  int length = strlen(str);
  char temp;
  char* front = str;
  char* back = str + length - 1;
  while (front < back) {
    temp = *front;
    *front = *back;
    *back = temp;
    front++;
    back--;
  }
}

int main() {
  char word[] = "hello";
  printf("Original string: %s\n", word);
  reverse_string(word);
  printf("Reversed string: %s\n", word);
  return 0;
}

/*De functie neemt een char* (pointer naar een teken) als parameter en wijzigt de string rechtstreeks door de tekens om te keren.
De functie heeft geen retourwaarde, maar de oorspronkelijke array wordt gewijzigd.
In de hoofdfunctie initialiseren we een char-array genaamd word en drukken we de originele string af.
Vervolgens roepen we de functie reverse_string aan en geven we word door, die de tekens in word omkeert. Tenslotte drukken we de omgekeerde string af.
Merk op dat als u een letterlijke string doorgeeft aan de functie reverse_string, zoals reverse_string("hallo"),
u een compilerfout krijgt omdat letterlijke strings niet wijzigbaar zijn. Je kunt alleen aanpasbare strings (d.w.z. char arrays) doorgeven aan de reverse_string functie.
*/