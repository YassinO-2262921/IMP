#include <stdio.h>

int main(){
    int values[10], som = 0 , aantal;
    double gemiddelde;

    printf("Hoeveel getallen in je lijst? ");
    scanf_s("%d",&aantal);

    for(int i = 0 ; i < aantal ; ++i){
        printf("Voer je getallen in : ");
        scanf_s("%d",&values[i]);
        som += values[i];
    }
    gemiddelde = (double) som / aantal;

    printf("Dit is je gemiddelde %.2lf",gemiddelde);
    return 0;
}