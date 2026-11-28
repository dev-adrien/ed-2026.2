<table style="width: 100%; margin: 0 auto;">
<thead>
    <tr>
        <td rowspan="2"><img src="./../logo_taua_simples.png" style="width: 200px; margin: 0 auto"></td>
        <td colspan="2" align="center"><b>INSTITUTO FEDERAL DO CEARÁ - CAMPUS TAUÁ<br>
                        ANÁLISE E DESENVOLVIMENTO DE SISTEMAS</b>
        </td>
    </tr>
    <tr>
        <td><b>Professor:</b> Me. Lucas Mendes</td>
        <td><b>Disciplina:</b> Estrutura de Dados<br>
            <b>Turma:</b> S2
        </td>
    </tr>
    <tr>
        <td colspan="3" align="center"><strong>Lista de Exercícios (Sábado Letivo de 28/11/2026): Funções, Recursividade, Tipos Abstratos de Dados e Alocação Dinâmica</strong></td>
    </tr>
</thead>
</table>

**Questão 1.**

Uma equipe desenvolve um módulo responsável pelo cadastro de sensores em um sistema de gerenciamento de estações meteorológicas. O programa principal deve conseguir criar sensores, registrar medições e consultar informações, mas não deve acessar diretamente os campos internos utilizados pelo módulo. Nesse sentido, como o módulo pode ser estruturado para atender a esse requisito? Justifique sua resposta.

---

**Questão 2.**

Implemente um TAD para representar um sensor, que deve conter os seguintes campos: identificador do sensor (string), tipo do sensor (string), unidade de medida (string) e valor da última medição (float). O TAD deve fornecer funções para criar um sensor, registrar uma medição e consultar as informações do sensor. A implementação deve garantir que os campos internos não sejam acessados diretamente pelo programa principal. Utilize alocação dinâmica de memória para armazenar os dados do sensor.

---

**Questão 3.**

Durante o desenvolvimento de um sistema de gerenciamento de arquivos, um programador implementou funções que utilizam alocação dinâmica para armazenar temporariamente informações. Entretanto, o uso incorreto da memória pode provocar *memory leak* (vazamento de memória), situação em que um bloco previamente alocado não é liberado adequadamente, mesmo quando deixa de ser necessário.

Considerando o funcionamento das funções `malloc()` e `free()` na linguagem C, assinale a alternativa que apresenta um trecho de código que provoca **memory leak**.

**A)**
```c
void processar(void) {
    int *dados = malloc(10 * sizeof(int));

    if (dados == NULL)
        return;

    dados[0] = 100;
    free(dados);
}
```

**B)**
```c
int calcular(void) {
    int resultado = 0;
    return resultado;
}
```

**C)**
```c
int *criar_vetor(int quantidade) {
    int *vetor = malloc(quantidade * sizeof(int));

    if (vetor == NULL)
        return NULL;

    return vetor;
}

int main(void) {
    int *valores = criar_vetor(10);

    if (valores != NULL)
        free(valores);

    return 0;
}
```

**D)**
```c
int processar_arquivo(int tamanho) {
    char *buffer = malloc(tamanho);

    if (buffer == NULL)
        return -1;

    if (tamanho < 100)
        return -1;

    free(buffer);
    return 0;
}
```

**E)**
```c
void armazenar(void) {
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));

    if (a == NULL || b == NULL) {
        free(a);
        free(b);
        return;
    }

    *a = 10;
    *b = 20;

    free(a);
    free(b);
}
```

---

**Questão 4.**

Observe o código abaixo escrito na linguagem C.

```c
#include <stdio.h>
#define TAM 10

int funcao1(int vetor[], int v) {
    int i;
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == v)
            return i;
    }
    return -1;
}

int funcao2(int vetor[], int v, int i, int f) {
    int m = (i + f) / 2;

    if (v == vetor[m])
        return m;

    if (i >= f)
        return -1;

    if (v > vetor[m])
        return funcao2(vetor, v, m + 1, f);
    else
        return funcao2(vetor, v, i, m - 1);
}

int main(void) {
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    printf("%d - %d",
           funcao1(vetor, 15),
           funcao2(vetor, 15, 0, TAM - 1));

    return 0;
}
```

A respeito das funções implementadas, avalie as afirmações a seguir.

**I.** O resultado da impressão na linha 24 é: `7 - 7`.

**II.** A função `funcao2` pressupõe que os elementos do vetor estejam ordenados em ordem crescente, pois utiliza essa organização para determinar em qual metade do vetor deverá continuar a busca.

**III.** A função `funcao2` implementa uma estratégia iterativa na concepção do algoritmo.

É correto o que se afirma em:

**A)** I, apenas.

**B)** III, apenas.

**C)** I e II, apenas.

**D)** II e III, apenas.

**E)** I, II e III.