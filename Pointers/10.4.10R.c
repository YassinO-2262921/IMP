#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindroom(char* str , int start , int end){
    if (start >= end){
        return true;
    }
    else if (str[start] != str[end]){
        return false;
    }
    else {
        return ispalindroom(str , start + 1 , end - 1);
    }
}

int main(){
    char woord[100];
    printf("Geef een woord?");
    scanf("%s",woord);

    if (ispalindroom(woord , 0 , strlen(woord)-1)){
        printf("Palindroom");
    }
    else {
        printf("Geen Palindroom");
    }
    return 0;
}