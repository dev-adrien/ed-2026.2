#include <stdio.h>
#include <string.h>


// comparador de string
int main(void) {

    char nome[50];
    char segredo[] = "ESTRUTURA";

    // x = input("Digite seu nome")
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0'; // ignorar isso por enquanto

    printf("\nOla, %s!\n", nome);
    printf("Comprimento util: %lu caracteres.\n", strlen(nome)); // %lu = unsigned long int


    printf("\nInspecao da memoria (caractere por caractere):\n");
    for (int i = 0; i <= (int)strlen(nome); i++) {
        if (nome[i] == '\0') {
            printf("Posicao [%d] -> '\\0' (Terminador de String)\n", i);
        } else {
            printf("Posicao [%d] -> '%c'\n", i, nome[i]);
        }
    }

    printf("\nAcerte a palavra-chave\n");
    char tentativa[50];
    fgets(tentativa, sizeof(tentativa), stdin);
    tentativa[strcspn(tentativa, "\n")] = '\0';

    // strcmp(tentitiva, segredo)
    // if (tentativa == segredo) {}
    // tentativa[0] == segredo[0]
    // strcmp(tentativa, segredo) == 0
    if (strcmp(tentativa, segredo) == 0) {
        printf("Acesso liberado! As palavras sao identicas.\n");
    } else {
        printf("Acesso negado! As palavras sao diferentes.\n");
    }


    char l1 = 'a';
    char l2 = 'A';

    printf("%d, %d", l1, l2);
}