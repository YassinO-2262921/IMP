#include <stdio.h>

int main(){
    int array[5][5] = {{10,11,12,13,14},{15,16,17,18,19}};
    for(int i = 0 ; i < 5 ; ++i){
        for(int j = 0 ; j < 5 ; ++j){
           int min = array[0][0];
            if(array[i][j] < array[0][0]){
                min = array[i][j];
                printf("%d",min);
            }
        }
    }
}