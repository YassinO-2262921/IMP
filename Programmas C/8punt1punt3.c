#include <stdio.h>
#include <math.h>

int main(){
    int som = summation();
    int fact = factorial(5);
    int exp = exponent(2);
    printf("%d %d %d", som , fact, exp);
}

int summation(){
    int som = 0;
    for(int i = 0 ; i <= 10 ; ++i){
        som += i;
    }
    return som;
}

int factorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; ++i){
        fact *= i;
    }
    return fact;
}

int exponent(int n){
    double xValues[10] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
    int uitkomst = 0;
    for(int i = 0 ; i <= 9 ; ++i){
        return pow(xValues[i],n);
    }
}