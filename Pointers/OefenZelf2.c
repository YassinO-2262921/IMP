#include <stdio.h>
#include <string.h>

struct Player {
    char Naam[10];
    int Leeftijd;
};

int main(){
    struct Player player1;
    strcpy(player1.Naam , "Yassin");
    player1.Leeftijd = 20;
}