#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int quantidade; // 5
    // int inteiros[] = {1, 5, 7};

    printf("Quantos elementos você deseja guardar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade deve ser maior que zero!\n");
        return 1;
    }

    int *vetor = malloc(quantidade * sizeof(int));

    if (vetor == NULL) {
        printf("Falha ao alocar memoria!\n");
        return 1;
    }


    for (int i = 0; i < quantidade; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Array alocado dinamicamente: \n[");
    for (int i = 0; i < quantidade; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("]");

    // limpando ponteiro e devolvendo memória
    free(vetor);
    vetor = NULL;
}
