#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Wat is een pointer? , In het geheugen heb je een ADRES en een VALUE in dat ADRES
bijvoorbeeld "INT C = 4 dan staat C bijvoorbeeld op ADRES 1000"
Een pointer is dus eigenlijk gewoon een variabel waarvan de VALUE een ADRES is*/

void increment(int *arr , int size);

int main(){
    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Originele : ");
    for (int i = 0 ; i < size ; ++i){
        printf("%d ",arr[i]);
    }
    printf("\n");

    increment(arr,size);

    printf("Verhoogde : ");
    for (int j = 0 ; j < size ; ++j){
        printf("%d ",arr[j]);
    }
    printf("\n");

    decrement(arr,size);

    printf("Verminderde : ");
        for (int k = 0 ; k < size ; ++k){
            printf("%d ",arr[k]);
        }
    printf("\n");

    return 0;
}

void increment(int *arr , int size){
    for (int i = 0 ; i < size ; ++i){
        *(arr + i) += 1;
    }
}

void decrement(int *arr , int size){
    for (int k = 0 ; k < size ; ++k){
        *(arr + k) -= 2;
    }
}

