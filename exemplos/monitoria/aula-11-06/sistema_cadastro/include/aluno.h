#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    // atributos
    char nome[50];
    int matricula;
    float nota;
} Aluno;

void cadastrar_aluno(Aluno *a, int indice);
void exibir_aluno(const Aluno *a);
void limpar_buffer(void);

#endif