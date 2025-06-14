#include <stdio.h>

int main() {
    char alunonome[50];
    char email[50];
    int op;

    printf("Digite 1 para cadastrar um aluno: \n");
    scanf("%d", &op); //scanf para numeros
    getchar();

    if (op != 1) {
        printf("Operação inválida\n");
        return 1;
    }

    printf("Deseja cadastrar o aluno? (1 = sim, 2 = não): \n");
    scanf("%d", &op);
    getchar();
    //limpa o buffer do enter
    //getchar apenas pra scanf

    if (op == 1) {
        printf("Digite o nome do aluno: \n");
        fgets(alunonome, sizeof(alunonome), stdin);
        //fgets para strings
        
        printf("Digite o email do aluno: \n");
        fgets(email, sizeof(email), stdin);

        printf("Aluno cadastrado com sucesso!\n");
        printf("Nome: %sEmail: %s\n", alunonome, email);
    }

    return 0;
}