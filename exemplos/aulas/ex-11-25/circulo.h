#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

typedef struct circulo Circulo;

Circulo *criar_circulo(int x, int y, float r);
void liberar_circulo(Circulo *c);
float distancia_centro(Circulo *c, Ponto *p);
int interior(Circulo *c, Ponto *p);

#endif