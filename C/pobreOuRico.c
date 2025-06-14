#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
percebi que quanto maior o numero
mais difícil é, exemplo 99% deu 150 resultados
*/
int main () {
    srand(time(NULL)); //ativar aleatório

    int chance;
    int tentativas = 0;

    do { // loop
        tentativas++; //visualizar tentativas
        chance = rand() % 100; //gera um numero entre 0 e 99

        if (chance < 99) { // chance de 99% de ser pobre
            printf("Suas tentativas: %d: Você é POBRE!\n", tentativas);
        } else {
            printf("Suas tentativas: %d: Você é RICO!\n", tentativas);
        }
    }
    while (chance < 99);
    return 0;
}