#include <stdio.h>
#include <math.h>
int main(){
    int i;
    float inverse;
    for(i = 1 ; i <= 12 ; ++i){
        inverse = pow(i,-1);
        printf(" %.5f\n %d",inverse,i);
    }
}
