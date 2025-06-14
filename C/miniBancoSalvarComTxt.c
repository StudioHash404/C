#include <stdio.h>
#include <string.h>

struct Cliente {
    char nome[50];
    char cpf[50];
    float saldo;
};

int main () {
    struct Cliente c1;

    strcpy(c1.nome, "João Silva");
    strcpy(c1.cpf, "123456789");
    c1.saldo = 1000.50;

    FILE *arquivo = fopen("clientes.txt", "w"); //w = escrever em inglês

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    // Gravae os dados no arquivo
    fprintf(arquivo, "%s\n%s\n%.2f\n", c1.nome, c1.cpf, c1.saldo);

    fclose(arquivo);
    printf("Cliente salvo com sucesso!\n");
    return 0;
}