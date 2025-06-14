#include <stdio.h>
#include <string.h>

struct Carros {
    char marca[50];
    char nome[50];
    char modelo[50];
    float valor;
    int ano;
};

void preenchercarros(struct Carros *carro, char marca[], char nome[], char modelo[], float valor, int ano) {
    strcpy(carro->marca, marca);
    strcpy(carro->nome, nome);
    strcpy(carro->modelo, modelo);
    carro->valor = valor;
    carro->ano = ano;
}

void mostrarcarro(struct Carros carro) {
    printf("|---------------------------|\n");
    printf("|Marca: %s\n", carro.marca);
    printf("|Nome: %s\n", carro.nome);
    printf("|Modelo: %s\n", carro.modelo);
    printf("|Valor: R$ %.2f\n", carro.valor);
    printf("|Ano: %d\n", carro.ano);
    printf("|---------------------------|\n");
}

int main () {

    struct Carros carros[3];
    preenchercarros(&carros[0], "Toyota", "Corolla", "Altis Premium 2.0 Flex", 158000.00, 2024);
    mostrarcarro(carros[0]);
    return 0;
}