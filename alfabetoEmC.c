#include <stdio.h>  // biblioteca pra usar printf e outras funções básicas

int main () {

    char alfabeto[26];  // cria um espaço pra guardar as 26 letras
    int z = 0;          // contador pra posição no array

    // esse for vai rodar de 'a' até 'z'
    for(char i = 'a'; i <= 'z'; i++) {
        alfabeto[z] = i;  // guarda a letra atual no array
        printf("%d - %c\n", z + 1, alfabeto[z]);  // mostra o número e a letra
        z++;  // vai pra próxima posição do array
    }

    // mostra todas as letras juntas
    printf("Alfabeto completo: %s\n", alfabeto);

    return 0;  // fim do programa
}