#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "ponto.h"

float calcular_distancia(Ponto p1, Ponto p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;

    return sqrt(pow(dx, 2) + pow(dy, 2));
}

void imprimir_ponto(Ponto *p) {
    printf("Ponto (%d, %d) no plano cartesiano.\n", p->x, p->y);
}

Ponto *criar_ponto(int x, int y){
    Ponto *p = malloc(sizeof(Ponto));

    if (p == NULL) {
        return NULL;
    }

    p->x = x;
    p->y = y;

    return p;
}

void liberar_ponto(Ponto *p) {
    free(p);
}