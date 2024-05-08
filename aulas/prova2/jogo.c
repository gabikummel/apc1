/* 
  Desenvolva um programa em linguagem C, optando por um jogo de tabuleiro ou um sistema de cadastro de dados, que atenda aos seguintes critérios:
a) Deve conter apenas a função main(), sem precisar dividir o código em outras funções;
b) Implementar um menu principal, fazendo uso de comandos de seleção e repetição;
c) Garantir a validação da entrada de dados, permitindo apenas os valores aceitos e evitando possíveis erros durante a execução do programa;
d) Incorporar a capacidade de armazenar dados em memória, fazendo uso de matrizes e estruturas.
*/    

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0, opcao;

    do {
        printf("\n### Sistema de Cadastro de Alunos ###\n");
        printf("1. Adicionar aluno\n");
        printf("2. Visualizar alunos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numAlunos < MAX_ALUNOS) {
                    printf("\n### Adicionar Aluno ###\n");
                    printf("Nome: ");
                    scanf(" %[^\n]", alunos[numAlunos].nome);
                    printf("Idade: ");
                    scanf("%d", &alunos[numAlunos].idade);
                    printf("Nota: ");
                    scanf("%f", &alunos[numAlunos].nota);
                    numAlunos++;
                } else {
                    printf("Erro: Limite de alunos atingido!\n");
                }
                break;
            case 2:
                printf("\n### Lista de Alunos ###\n");
                if (numAlunos > 0) {
                    for (int i = 0; i < numAlunos; i++) {
                        printf("Nome: %s\n", alunos[i].nome);
                        printf("Idade: %d\n", alunos[i].idade);
                        printf("Nota: %.2f\n", alunos[i].nota);
                        printf("-------------------------\n");
                    }
                } else {
                    printf("Nenhum aluno cadastrado.\n");
                }
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

        while(getchar() != '\n');

    } while (opcao != 3);

    return 0;
}    