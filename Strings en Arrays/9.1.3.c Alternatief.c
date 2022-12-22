#include <stdio.h>
#define N 5

int main(){
    int array[N] = {5,2,6,4,25};
    int temporary;

    for(int i = 0 ; i < N ; ++i){
        for(int j = i+1 ; j < N ; ++j){
            if(array[i] > array[j]){
                temporary = array[i];
                array[i] = array[j];
                array[j] = temporary;
            }
        }
    }
    printf("Dit zijn de gesorteerde nummers : ");
    for(int i = 0 ; i < N ; ++i){
        printf("%d ",array[i]);
    }
}