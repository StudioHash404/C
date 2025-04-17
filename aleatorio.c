#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL)); //ativar aleatório

    int chance = rand() % 100; //gera um numero entre 0 e 99

    if (chance < 40) { // chance de 40%
        printf("Você é POBRE!\n");
    } else {
        printf("Você é RICO!\n");
    }
    return 0;
}