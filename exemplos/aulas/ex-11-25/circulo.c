#include <stdlib.h>

#include "circulo.h"

struct circulo {
  Ponto centro;
  float raio;
};

Circulo *criar_circulo(int x, int y, float r){
    Circulo *c = malloc(sizeof(Circulo));

    if (c == NULL) {
        return NULL;
    }

    c->centro.x = x;
    c->centro.y = y;
    c->raio = r;

    return c;
}

void liberar_circulo(Circulo *c) {
  free(c);
}

float distancia_centro(Circulo *c, Ponto *p) {
  return calcular_distancia(c->centro, *p);
}

int interior(Circulo *c, Ponto *p) {
  float distancia = distancia_centro(c, p);

  return (distancia <= c->raio);
}