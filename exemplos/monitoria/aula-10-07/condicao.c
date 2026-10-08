#include <stdio.h>

int main(void) {
    
    // equivalente ao input no python:
    // scanf("%f", endereço da variável)

    // EXEMPLO EM PYTHON:
    //  x = int(input("Digite um número: "))
    
    // MESMO EXEMPLO EM C:
    int x;
    printf("Digite um número: ");
    scanf("%d", &x); // & antes do nome da variável retorna o endereço na memória dessa variável

    // equivalente ao if, elif e else no python:
    if (x == 2 && 2 > 50) { // || é equivalente ao or e && é equivalente ao and
        printf("Teste");
    }

    if (x == 2 || x == 50) { // || é equivalente ao or e && é equivalente ao and
        printf("Teste1");
    } else if (x == 3) {
        printf("Teste2");
    } else {
        printf("Teste3");
    }
}