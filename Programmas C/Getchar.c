#include <stdio.h>

int main(){
    int lijst[5];
    
    printf("Vijf Nummers? ");
    for(int i = 0 ; i < 5 ; ++i){
        scanf_s("%d", &lijst[i]);
    }

    printf("getallen : ");

    for(int i = 0 ; i < 5 ; ++i){
        printf("%d\n",lijst[i]);
    }
    return 0;
}