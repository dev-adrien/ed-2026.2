#include <stdio.h>

void troca_falsa(int a, int b);
void troca_funcional(int *x, int *y);

int main(int argc, char const *argv[])
{
    int a = 50;
    int b = 70;

    printf("Original: a = %d, b = %d\n", a, b);

    troca_falsa(a, b);

    printf("Trocados: a = %d, b = %d\n", a, b);

    troca_funcional(&a, &b);

    printf("Valores realmente trocados: a = %d, b = %d\n", a, b);
}

void troca_falsa(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void troca_funcional(int *x, int *y) {
    int temp = *x;
    *x = *y; // a e b da main
    *y = temp;
}



