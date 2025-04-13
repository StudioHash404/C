#include <stdio.h>
#include <string.h>

struct Cliente {
    char nome[50];
    char cpf[50];
    float saldo;
};

int main () {
    
    struct Cliente c1;
    strcpy(c1.nome, "Ata");
    strcpy(c1.cpf, "123456789");
    c1.saldo = 1000.50;
    
    printf("Cliente:\nNome:%s\nCPF:%s\nSaldo:%.2f\n", c1.nome, c1.cpf, c1.saldo);
    
    FILE *arquivo = fopen("Cadastro.txt", "w");
    
    if (arquivo == NULL){
        printf("Erro!");
        return 1;
    }
    
    fprintf(arquivo, "Cliente:\nNome:%s\nCPF:%s\nSaldo:%.2f", c1.nome, c1.cpf, c1.saldo);
    
    fclose(arquivo);
    printf("\nCliente salvo com sucesso!");
    
    return 0;
}