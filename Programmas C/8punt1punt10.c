#include <stdio.h>


int main(){
    float a ,b;
    tellerke(a,b);
}


int tellerke(float a , float b){
    int bewerking;
    float optelling, deling, aftrekking , vermenigvuldiging;

    printf("Kies je bewerking en geef 2 cijfers. ");
    scanf("%d %f %f",&bewerking,&a,&b);
    
    switch(bewerking){
        case '1':
            optelling = a + b;
            printf("%.4f", optelling);
            break;
        
        case '2':
            deling = a / b;
            printf("%.4f", deling);
            break;

        case '3':
            aftrekking = a - b;
            printf("%.4f", aftrekking);
            break;

        case '4':
            vermenigvuldiging = a * b;
            printf("%.4f",vermenigvuldiging);
            break;
    }
    return 0;
}