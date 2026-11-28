#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main(void){

  int x, y;
  float r;

  printf("======== Cadastro do Circulo ========\n");
  printf("Coordenadas do centro do circulo: (x y)\n");
  scanf("%d %d", &x, &y);
  
  printf("Raio do circulo:\n");
  scanf("%f", &r);

  Circulo *c = criar_circulo(x, y, r);

  printf("\n======== Cadastro do Ponto ========\n");
  printf("Coordenadas do ponto: (x y)\n");
  scanf("%d %d", &x, &y);

  Ponto *p = criar_ponto(x, y);

  float distancia = distancia_centro(c, p);
  printf("\nDistancia do centro do circulo ate o ponto: %.2f\n", distancia);

  int dentro = interior(c, p);
  if (dentro) {
    printf("O ponto esta contido no interior do circulo.\n");
  } else {
    printf("O ponto nao esta contido no interior do circulo.\n");
  }

  liberar_ponto(p);
  liberar_circulo(c);

  return 0;
}