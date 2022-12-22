#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverse_string(char* str){
  int length = strlen(str);
  for (int i = 0 ; i < length / 2 ; ++i){
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}

int main(){
  char woord1[100] , woord2[100];
  printf("Geef je eerste woord? ");
  scanf("%s",woord1);
  printf("Geef je tweede woord? ");
  scanf("%s",woord2);

  reverse_string(woord1);
  reverse_string(woord2);

  int waarde = strcmp(woord1,woord2);
  if (waarde == 0){
    printf("Palindroom");
  }
  else {
    printf("Geen Palindroom");
  }
  return 0;
}