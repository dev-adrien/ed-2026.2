#include <stdio.h>

int main(void) {

  // Declaração e inicialização de um vetor (array) de inteiros com 5 elementos
  // Valores entre chaves {} são atribuídos aos elementos do vetor na ordem em que aparecem
  // O tamanho do vetor é definido entre colchetes []
  int vetor[5] = {10, 20, 30, 40, 50};

  // Acessando e imprimindo os elementos do vetor usando printf
  printf("vetor[0] = %d\n", vetor[0]);
  printf("vetor[1] = %d\n", vetor[1]);
  printf("vetor[2] = %d\n", vetor[2]);
  printf("vetor[3] = %d\n", vetor[3]);
  printf("vetor[4] = %d\n", vetor[4]);

  // Nesse caso, o compilador infere o tamanho do vetor a partir do número de elementos fornecidos
  int vetor2[] = {1, 2, 3, 4, 5};

  return 0;
}