#include <stdio.h>
#define N 5

int main(){
    int array[N] = {1,2,3,4,25};
    for(int i = 1 ; i <= N ; ++i){
        if (array[0] < array[i]){
            array[0] = array[i];
        }
    }
    printf("Het grootste nummer is %d",array[0]);
}