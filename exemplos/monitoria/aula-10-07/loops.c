#include <stdio.h>

int main(void) {

    while (true) {
        
        printf("Isso vai ser imprimido no terminal");
        
        break; // encerra o loop e continua o código
        
        printf("Isso não vai ser imprimido no terminal");
        
        if (true) {
            continue; // pula para o próximo laço no mesmo loop
        }

        printf("Isso não vai ser imprimido no terminal");
    }

    do {

    } while (true);

    // for (inicio; teste; incremento) { bloco de código }
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
    }

    
}