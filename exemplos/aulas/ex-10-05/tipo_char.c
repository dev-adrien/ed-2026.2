#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, NULL);

  printf("Olá, mundo!\n");

  char letra = 'A';

  printf("%c -> %d", letra, letra);

  return 0;
}