#ifndef PONTO_H
#define PONTO_H

struct ponto {
  int x;
  int y;
};

float calcular_distancia(struct ponto p1, struct ponto p2);

#endif