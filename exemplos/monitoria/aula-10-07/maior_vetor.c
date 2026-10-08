#include <stdio.h>

// Programa para descobrir o maior número inteiro de um vetor e imprimir o vetor

int main(void) {

    const int TAMANHO = 8; // 0, 1, 2 , 3, 4, 5, 6, 7
    int numero[8] = {12, 5, 45, 1, -1, 7, 67, 4};

    int maior = numero[0];
    int posicaoMaior = 0;

    for (int i = 1; i < TAMANHO; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
            posicaoMaior = i;
        }
    }

    printf("[");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d, ", numero[i]);
    }
    printf("]");

    printf("\nMaior: %d\nPosição: %d\n", maior, posicaoMaior);
}