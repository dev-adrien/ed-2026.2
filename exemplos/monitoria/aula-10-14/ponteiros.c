#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 0x7ffd5fbff8ac

    // int *ponteiro;
    int x = 10;
    int *p = &x;

    printf("1. Valor guardado em x: %d\n", x);
    printf("2. Endereco (ID) de x (&x): %p\n", &x);
    printf("3. Endereco guardado dentro de p: %p\n", p);
    printf("4. Conteudo da casa apontada por p (*p): %d\n", *p);

    *p = 50;
    printf("5. Novo valor de x apos fazer *p = 50: %d\n", x);
}
