#include <stdio.h>

int fatorial(int x);

int main(int argc, char const *argv[])
{
    printf("%d\n", fatorial(5));
}

int fatorial(int x) {
    // 5! = 5 * 4 * 3 * 2 * 1 = 120
    // 0! = 1

    int resultado;

    if(x == 0) {
        resultado = 1;
    } else {
        resultado = x * fatorial(x - 1);
    }

    return resultado;
}