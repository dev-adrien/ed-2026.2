#include <stdio.h>

int main(void) {

    // tipos primitivos e formatadores específicos

    int idade = 20; // %d
    float altura = 1231231.78; // %f
    double pi = 3.1415; // %lf
    char inicial = 'a'; // %c

    char nome[] = "olá"; // %s

    // ['o', 'l', 'á', /0]

    // printf(string com formatador especifico, valor correspondente)
    printf("%s \n", nome);
    
}