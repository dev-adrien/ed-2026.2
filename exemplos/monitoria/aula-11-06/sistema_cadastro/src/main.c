#include <stdio.h>
#include "aluno.h"

int main(int argc, char const *argv[])
{
    const int TOTAL = 3;
    Aluno turma[TOTAL]; // [struct{nome, matricula, nota}, struct{nome, matricula, nota}, struct{nome, matricula, nota}]

    printf("=== CADASTRO MODULAR DE ALUNOS ===");

    // Loop de cadastro: a main nao sabe COMO le, apenas pede para cadastrar!
    for (int i = 0; i < TOTAL; i++) {
        cadastrar_aluno(&turma[i], i + 1);
    }
    
    printf("\n=== RESUMO DOS ALUNOS CADASTRADOS ===\n");
    for (int i = 0; i < TOTAL; i++) {
        exibir_aluno(&turma[i]);
    }
}