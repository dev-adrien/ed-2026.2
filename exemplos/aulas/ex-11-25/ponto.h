#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
  int x;
  int y;
} Ponto;

float calcular_distancia(Ponto p1, Ponto p2);
void imprimir_ponto(Ponto *p);
Ponto *criar_ponto(int x, int y);
void liberar_ponto(Ponto *p);

#endif