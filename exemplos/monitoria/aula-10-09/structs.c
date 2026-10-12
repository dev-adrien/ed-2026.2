#include <stdio.h>
#include <string.h>

typedef struct {
    // atributos
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main(void){
    const int TOTAL = 2;
    Aluno turma[TOTAL];

    printf("=== Cadastro de Alunos ===\n");

    for (int i = 0; i < TOTAL; i++) {
        printf("\nRegistro do Aluno %d:\n", i + 1);

        printf("Nome completo: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        while (getchar() != '\n');
    }


    printf("\n=== Resumo dos Alunos Cadastrados ===\n");
    for (int i = 0; i < TOTAL; i++) {
        printf("Aluno: %-15s | Mat: %04d | Nota: %.2f\n",
               turma[i].nome, turma[i].matricula, turma[i].nota);
    }
}