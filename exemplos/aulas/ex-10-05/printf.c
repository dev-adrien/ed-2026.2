#include <stdio.h>

int main(void) {
  int dia, mes, ano;
  dia = 15;
  mes = 8;
  ano = 2026;
  
  // Especificadores de formato para inteiros: %d
  printf("Hoje é dia %d/%d/%d.\n", dia, mes, ano);

  // O 'f' ao final indica que é um float
  // Sem o 'f', o número seria tratado como double
  float altura = 1.75f;

  // Especificador %f para float, com precisão de 2 casas decimais (%.2f)
  printf("Altura: %.2f\n", altura); // Saída: Altura: 1.75
  
  return 0;
}