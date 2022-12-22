#include <stdio.h>
#include <stdlib.h>
#define N 3

struct student {
    char *name;
    int studentenummer;
};

struct student *students[N] = {NULL};


int main(){

    int *pointer;

    pointer = (int*) malloc(N * sizeof(students[N]));

    for (int i = 0 ; i < N ; ++i){
        if(students[i] == NULL ){
            printf("Memory cannot be allocated");
        }
    }

    printf("Geef de namen in?\n");
    for(int i = 0 ; i < N ; ++i){
        scanf("%s" , pointer + i);
    }

    printf("Geef de nummers in?\n");
    for(int i = 0 ; i < N ; ++i){
        scanf("%d" , pointer + i + 1);
    }

    printf("Input Values\n");
    for(int i = 0 ; i < N ; ++i){
        printf("%s , %d",*(pointer + i),*(pointer+i+1));
    }
    return 0;
}