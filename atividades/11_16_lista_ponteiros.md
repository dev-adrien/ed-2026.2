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
        <td colspan="3" align="center"><strong>Lista de Exercícios (Aula de 16/11/2026): Ponteiros e Aritmética de Ponteiros</strong></td>
    </tr>
</thead>
</table>

**Questão 01 – Fundamentos de ponteiros**

Considere o código:

```c
int a = 10;
int b = 20;
int *p = &a;

*p = 30;
p = &b;
*p = 50;

printf("%d\n", a);
printf("%d\n", b);
```

Responda:

a) Qual será a saída do programa?

b) Qual a diferença entre `p`, `*p` e `&b`?

c) Explique como a utilização do ponteiro permite modificar o valor de uma variável.

---

**Questão 02 – Aritmética de ponteiros**

Considere:

```c
int vet[] = {10, 20, 30, 40, 50};
int *p = vet;
```

Determine o resultado das seguintes expressões:

a) `*p`

b) `*(p + 2)`

c) `*(p + 4)`

d) `*p + 2`

e) `(*p) + 2`

f) Após executar `p += 3`, qual será o valor de `*p`?

---

**Questão 03 – Ponteiros e strings**

Considere o código:

```c
char texto[] = "IFCE";
char *p = texto;

printf("%c\n", *p);
printf("%c\n", *(p + 1));
printf("%c\n", *(p + 2));
printf("%c\n", *(p + 3));

*(p + 1) = 'P';

printf("%s\n", texto);
```

Responda:

a) Qual será a saída do programa?

b) Qual é a função do caractere `'\0'` em uma string?

c) Explique como a expressão `*(p + 1)` acessa e modifica um caractere do vetor.

---

**Questão 04 – Ponteiros e funções**

Implemente uma função chamada `trocar` que receba dois ponteiros para inteiros e troque os valores das variáveis apontadas.

No programa principal:

a) Declare duas variáveis inteiras inicializadas com 10 e 20.

b) Chame a função `trocar`, passando os endereços das duas variáveis.

c) Apresente os valores após a troca.

d) Explique por que é necessário utilizar ponteiros para modificar diretamente as variáveis originais.

**Questão 05 – Percorrendo vetores com ponteiros**

Implemente um programa em C que:

a) Declare um vetor de 5 números inteiros.

b) Solicite ao usuário que informe os valores dos elementos.

c) Utilize um ponteiro para percorrer o vetor e calcular a soma dos elementos.

d) Identifique o maior elemento do vetor utilizando ponteiros.

e) Apresente a soma e o maior elemento encontrados.

**Restrição:** Não utilize a notação de índices (`vet[i]`) para acessar os elementos do vetor. Utilize exclusivamente aritmética de ponteiros.