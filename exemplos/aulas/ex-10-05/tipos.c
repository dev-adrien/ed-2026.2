#include <stdio.h>

int main(void) {

  // Tipos primitivos em C
  int idade = 25; // Tipo inteiro
  float altura = 1.75f; // Tipo ponto flutuante
  double peso = 70.5; // Tipo ponto flutuante de precisão dupla (dobro do float)
  char inicial = 'A'; // Tipo caractere

  // Imprimindo os valores usando printf
  printf("Idade: %d\n", idade); // Especificador %d para inteiros
  printf("Altura: %.2f\n", altura); // Especificador %f para float (%.2f significa 2 casas decimais)
  printf("Peso: %.2lf\n", peso); // Especificador %lf para double (%.2lf significa 2 casas decimais)
  printf("Inicial: %c\n", inicial); // Especificador %c para caractere

  return 0;
}