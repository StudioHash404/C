#include <stdio.h>

int main () {

    char aluno [100];
    char email [100];
    int op;

    printf("Digite 1 para casdastrar um aluno: \n");
    scanf("%d", &op);
    getchar();
    
    if(op != 1) {
        printf("Operacão inválida");
        return 1;
    }

    switch(op) {
    case 1:
        printf("Deseja cadastrar o aluno?: 1=sim, 2=não: \n");
        scanf("%d", &op);
        getchar();
        
        if (op == 1) {
            printf("Digite o nome do aluno: \n");
            fgets(aluno, sizeof(aluno), stdin);

            printf("Digite o email do aluno: \n");
            fgets(email, sizeof(email), stdin);

            printf("Aluno cadastrado com sucesso: \n");
            printf("Nome do aluno:\n%semail do aluno:\n%s", aluno, email);
            break;
        }
    case 2:
        printf("Você escolheu 2! Aluno não cadastrado.");
        return 1;
        break;
    }
    return 0;
}