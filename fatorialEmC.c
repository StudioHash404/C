#include <stdio.h>

int main () {

    int numero;
    int i;
    int fatorial = 1;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if(numero < 0) {
        printf("Não aceitamos números negativos");
    }else{
        for(i=1; i <= numero; i++){
            fatorial *= i;
        }
        printf("o número %d em fatorial é: %d", numero, fatorial);
    }
    return 0;
}