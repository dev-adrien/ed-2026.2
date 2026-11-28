#include <math.h>
#include "ponto.h"

float calcular_distancia(struct ponto p1, struct ponto p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;

    return sqrt(pow(dx, 2) + pow(dy, 2));
}