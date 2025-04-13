#include <stdio.h>
#include <string.h>

struct Cliente {
    char nome[50];
    char cpf[50];
    char genero[50];
    float saldo;
};

int main () {

    struct Cliente c1;
    strcpy(c1.nome, "João");
    strcpy(c1.cpf, "123456789");
    strcpy(c1.genero, "Masculino");
    c1.saldo = 1000.50;

    struct Cliente c2;
    strcpy(c2.nome, "Maria");
    strcpy(c2.cpf, "0987654321");
    strcpy(c2.genero, "Feminino");
    c2.saldo = 898.27;

    printf("Cliente:\nNome:%s\nCPF:%s\nGenero:%s\nSaldo:%.2f\n\n", c1.nome, c1.cpf, c1.genero, c1.saldo);
    printf("Cliente:\nNome:%s\nCPF:%s\nGenero:%s\nSaldo:%.2f\n\n", c2.nome, c2.cpf, c2.genero, c2.saldo);


    FILE *arquivo = fopen("Cadastros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro!");
        return 1;
    }

    fprintf(arquivo, "Cliente:\nNome:%s\nCPF:%s\nGenero:%s\nSaldo:%.2f\n\n", c1.nome, c1.cpf, c1.genero, c1.saldo);
    fprintf(arquivo, "Cliente:\nNome:%s\nCPF:%s\nGenero:%s\nSaldo:%.2f\n\n", c2.nome, c2.cpf, c2.genero, c2.saldo);


    fclose(arquivo);
    printf("\nClientes salvos com sucesso!");

    return 0;
}