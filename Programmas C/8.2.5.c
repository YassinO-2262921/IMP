#include <stdio.h>



int main(){
    int values[10], aantal;
    double gemiddelde;

    printf("Hoeveel getallen in je lijst? ");
    scanf_s("%d",&aantal);

    for(int i = 0 ; i < aantal ; ++i){
        printf("Voer je getallen in : ");
        scanf_s("%d",&values[i]);
    }
    for(int i = 0 ; i < aantal ; ++i){
        int binair = values[i] % 2;
        printf("%d",binair);
        }
}   