#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // sizeof(); - retorna o tamanho do parametro em bits
    
    int *quarto = malloc(sizeof(int));

    if (quarto == NULL) {
        printf("Erro fatal: Memoria insuficiente no computador!\n");
        return 1;
    }

    *quarto = 42;

    printf("Quarto alugado com sucesso: %p\n", quarto);
    printf("Valor guardado dentro da memoria dinamica: %d\n", *quarto);
    
    free(quarto);

    printf("Valor de 'quarto' depois de free: %p\n", quarto);
    
    quarto = NULL;
    
    printf("Valor de 'quarto' depois de zerar seu valor: %p\n", quarto);

}
