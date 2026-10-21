#include <stdio.h>

// assinatura de função
void hello();
int soma(int a, int b);
void desenhar_bloco(int qnt);

int main(int argc, char const *argv[]) {
    hello();    
    printf("%d\n", soma(5, 6));

    int x = 5;

    desenhar_bloco(x);
}

// funções
void hello() {
    printf("Olá, mundo!\n");
}

int soma(int a, int b) {
    return a + b;
}

void desenhar_bloco(int qnt) {
    for (int i = 0; i < qnt; i++) {
        for (int j = 0; j < qnt; j++) {
            printf("# ");
        }
        printf("\n");
    }
}