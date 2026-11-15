#include "aluno.h"
#include <stdio.h>
#include <string.h>

void limpar_buffer(void) {
    while (getchar() != '\n'); // limpeza = limpar a entrada do usuário
}

void cadastrar_aluno(Aluno *a, int indice) {
    printf("=== Registro de Aluno ===\n");

    printf("\nAluno %d:\n", indice);

    printf("Nome completo: ");
    fgets(a->nome, sizeof(a->nome), stdin);
    a->nome[strcspn(a->nome, "\n")] = '\0';

    printf("Matricula: ");
    scanf("%d", &a->matricula);

    printf("Nota: ");
    scanf("%f", &a->nota);

    limpar_buffer();
}

void exibir_aluno(const Aluno *a){
    printf("Aluno: %-15s | Mat: %04d | Nota: %.2f\n",
        a->nome, a->matricula, a->nota);
}
