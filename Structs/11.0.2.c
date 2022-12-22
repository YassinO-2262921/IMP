#include <stdio.h>
#include <math.h>

struct cords {
    int x;
    int y;
    int aftrekking;
}X1,Y1;

int calculate(){
    X1.x = 3;
    X1.y = 4;
    X1.aftrekking = X1.x - X1.y;

    Y1.x = 5;
    Y1.y = 9;
    Y1.aftrekking = Y1.x - Y1.y;

    int D = sqrt(pow(X1.aftrekking,2) + pow(Y1.aftrekking,2));

    return D;
}

int main(){
    int D = calculate();

    printf("De euclidische afstand is %d",D);

}