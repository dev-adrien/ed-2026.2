#include <stdio.h>
#include <string.h>

int main(void) {

    char str[50];

    // scanf("%s", &string_exemplo);

    // scanf("%s", &str);
    // printf("%s", str);

    // fgets(destino, limite_em_bytes, canal_de_origem);

    fgets(str, sizeof(str), stdin);
    printf("%s", str);

    // destino: Onde o texto lido será gravado (nome)
    // sizeof(nome): O número máximo de bytes a serem lidos (impede o estouro de memória)
    // stdin: O canal de entrada padrão do teclado (Standard Input)

    // String Complement Span
    str[strcspn(str, "\n")] = '\0';
    
}