#include <stdio.h>


long power(long x , int n){
    if (n != 0)
        return (x * power(x, n - 1));
}

int main(){
    long uitkomst = power(5,5);
    printf("%.1u",uitkomst);
}
