#include <stdio.h>
#include "ponto.h"

int main(void){

  int x, y;

  // Leitura do primeiro ponto
  printf("Digite as coordenadas do primeiro ponto (x y): ");
  scanf("%d %d", &x, &y);

  Ponto *p1 = criar_ponto(x, y);
  if (p1 == NULL) {
    return 1;
  }

  imprimir_ponto(p1);

  liberar_ponto(p1);
  return 0;
}